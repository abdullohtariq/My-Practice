from cs50 import get_string

# Get the text input from the user
text = get_string("Text: ")

# Number of letters in the text (ignoring punctuation, spaces, and digits)
letters = 0
for c in text:
    if c.isalpha():
        letters += 1

# Number of words in the text (split by spaces)
words = 0
for word in text.split():
    if any(c.isalpha() for c in word):  # Ensure the word contains at least one letter
        words += 1

# Number of sentences in the text (count '.', '!', and '?')
sentences = text.count('.') + text.count('!') + text.count('?')

# Check if no words were found to avoid division by zero
if words == 0:
    print("No words found.")
else:
    # Average number of letters per 100 words
    L = letters / words * 100

    # Average number of sentences per 100 words
    S = sentences / words * 100

    # Coleman-Liau index formula
    grade = 0.0588 * L - 0.296 * S - 15.8

    # Output the grade based on the calculated index
    if grade < 1:
        print("Before Grade 1")
    elif grade >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {round(grade)}")
