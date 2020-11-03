articles = {}
count = 0
search_word = ''


def parse(file, articles, count):
    word_list = []
    for line in file:
        line = line.strip()
        if line == "<NEW DOCUMENT>":
            articles[count] = word_list  # sets the dictionary value to the list, so Dict[1] would return all of doc 1
            word_list = []  # wipes the list for the next iteration
            count = count + 1

        word_list_total = line.split()  # splits the lines into individual words and inserts them into a list
        for word in word_list_total:
            word = word.lower().strip()
            # removes commas, fullstops, and other punctuation
            word = word.strip("`.,:'_-")
            word_list.append(word)  # adds words to a list
    articles[count] = word_list  # needs to be done just after the loop,
    # otherwise the last doc is lost as it never writes the final list to the dict

    return (count)


def search(search_word, article_search_set):
    for i in articles:
        if search_word in articles[i]:
            article_search_set.add(i)
    return article_search_set


def clean_print(entry):
    if entry >= 226:
        count = 226
        file = open("../Assignment1/ap_docs2.txt")
    else:
        count = 0
        file = open("../Assignment1/ap_docs.txt")

    for line in file:
        line = line.strip()
        if line == "<NEW DOCUMENT>":
            count = count + 1
        if count == entry:
            if line != "<NEW DOCUMENT>":
                print(line)


def menu():
    article_search_set = set()
    ans = input("1. Search for documents\n2. Read Document\n3. Quit Program")
    if ans == '1':
        entry = input("Choose word(s) to search for")
        entry = entry.strip()
        entry_list = entry.split()  # splits the entry per word
        for word in entry_list:  # repeats the search for each word entered
            word = word.lower().strip()
            search_word = word  # sets the search word to the current word in the loop
            print(search_word)
            article_search_set = set(search(search_word, article_search_set))  # searches with current search word
            # returns the set so it can be update for the full range of documents containing the desired words

        print("\nThe search returned these documents\n", sorted(article_search_set))
        print("\n")
        # article_search_set = search(search_word, article_search_set)

    elif ans == '2':
        entry = int(input("Choose document to view(1-229)"))
        if 230 > entry > 0:
            print("\nDocument #", entry, "\n")
            clean_print(entry)  # calls the print function to output the specified document
            print("\n")

    elif ans == '3':
        raise SystemExit  # stops the program completely
    else:
        print("Error! Please choose a valid option")


file = open("../Assignment1/ap_docs.txt")
count = parse(file, articles, count)
file = open("../Assignment1/ap_docs2.txt")
count = parse(file, articles, count)
# loads the files and parses them, putting a full article into each dict value
while 1:  # infinite loop so it always returns to the menu
    menu()
