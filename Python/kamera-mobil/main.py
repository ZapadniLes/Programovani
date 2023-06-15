import requests
import cv2
import numpy as np
import imutils
import tkinter as tk
from PIL import Image
import zxing
import webbrowser

url = "http://192.168.137.191:8080/shot.jpg"

def capture_image():
    img_resp = requests.get(url)
    img_arr = np.array(bytearray(img_resp.content), dtype=np.uint8)
    img = cv2.imdecode(img_arr, -1)
    img = imutils.resize(img, width=1000, height=1800)
    cv2.imshow("Android_cam", img)
    decode_qr_code(img)
    


def decode_qr_code(image):
    pil_image = Image.fromarray(image)
    pil_image.save("temp.jpg")
    barcode = zxing.BarCodeReader().decode("temp.jpg", try_harder=True)
    if barcode is not None:
        print("Obsah QR kódu:", barcode.raw)
        webbrowser.open(barcode.raw, new=2)

root = tk.Tk()

capture_button = tk.Button(root, text="Capture Image", command=capture_image)
capture_button.pack()

while True:
    root.update()

    img_resp = requests.get(url)
    img_arr = np.array(bytearray(img_resp.content), dtype=np.uint8)
    img = cv2.imdecode(img_arr, -1)
    img = imutils.resize(img, width=1000, height=1800)
    cv2.imshow("Android_cam", img)
    if cv2.waitKey(10) & 0xFF == ord('q'):  # Press 'q' key to exit
        break

cv2.destroyAllWindows()