import sys
import requests


def main():
    # Validating the argument satuts
    if len(sys.argv) != 2:
        sys.exit("Missing command-line argument")
    try:
        number = float(sys.argv[1])
    except ValueError:
        sys.exit("Command-line argument is not a number")


    # checking price from api Key
    try:
        info = requests.get("https://rest.coincap.io/v3/assets/bitcoin?apiKey=dfa5ed7399ccb14c635f85eec4fd7afee15a07451e555744752fd3c6ad1d5ba4").json()
    except requests.RequestException:
        sys.exit()
    price = float(info["data"]["priceUsd"])

    #printing your amount
    print(f"${price * number:,.4f}")


if __name__ == "__main__":
    main()
