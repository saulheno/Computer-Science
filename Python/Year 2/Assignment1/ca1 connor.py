"""
NEED TO DO:
when printing documents get rid of whitespace and junk characters
error checking when entering which document to read.. if not in range print error/warning
in document "1" the "<NEW DOCUMENT>" is still there
"""

import string

"""
loading the file path for reading
"""
FILE_PATH = "ap_docs.txt"

DOCUMENTS = {}

"""
function to call main menu
"""
def menu():
    print("_"*25) # separation line to make the output look a little nicer
    print("\n1. Enter search terms")
    print("2. Read document")
    print("3. Quit document")

"""
print document from doc_number
"""
def read_document(doc_number):
    document = DOCUMENTS[doc_number]
    print(document)

"""
load file into memory as read only, preserves system memory this way
"""
def load_file(file_path):
    with open(file_path, 'r') as loaded_file:
        return loaded_file.read()

# loading the file into a list and splitting at each <NEW DOCUMENT>
def process_file_content(file_content):
    docs = {}
    for i, doc in enumerate(file_content.strip('').split('<NEW DOCUMENT>'), start = 1):
        docs[i] = doc
    return docs

""" 
this function takes the file, runs through it and adds each individual word to a set
it then counts how many times each one appears and adds it to a dictionary 
"""
def build_word_dictionary(docs):
    word_occurance_dict = {}
    for doc_number, doc_content in docs.items():
        for word in doc_content.split():
            word = word.strip('`,.£$%&-_').lower() # this should remove junk characters like ,.£$% but doesnt seem to work
            if word not in word_occurance_dict:
                word_occurance_dict[word] = set()
            word_occurance_dict[word].add(doc_number)
    return word_occurance_dict

"""
for every word in the search term, check where they come up
this will treat "stock prices" as two separate searches because its two words
"""
def search(word_database, search_term):
    results = set()
    """
    the if statement will return "None" if there is no match for the search term in the built
    word dictionary. because we are using a set they cannot have no value so it will default to
    "None" and will print as such.
    """
    for word in search_term.split():
        if word not in word_occurance_dict:
            return
        else:
            word = word_database[word.lower()]
            results.update(word)
            return results
"""
Loading files and building search databases
"""
file_content = load_file(FILE_PATH)
processed_documents = process_file_content(file_content)
word_occurance_dict = build_word_dictionary(processed_documents)
DOCUMENTS = process_file_content(file_content)

"""
while loop to always show menu after every action choice
until user chooses option 3 which will break the while loop
and display "goodbye" then close the program
also using and else statement at the end to handle any
invalid input options
"""
stay_in_menu = 0
while stay_in_menu == 0:

    menu()
    option = input("\nWhat would you like to do? \n")

    if option == '1': # search for term
        search_term = ''
        print("_"*25) # separation line to make the output look a little nicer
        print("Search terms: ")
        search_term = input()
        results = search(word_occurance_dict, search_term)
        print("_"*25) 
        print("Documents fitting search: ")
        print(results)

    elif option == '2': # read document
        print("_"*25) 
        doc_number = int(input("Document number to display: "))
        print("_"*25) 
        read_document(doc_number)
        if doc_number == 0:
            print("Please enter a valid document number")
            print("_"*25)

    elif option == '3': # exit program
        print("_"*25) 
        print("Goodbye :)")
        stay_in_menu = 1

    else: # error handling for invalid inputs
        print("_"*25) 
        print("Invalid option")