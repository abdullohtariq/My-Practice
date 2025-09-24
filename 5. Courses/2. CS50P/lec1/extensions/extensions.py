#.gif -> image/gif
#.jpg ->image/jpeg
#.jpeg ->image/jpeg
#.png ->image/png
#.pdf ->application/pdf
#.txt ->text/plain
#.zip ->application/zip

fileName = input("Give Your File: ").strip().lower()

if fileName.endswith("gif"):
    print("image/gif")

elif fileName.endswith("jpg") or fileName.endswith("jpeg"):
    print("image/jpeg")

elif fileName.endswith("png"):
    print("image/png")

elif fileName.endswith("pdf"):
    print("application/pdf")

elif fileName.endswith("txt"):
    print("text/plain")

elif fileName.endswith("zip"):
    print("application/zip")

else:
    print("application/octet-stream")
