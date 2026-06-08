#include <cctype>
#include <iostream>
#include <string>

using namespace std;
int main() {
  // Initializing variables.
  string str1, str2;
  int first[26] = {0}, second[26] = {0};
  int flag = 0;

  // Accepting inputs.
  cout << "Enter First String: ";
  getline(cin, str1);
  cout << "Enter Second String: ";
  getline(cin, str2);

  // Calculating frequencies of alphabetic characters in first string.
  for (char ch : str1) {
    if (isalpha(static_cast<unsigned char>(ch))) {
      first[tolower(static_cast<unsigned char>(ch)) - 'a']++;
    }
  }

  // Calculating frequencies of alphabetic characters in second string.
  for (char ch : str2) {
    if (isalpha(static_cast<unsigned char>(ch))) {
      second[tolower(static_cast<unsigned char>(ch)) - 'a']++;
    }
  }

  // Checking if frequencies of both strings are same or not.
  for (int c = 0; c < 26; c++) {
    if (first[c] != second[c])
      flag = 1;
  }

  // Printing result.
  if (flag == 0) {
    cout << "Strings are anagram.";
  } else {
    cout << "Strings are not anagram.";
  }

  return 0;
}