#include "twice.h"
#include <string>
#include <vector>
#include <utility>

using namespace std;


pair<char, vector<size_t>> letter_seen_twice(const string& text) {
  //Outer loop to iterate over each character in the string
  for (size_t i = 0; i < text.length(); ++i) {
    //Inner loop to check all previous characters
    for (size_t j = 0; j < i; ++j) {
      //Checks if there's a match, i.e. if a character has appeared twice
      if (text[i] == text[j]) {
        //Returns the first character to appear twice as a string
        return {text[i], {j, i}};
      }
    }

  }
  //If no character appear twice, return an empty string
return {'\0', {}};
}