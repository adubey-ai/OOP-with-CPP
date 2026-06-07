// C++ Program
// Convert binary to decimal
#include <iostream>
#include <string>

using namespace std;

// Function to convert binary string to decimal.
int convert(const string& binary)
{
    int decimal = 0;
    for (char bit : binary)
    {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

// Main program
int main()
{
    string binary;

    cout << "Enter binary number: ";
    cin >> binary;

    for (char bit : binary)
    {
        if (bit != '0' && bit != '1')
        {
            cout << "Invalid input. Enter only 0s and 1s." << endl;
            return 1;
        }
    }

    cout << binary << " in binary = " << convert(binary) << " in decimal" << endl;
    return 0;
}