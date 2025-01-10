#include "Decrypt.h"
#include <iostream>

// Constructor
Decrypt::Decrypt(std::string t, int i, int ii) : input__(t), shift1__(i), shift2__(ii) {
    CCypher();  // Decrypt the input text immediately
}

// Decrypt method
void Decrypt::CCypher() {
    std::string result = "";
    int midpoint = input__.length() / 2;  // Find the midpoint of the string

    // Encrypt the first block with shift1
    for (int i = 0; i < midpoint; i++) {
        char c = input__[i];
        if (isupper(c)) {
            result += char(int(c - shift1__ - 'A') % 26 + 'A');
        }
        else if (islower(c)) {
            result += char(int(c - shift1__ - 'a') % 26 + 'a');
        }
        else {
            result += c;  // Non-alphabetic characters remain unchanged
        }
    }

    // Encrypt the second block with shift2
    for (int i = midpoint; i < input__.length(); i++) {
        char c = input__[i];
        if (isupper(c)) {
            result += char(int(c - shift2__ - 'A') % 26 + 'A');
        }
        else if (islower(c)) {
            result += char(int(c - shift2__ - 'a') % 26 + 'a');
        }
        else {
            result += c;  // Non-alphabetic characters remain unchanged
        }
    }

    result__ = result;  // Store the final encrypted result
}

// Print the decrypted result
void Decrypt::PrintResult() {
    std::cout << result__ << std::endl;
}
