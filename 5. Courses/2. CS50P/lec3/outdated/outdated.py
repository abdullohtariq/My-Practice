def main():
    while True:
        date = input("Date: ").strip()
        try:
            if "/" in date:
                 m, d, y = date.split("/")
                 m, d, y = int(m), int(d), int(y)
            elif "," in date:
                part = date.split(" ")
                m = months[part[0]]
                d, y = int(part[1].replace(",","")), int(part[2])
            else:
                raise ValueError

            if 1 <= m <= 12 and 1 <= d <= 31:
                print(f"{y:04}-{m:02}-{d:02}")
                break
        except:
            continue


months = {
    "January" : 1,
    "February": 2,
    "March": 3,
    "April" : 4,
    "May": 5,
    "June": 6,
    "July": 7,
    "August":8,
    "September":9,
    "October": 10,
    "November": 11,
    "December": 12
}


if __name__ == "__main__":
    main()
