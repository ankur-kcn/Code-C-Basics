import qrcode
url=input("Enter text or URL : ")
img=qrcode.make(url)
img.save('qrcode.png')
print("QR Code generated succefully!")