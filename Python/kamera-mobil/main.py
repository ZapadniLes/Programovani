import requests
import cv2
import numpy as np
import imutils
import tkinter as tk
import datetime
from PIL import Image
import zbar

url = "http://192.168.137.191:8080/shot.jpg"

def capture_image():
    img_resp = requests.get(url)
    img_arr = np.array(bytearray(img_resp.content), dtype=np.uint8)
    img = cv2.imdecode(img_arr, -1)
    img = imutils.resize(img, width=1000, height=1800)
    cv2.imshow("Android_cam", img)
    filename = datetime.datetime.now().strftime("%Y%m%d%H%M%S") + ".png"
    cv2.imwrite(filename, img)
    print("Obrázek uložen jako:", filename)
    decode_qr_code(filename)


def decode_qr_code(image_path):
    img = Image.open(image_path).convert("L")
    width, height = img.size
    raw = img.tobytes()

    scanner = zbar.Scanner()
    results = scanner.scan(raw, width, height)

    for result in results:
        print("Obsah QR kódu:", result.data.decode("utf-8"))

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