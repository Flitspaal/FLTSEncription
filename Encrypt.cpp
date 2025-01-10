#include "Encrypt.h"
#include <iostream>

// Constructor
Encrypt::Encrypt(std::string t, int i) : input__(t), shift__(i) {
    CCypher(); // Encrypt the input text immediately
}

// Encrypt method
void Encrypt::CCypher()
{
    std::string result = "";

    // Loop through each character in the input text
    for (int i = 0; i < input__.length(); i++) {
        char c = input__[i]; // Use the input__ string, not text

        // Encrypt uppercase letters
        if (isupper(c)) {
            result += char(int(c + shift__ - 'A') % 26 + 'A');
        }
        // Encrypt lowercase letters
        else if (islower(c)) {
            result += char(int(c + shift__ - 'a') % 26 + 'a');
        }
        else {
            // Non-alphabetic characters remain unchanged
            result += c;
        }
    }
    result__ = result; // Store the encrypted result
}

// Print the encrypted result
void Encrypt::PrintResult()
{
    std::cout << result__ << std::endl;
}

std::string Encrypt::GetResult()
{
    return result__;
}

void Encrypt::SetShift(int i)
{
    shift__ = i;
}
