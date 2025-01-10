#ifndef DECRYPT_H
#define DECRYPT_H

#include <string>

class Decrypt
{
public:
    explicit Decrypt(std::string, int, int);
    void CCypher();  // Method to decrypt
    void PrintResult();  // Method to print the decrypted result

private:
    std::string input__;
    std::string result__;
    int shift1__;
    int shift2__;
};

#endif
