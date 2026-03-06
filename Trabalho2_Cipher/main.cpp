#include <iostream>
#include <fstream>
#include "Cipher.h"

using namespace std;

void displayMenu() { //menu
    cout << "Menu:" << endl;
    cout << "1. Encrypt text" << endl;
    cout << "2. Decrypt text from input" << endl;
    cout << "3. Decrypt text from file" << endl;
    cout << "4. Generate new conversion table" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

void saveToFile(const string& fileName, const string& text) { //salvar arquivo de texto criptado
    ofstream file(fileName);
    if (file.is_open()) {
        file << text;
        cout << "Text encrypted and saved to file successfully." << endl;
        file.close();
    }
    else {
        cout << "Unable to open file for writing." << endl;
    }
}

string loadFromFile(const string& fileName) { //carregar arquivo de texto criptado
    string text;
    ifstream file(fileName);
    if (file.is_open()) {
        getline(file, text);
        file.close();
    }
    else {
        cout << "Unable to open file for reading." << endl;
    }
    return text;
}

int main() {
    int studentCode = 23203795; //codigo de aluno inicial
    Cipher cipher(studentCode);

    int option;
    string inputText;

    do {
        displayMenu();
        cin >> option;

        switch (option) { //menu
        case 1:
            cout << "Enter the text to encrypt: "; //inserir texto para criptação
            cin.ignore(); // limpa o buffer do teclado
            getline(cin, inputText);
            cout << "Encrypted text: " << cipher.Encrypt(inputText) << endl;
            saveToFile("encrypted_text.txt", cipher.Encrypt(inputText));
            break;
        case 2:
            cout << "Enter the text to decrypt: "; //inserir texto criptado manualmente
            cin.ignore();
            getline(cin, inputText);
            cout << "Decrypted text: " << cipher.Decrypt(inputText) << endl;
            break;
        case 3:
            cout << "Decrypting text from file..." << endl; //ler arquivo criptado
            inputText = loadFromFile("encrypted_text.txt");
            if (!inputText.empty()) {
                cout << "Encrypted text read from file: " << inputText << endl;
                cout << "Decrypted text: " << cipher.Decrypt(inputText) << endl;
            }
            break;
        case 4:
            int newStudentCode; //gerar novo codigo de aluno
            cout << "Enter the new student code: ";
            cin >> newStudentCode;
            cipher.RegenerateTable(newStudentCode);
            cout << "New conversion table generated successfully." << endl;
            break;
        case 5:
            cout << "Exiting the program..." << endl; //saida do programa
            break;
        default:
            cout << "Invalid option. Please choose a valid option." << endl;
        }
    } while (option != 5);

    return 0;
}
