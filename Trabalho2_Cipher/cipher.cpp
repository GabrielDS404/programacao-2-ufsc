#include "Cipher.h"

using namespace std;

Cipher::Cipher(int key) { //construtor-cria um novo conversionTable com o codigo de aluno fornecido.
    conversionTable = new ConversionTable(key);
}

Cipher::~Cipher() {
    delete conversionTable; //destrutor-libera a memória alocada dinamicamente
}

string Cipher::Encrypt(string input) {
    const vector<pair<char, char>>& table = conversionTable->GetTable();
    string result;
    for (size_t i = 0; i < input.size(); i++) {
        char ch = input[i];
        result += table[ch].second;
    }
    return result;
}

std::string Cipher::Decrypt(string input) {
    const vector<pair<char, char>>& table = conversionTable->GetTable();
    string result;
    for (size_t i = 0; i < input.size(); i++) {
        char ch = input[i];
        for (size_t j = 0; j < table.size(); j++) {
            if (ch == table[j].second) {
                result += table[j].first;
                break;
            }
        }
    }
    return result;
}

void Cipher::RegenerateTable(int key) { //regenera a tabela com novo codigo de aluno
    conversionTable->CreateTable(key);
}
