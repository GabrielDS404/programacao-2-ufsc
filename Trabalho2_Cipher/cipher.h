#ifndef CIPHER_H
#define CIPHER_H

#include "ConversionTable.h"
#include <string>

using namespace std;

class Cipher {
private:
    ConversionTable* conversionTable; //ponteiro para conversiontable

public:
    Cipher(int key); //construtor
    ~Cipher();
    string Encrypt(string input);
    string Decrypt(string input);
    void RegenerateTable(int key);
};

#endif 
