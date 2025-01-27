#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <string>

class Encrypt
{
public:
	explicit Encrypt(std::string, int, int);

	virtual void CCypher(); // encrypt
	virtual void PrintResult(); // print result__

	virtual std::string GetResult();
	virtual void SetShift1(int);
	virtual void SetShift2(int);
private:
	std::string input__;
	std::string result__;
	int shift1__;
	int shift2__;
};

#endif