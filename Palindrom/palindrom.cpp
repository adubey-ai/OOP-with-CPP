#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Initializing variables.
    string str;
    int flag = 0;

    // Accepting input.
    cout << "Enter the string : " << endl;
    getline(cin, str);

    // Checking if string is palindrome or not.
    for (size_t i = 0; i < str.length() / 2; i++)
    {
      if (str[i] == str[str.length() - i - 1])
        flag++;
    }

    // Printing result.
    if (flag == static_cast<int>(str.length() / 2))
      cout << "String entered is palindrome";
    else
      cout << "String entered is not palindrome";

    return 0;
}