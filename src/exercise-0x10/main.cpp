#include <iostream>
#include "pangram.h"

using namespace std;

int main(int argc, char** argv) {

// Test strings
string case_0 = "A quick brown fox jumps over the lazy dog.";
string case_1 = "When zombies arrive quickly, fax judge Pat.";
string case_2 = "The five boxing wizards jump quickly.";
string case_3 = "Amazingly few discotheques provide jukeboxes.";
string case_4 = "Hello world!"; //Not a pangram

  // Exercise 0x00 - Setup a test for your implementation
  cout << "TEST - Exercise 0x00" << endl;
  cout << "Case 0: " << (pangram(case_0) ? "Yes" : "No") << endl;
  cout << "Case 1: " << (pangram(case_1) ? "Yes" : "No") << endl;
  cout << "Case 2: " << (pangram(case_2) ? "Yes" : "No") << endl;
  cout << "Case 3: " << (pangram(case_3) ? "Yes" : "No") << endl;
  cout << "Case 4: " << (pangram(case_4) ? "Yes" : "No") << endl;

  // Exercise 0x01 - Setup a test for your implementation
  cout << "TEST - Exercise 0x01" << endl;
  cout << "Case 0: " << (pangram(case_0, true) ? "Yes" : "No") << endl;
  cout << "Case 1: " << (pangram(case_1, true) ? "Yes" : "No") << endl;
  cout << "Case 2: " << (pangram(case_2, true) ? "Yes" : "No") << endl;
  cout << "Case 3: " << (pangram(case_3, true) ? "Yes" : "No") << endl;
  cout << "Case 4: " << (pangram(case_4, true) ? "Yes" : "No") << endl;


  return 0;
}