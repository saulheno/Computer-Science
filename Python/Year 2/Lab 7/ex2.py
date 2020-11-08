import string

entry = "Madam, I'm Adam"

entry = entry.lower()
entry = entry.strip(string.punctuation)
entry = entry.replace(' , ', '')

print(entry)