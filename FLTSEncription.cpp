#include <iostream>
#include <string>
#include <iostream>

#include "Encrypt.h"
#include "Decrypt.h"

int main()
{
    int shift1;
    int shift2;
    // enter text to encrypt
    std::string text = "";
    std::cout << "enter text: ";
    std::cin >> text; 
    // first shift
    std::cout << "enter Shift: ";
    std::cin >> shift1;
    if (shift1 > 9) { shift1 = 1; }
    // second shift
    std::cout << "enter Shift: ";
    std::cin >> shift2;
    if (shift2 > 9) { shift2 = 1; }

    std::cout << "---------=*+*=---------" << std::endl;

    // Encrypt the text
    Encrypt en1(text, shift1, shift2);
    std::cout << "Encrypted: ";
    en1.PrintResult();  // Print the encrypted result

    // Decrypt the text
    Decrypt de1(en1.GetResult(), shift1, shift2);  // Pass the encrypted result to Decrypt
    std::cout << "Decrypted: ";
    de1.PrintResult();  // Print the decrypted result
}


// 76910