#include <iostream>
#include <string>
#include <iostream>

#include "Encrypt.h"
#include "Decrypt.h"

int main()
{
    std::string text = "Hello World";
    int shift = 2;

    // Encrypt the text
    Encrypt en1(text, shift);
    std::cout << "Encrypted: ";
    en1.PrintResult();  // Print the encrypted result

    // Decrypt the text
    Decrypt de1(en1.GetResult(), shift);  // Pass the encrypted result to Decrypt
    std::cout << "Decrypted: ";
    de1.PrintResult();  // Print the decrypted result
}
