#include "Encrypt.h"
#include <iostream>

// Constructor
Encrypt::Encrypt(std::string t, int i, int ii) : input__(t), shift1__(i), shift2__(ii) {
    CCypher(); // Encrypt the input text immediately
}

// Encrypt method
void Encrypt::CCypher()
{
    std::string result = "";
    int midpoint = input__.length() / 2;  // Find the midpoint of the string

    // Encrypt the first block with shift1
    for (int i = 0; i < midpoint; i++) {
        char c = input__[i];
        if (isupper(c)) {
            result += char(int(c + shift1__ - 'A') % 26 + 'A');
        }
        else if (islower(c)) {
            result += char(int(c + shift1__ - 'a') % 26 + 'a');
        }
        else {
            result += c;  // Non-alphabetic characters remain unchanged
        }
    }

    // Encrypt the second block with shift2
    for (int i = midpoint; i < input__.length(); i++) {
        char c = input__[i];
        if (isupper(c)) {
            result += char(int(c + shift2__ - 'A') % 26 + 'A');
        }
        else if (islower(c)) {
            result += char(int(c + shift2__ - 'a') % 26 + 'a');
        }
        else {
            result += c;  // Non-alphabetic characters remain unchanged
        }
    }

    result__ = result;  // Store the final encrypted result
}


// Print the encrypted result
void Encrypt::PrintResult()
{
    std::cout << result__ << std::endl;
}

// getters setters

std::string Encrypt::GetResult()
{
    return result__;
}

void Encrypt::SetShift1(int i)
{
    shift1__ = i;
}

void Encrypt::SetShift2(int i)
{
    shift1__ = i;
}
