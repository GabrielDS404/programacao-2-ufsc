#ifndef CONVERSIONTABLE_H
#define CONVERSIONTABLE_H

using namespace std;

#include <vector>
#include <utility>

class ConversionTable {
private:
     vector<pair<char, char>> table; //vetor table com par de caracteres

public:
    ConversionTable(int key); //construtor
    void CreateTable(int key); //funcao
    const vector<pair<char, char>>& GetTable() const; //declaracao do getTable
};

#endif 