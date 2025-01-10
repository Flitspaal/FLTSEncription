#include "Decrypt.h"
#include <iostream>

// Constructor
Decrypt::Decrypt(std::string t, int i) : input__(t), shift__(i) {
    CCypher();  // Decrypt the input text immediately
}

// Decrypt method
void Decrypt::CCypher() {
    std::string result = "";

    // Loop through each character in the input text
    for (int i = 0; i < input__.length(); i++) {
        char c = input__[i];

        // Decrypt uppercase letters
        if (isupper(c)) {
            result += char(int(c - shift__ - 'A' + 26) % 26 + 'A');  // Subtract the shift
        }
        // Decrypt lowercase letters
        else if (islower(c)) {
            result += char(int(c - shift__ - 'a' + 26) % 26 + 'a');  // Subtract the shift
        }
        else {
            // Non-alphabetic characters remain unchanged
            result += c;
        }
    }
    result__ = result;  // Store the decrypted result
}

// Print the decrypted result
void Decrypt::PrintResult() {
    std::cout << result__ << std::endl;
}
