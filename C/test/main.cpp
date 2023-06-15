#include <iostream>
#include <opencv2/opencv.hpp>
#include <curl/curl.h>
#include <fstream>
#include <zxing/common/GlobalHistogramBinarizer.h>
#include <zxing/Binarizer.h>
#include <zxing/BinaryBitmap.h>
#include <zxing/DecodeHints.h>
#include <zxing/MultiFormatReader.h>
#include <zxing/qrcode/ErrorCorrectionLevel.h>
#include <zxing/qrcode/QRCodeReader.h>
#include <zxing/Result.h>
#include <zxing/LuminanceSource.h>
#include <zxing/common/HybridBinarizer.h>

using namespace std;
using namespace cv;
using namespace zxing;
using namespace zxing::qrcode;

string url = "http://192.168.137.191:8080/shot.jpg";

Mat getCameraImage()
{
    CURL *curl;
    CURLcode res;
    Mat img;
    curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &img);
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 0L);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    return img;
}

string decodeQRCode(Mat image)
{
    cvtColor(image, image, COLOR_BGR2GRAY);

    Ref<HybridBinarizer> binarizer(new HybridBinarizer(new ArrayRef<char>((char *)image.data, image.cols * image.rows)));
    Ref<BinaryBitmap> bitmap(new BinaryBitmap(binarizer));

    DecodeHints hints(DecodeHints::QR_CODE_HINT);
    hints.setTryHarder(true);

    Ref<Result> result;
    try
    {
        Ref<Reader> reader(new QRCodeReader());
        result = reader->decode(bitmap, hints);
    }
    catch (const zxing::Exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    if (result)
    {
        return result->getText()->getText();
    }

    return "";
}

int main()
{
    VideoCapture capture;
    capture.open(0);

    namedWindow("Android_cam", WINDOW_NORMAL);

    while (true)
    {
        Mat frame;
        capture.read(frame);
        if (frame.empty())
            break;

        resize(frame, frame, Size(1000, 1800));

        imshow("Android_cam", frame);

        if (waitKey(10) == 'q')
            break;

        Mat img = getCameraImage();

        if (!img.empty())
        {
            string decodedText = decodeQRCode(img);
            if (!decodedText.empty())
            {
                cout << "Obsah QR kódu: " << decodedText << endl;
                // Otevřít odkaz v prohlížeči
                // webbrowser.open(decodedText);
            }
        }
    }

    capture.release();
    destroyAllWindows();

    return 0;
}