#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1;
	string str2;

	cout << "Enter the string : ";
	getline(cin, str1);

	str2 = string(str1.rbegin(), str1.rend());

	if (str1 == str2)
		cout << str1 << " is a palindrome";
	else
		cout << str1 << " is not a palindrome";

	return 0;
}