
# Exercise 0x00 First Letter Twice
Write a program that returns the first letter to appear twice in a string composed with an alphabet containing only lowercase english letters (`a`-`z` or `0x61`-`0x7A` in ASCII).

_Hint #1: It would be a good idea to read up on <string> [1] and <vector> [2] from the C++ Standard Library, that were introduced in a previous lecture._

# Exercise 0x01
What if the string contains no repeats?
Exercise 0x02
Modify the program, so it prints the indices of the found letters to the console (also known as
stdout, or "standard output")
Examples
Exercise 0x10 Pangrams
A pangram is a string, which contains at least one instance of each character in a given
alphabet.
Test data:

# Exercise 0x11
Uncopyrightable (adjective): Not able to be protected by copyright
Dermatoglyphics (noun): The study of skin patterns/markings, such as fingerprints
Welcome to the wonderful world of software engineering produces the output
'e', found at indices `[1, 6]`

Uncopyrightable produces the output `'Uncopyrightable' contains no duplicate
characters`

- `A quick brown fox jumps over the lazy dog.`
- `When zombies arrive quickly, fax judge pat.`
- `The five boxing wizards jump quickly.`
- `Amazingly few discotheques provide jukeboxes.`

Modify the program from to only account for printable characters, excluding numbers, special characters and whitespaces.

_Hint Is it possible to calculate a character using an offset and upper and lower bounds?_

# Exercise 0x20 Card game
Implement a card game where the user is tasked with guessing whether the next card has a higher or lower value than the previous card.

The game flow will shall as described:

Output
What would be good candidates for enumerations?
1. Select a card at random
2. Display card to user
3. Prompt user for guess ('h' for higher, 'l' for lower)
4. Check input against the user selection
5. Print result
6. Go back to step one
$ ./card_game.o
The game presents you with a random card
Your task is to guess whether the next card is higher og lower
Type 'h' for higher, 'l' for lower, anything else to exit
Your first card is: 4 of Diamonds
Choose higher(h) or lower(l): h
You Won, the random generated card were Jack of Hearts
Choose higher(h) or lower(l): l
You Lost, the random generated card were Jack of Clubs
Choose higher(h) or lower(l): h
You lost, the random generated card were 6 of Diamonds
Choose higher(h) or lower(l): q
$ 
Here is a proposal for a file structure and a header file to get you started
File structure
...and some function definitions for inspiration
Use the following code to generate uniformly distributed integers for the cards.

Overall, this code sets up a random number generator (mt19937) seeded with a nondeterministic value obtained from random_device. It then initializes two uniform integer distribution objects (suits and ranks) for generating random integers representing suits and ranks of playing cards, respectively. – ChatGPT

_Hint What type are SPADES, DIAMONDS, TWO, and ACE?_