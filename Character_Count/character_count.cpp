#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Initializing variables.
    string str;
    int freq[256] = {0};
    
    // Accepting input.
    cout << "Enter the string: ";
    getline(cin, str);
    
    // Calculating frequency of each character.
    for (char ch : str)
    {
        freq[static_cast<unsigned char>(ch)]++;
    }
    
    // Printing frequency of each character.
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
           cout << "The frequency of " << char(i) << " is " << freq[i] << endl;
        }
    }
    return 0;
}
