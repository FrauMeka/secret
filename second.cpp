#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int minLength, maxLength;
    cout << "Enter the minimum password length: ";
    cin >> minLength;
    cout << "Enter the maximum password length: ";
    cin >> maxLength;

    string pass;
    string data;

    // Prompt the user for each option
    char includeSymbols, includeNumbers, includeUpper, includeLower;
    cout << "Include symbols? (Y/N): ";
    cin >> includeSymbols;
    if (includeSymbols == 'Y' || includeSymbols == 'y') {
        data += "!@#$%^&*-_";
    }

    cout << "Include numbers? (Y/N): ";
    cin >> includeNumbers;
    if (includeNumbers == 'Y' || includeNumbers == 'y') {
        data += "0123456789";
    }

    cout << "Include uppercase letters? (Y/N): ";
    cin >> includeUpper;
    if (includeUpper == 'Y' || includeUpper == 'y') {
        data += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }

    cout << "Include lowercase letters? (Y/N): ";
    cin >> includeLower;
    if (includeLower == 'Y' || includeLower == 'y') {
        data += "abcdefghijklmnopqrstuvwxyz";
    }

    int length = minLength + rand() % (maxLength - minLength + 1);
    
    for(int i = 0; i < length; i++) {
        pass += data[rand() % data.length()];
    }

    cout << "Generated password: " << pass << endl;
    return 0;
}
