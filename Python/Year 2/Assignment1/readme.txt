Setup is pretty basic, just make sure to have ap_docs and ap_docs2 in the same directory as the .py file

This assignment seemed daunting at first, but once the basic principles of how it works were
discovered i felt the logic aspect of the project was a breeze for the most part. The file contains a few
functions, not too many, but i wanted to make my code as clean as possible so i could take snippets from it
at a later date.

All of the code runs on Dictionaries with words as the keys, which in turn points to sets containing every
article the word appears in.

Originally I had each dictionary have a number as a key, and that key in turn led to a list containing every
word from the respective article, but i realised this A) Wasted a lot of space and wasn't sustainable,
especially if more text files were added to the database and B)Did not fit the brief, so i changed it to how
it is now, but that rough first draft of sorts helped broaden my understanding of Dictionaries, sets and
Lists and made the current implementation much much easier to code.

The search was difficult to get just right, i had lots of hiccups with it giving back far too many documents
but i eventually had a breakthrough using set logic such as Intersection to make sure the search words were
all in the same article to make search more effective and to meet the brief requirements.

I essentially re-parsed the two text files again for the print function to ensure I printed the version with
punctuation as it looked far neater and more readable to a user.

The menu function i found had me longing to be back in C in a way, as i found the Switch functions there to
be much cleaner for designing infinitely looping menus, but using if else trees was a more than adequate
solution, im just being picky. The menu is pretty simple but functional, it error checks entries to prevent 
any odd behaviour, just like every other user entry field in the program

I designed the program to be able to accept more or less text files extra if more want to be added in the
same format later down the line. All that would need to be changed is 2 lines to implement each new file,
and a change to some prompts and some logic for counting article numbers in the print function.
Everything else should be able to adapt by itself as the code is quite robust