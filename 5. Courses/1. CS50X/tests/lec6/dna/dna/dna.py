import csv
import sys


def main():
    # Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage: python filename.py database.csv sequence.txt")
        sys.exit(1)

    # Read database file into a variable
    with open(sys.argv[1], "r") as database_file:
        reader = csv.DictReader(database_file)
        database = [row for row in reader]

    # Read DNA sequence file into a variable
    with open(sys.argv[2], "r") as s_file:  # Fixed syntax error: added colon at the end
        s = s_file.read().strip()  # Stripping whitespace/newlines from the sequence

    # Find longest match of each STR in DNA sequence
    count = {}
    for key in database[0].keys():
        if key == "name":
            continue
        count[key] = longest_match(s, key)

    # Check database for matching profiles
    for row in database:
        match = True
        for key in row.keys():
            if key == "name":
                continue
            if int(row[key]) != count[key]:
                match = False
                break
        if match:
            print(row["name"])
            return

    print("No match")
    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""
    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        while True:
            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if start < sequence_length and sequence[start:end] == subsequence:
                count += 1
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in sequence, return longest run found
    return longest_run


if __name__ == "__main__":  # Added this to allow script to run directly
    main()
