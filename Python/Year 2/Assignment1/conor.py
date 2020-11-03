dict1 = {}
count = 0
search_word = 'unavailable'

#file = open("../Assignment1/ap_docs.txt")
#file2 = open("../Assignment1/ap_docs2.txt")
file_path = "ap_docs.txt"

DOCS = {}


def read(number):
    results = DOCS[number]
    print(results)


def load_file(file_content): #loads file only when function is called
    with open(file_content, 'r') as file_op: # opens as read only and sets it to file_op
        return file_op.read()    # returns file_op as file for later uses


def process(file_content):
    dict = {}
    for i, doc in enumerate(file_content.strip('').split('\n<NEW DOCUMENT>\n'), start=1):  #reads <New Doc>, writes everything after until <New Doc> into the doc variable
        dict[i] = doc
    return dict



file_content = load_file(file_path)
DOCS = process(file_content)
number = int(input("Number?"))
read(number)


# This wont work, gonna need to do a list that sits inside a dictionary so like Dict{1 : set_article_1 etc etc}
