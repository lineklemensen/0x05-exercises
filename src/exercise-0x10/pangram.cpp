#include <unordered_set>
#include <algorithm>
#include <cctype>
#include "pangram.h"

using namespace std;

// Exercise 0x00 - Implement the function from "pangram.h"
bool pangram(const string& text) {

  /*Variable containing a set of characters*/
  unordered_set<char> letters;

  /*Range-based for loop to iterate over 
  each character in the string*/
  for (char c : text) {

    /*Conditional statement to check if 
    the character is a letter*/
    if (isalpha(c)) {

      /*Converts the character to lowercase 
      and inserts it into the set "letters"*/
      letters.insert(tolower(c));
    }
  }

  /*Checks if the set "letters" contains
   exactly 26 unique letters. 
   If not, then the string is not a pangram*/
  return letters.size() == 26;
}

// Exercise 0x01 - Implement the function from "program.h"