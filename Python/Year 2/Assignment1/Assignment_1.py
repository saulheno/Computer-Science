articles = {}
count = 0
search_word = ''


def parse(file, articles, count):
    for line in file:
        line = line.strip()
        if line == "<NEW DOCUMENT>":
            count = count + 1
        word_list_total = line.split()  # splits the lines into individual words and inserts them into a list
        for word in word_list_total:
            word = word.lower()
            word = word.strip("`.,:'_-")  # removes punctuation
            if word not in articles:  # if the word hasnt been entered already a new set is made in the dictionary
                articles[word] = set()  # with it as a key
            articles[word].add(count)  # adds the document number to the word dictionary
    return (count)


def search(search_word, article_search_set):
    if search_word not in articles :
        print('"',search_word, '"', "is not in any documents. Disregarding")
    else:
        if len(article_search_set) == 0: # checks to see if the results set is empty
            article_search_set = articles[search_word] # if it is, it sets the entire first search result to the set
        else:
            article_search_set = article_search_set & articles[search_word] # otherwise it finds the common values and keeps
    return article_search_set                                           # those only


def clean_print(entry):
    if entry >= 226: # cheks if the entry is above 226
        count = 226 # if it is, the count is seeded to 226, this means this document is in the second TXT file
        file = open("ap_docs2.txt") # opens second txt file
    else:
        count = 0 # sets count to 0 as this is the first txt file
        file = open("ap_docs.txt") # opens first txt file

    for line in file:
        line = line.strip() # strips it down to lines so it can print 1 line at a time
        if line == "<NEW DOCUMENT>": # checks if the line is the new doc header
            count = count + 1 # if it is, the count is incremented
        if count == entry: # keeps incrementing until it reaches the desired position in the file
            if line != "<NEW DOCUMENT>": # makes sure to only print lines that are not the New Document header
                print(line)


def menu():
    article_search_set = set()
    ans = input("1. Search for documents\n2. Read Document\n3. Quit Program")
    if ans == '1':
        entry = input("Choose word(s) to search for")
        entry = entry.strip()
        entry_list = entry.split()  # splits the entry per word
        for word in entry_list:  # repeats for each word entered, running each word through the function separately
            word = word.lower().strip()
            search_word = word  # sets the search word to the current word in the loop
            article_search_set = set(search(search_word, article_search_set))  # searches with current search word
            # returns the set so it can be update for the full range of documents containing the desired words

        if len(article_search_set) == 0:
            print("\nThe search returned no relevant documents\n")
        else:
            print("\nThe search returned these documents\n", sorted(article_search_set))

    elif ans == '2':
        entry = int(input("Choose document to view(1-229)"))
        if 230 > entry > 0: # makes sure entry is in the correct range
            print("\nDocument #", entry, "\n")
            clean_print(entry)  # calls the print function to output the specified document
            print("\n")
        else:
            print("Error! Please choose a valid option between 1 and 229")

    elif ans == '3':
        raise SystemExit  # stops the program completely
    else:
        print("Error! Please choose a valid option")


file = open("ap_docs.txt")
count = parse(file, articles, count)
file = open("ap_docs2.txt")
count = parse(file, articles, count)
# loads the files and parses them, putting a full article into each dict value
while 1:  # infinite loop so it always returns to the menu
    menu()
