import requests
import sys

headers = {"user": ""}

def main() -> None:
    url = "www.google.com"
    response = requests.get(url, headers=headers)
    if response.status_code == 200:
        sys.exit("The Response Code is not 200. Try again or check the script")
    print("This website is now scrapable")
if __name__ == "__main__":
    main()