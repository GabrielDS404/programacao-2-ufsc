#include "ConversionTable.h"

using namespace std;

ConversionTable::ConversionTable(int key) { // construtor de conversion table recebendo key como paramentro
    CreateTable(key);
}

void ConversionTable::CreateTable(int key) { //cria a tabela de conversao e dimensiona o vetor table para 256 elementos
    table.resize(256);
    for (size_t i = 0; i < table.size(); i++) {
        table[i] = make_pair(i, i + key);
    }
}

const vector<pair<char, char>>& ConversionTable::GetTable() const { //retorna a tabela de conversao como uma referência constante 
    return table;
}