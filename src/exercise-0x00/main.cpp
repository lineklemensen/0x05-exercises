#include <iostream>
#include "twice.h"

using namespace std;

int main() {
  //Variable containing the result of the first string used to test the program
  auto result1 = letter_seen_twice("Welcome to the wonderful world of software engineering");

  //Conditional statement to test the function with the first string

  /*The condition states that if the string "result1" is not empty,
  it'll print the string. This is done by using the empty() function
  and the ! operator, which it the logical NOT operator 
  (! negates the result of result1.empty())

  The string is the result of the letter_seen_twice function,
  meaning that the string contains the first character to apper twice,
  i.e. if the string is emptry, no character has appeared twice*/
  if (result1.first != '\0') {
    cout << "The first letter seen twice in the string is: '" << result1.first << "', found at indices [" << result1.second[0] << ", " << result1.second[1] << "]" << endl;
  } else {
    cout << "The string does'nt contain any letter more than one..." << endl;
  }

  //Variable containing the result of the second string used to test the program
  auto result2 = letter_seen_twice("Uncopyrightable");

  //Conditional statement to test the function with the first string
  if (result2.first != '\0') {
    cout << "The first letter seen twice in the string is: '" << result2.first << "', found at indices [" << result2.second[0] << ", " << result2.second[1] << "]" << endl;
  } else {
    cout << "The string does'nt contain any letter more than one..." << endl;
  }

  return 0;
}