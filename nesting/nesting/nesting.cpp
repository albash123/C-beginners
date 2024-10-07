#include <iostream>
#include <string>
using namespace std;

class binary {
    string s;  // This will hold the binary string
    int v;     // This will be used for the decimal input

public:
    void read(void);
    void chk_blnc(void);
    void decimal(void);
};

void binary::read(void) {
    cout << "Enter the binary number: ";
    cin >> s;  // Read binary number from user
}

void binary::chk_blnc(void) {
    read();  // First, read the binary number from the user

    // Check each character of the binary string
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect Binary" << endl;
            return;  // Exit if an invalid character is found
        }
    }

    // If no invalid characters are found
    cout << "Binary is correct" << endl;
}

void binary::decimal(void) {

    cout << "Enter a decimal number: ";
    cin >> v;  // Take user input for decimal value

    // Check whether the number is even or odd
    if (v % 2 == 0) {
        cout << "It's an even number: " << v << endl;
    }
    else {
        cout << "It's an odd number: " << v << endl;
    }
}

int main() {
    binary b;

    // Call chk_blnc() which will also call read() to input the binary number
    b.chk_blnc();

    // Call decimal() to check whether the input number is even or odd
    b.decimal();

    return 0;
}
