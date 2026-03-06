//Dupla: Gabriel da Silva e João Gabriel

#include <iostream>
#include <fstream> 
#include <vector>

using namespace std;

bool InsertWord(vector<string> &lista); //passagem por referência, preencher na função
bool PrintList(const vector<string> &lista); //read only
bool SearchWord(const vector<string> &lista, string busca); //read only
bool SearchSubstring(const vector<string> &lista); //read only
bool RemoveByIndex(vector<string> &lista); //not read only
bool RemoveSubstrings(vector<string> &lista); //not read only
bool ArquivoOut(vector<string> &lista);
bool LoadFromFile(vector<string> &lista);


int main()
{
    vector<string> ListOfWords;
    LoadFromFile(ListOfWords);



    char option;
    for(;;)
    {
        cout << "-------------------------------------------------------" << endl;
        cout << "UFxC String Store V.0" << endl;
        cout << "1. Insert string" << endl;
        cout << "2. Print index and string" << endl;
        cout << "3. Search string (literal)" << endl;
        cout << "4. Search substrings" << endl;
        cout << "5. Remove string (by index)" << endl;
        cout << "6. Remove by substrings (all occurrences)" << endl;
        cout << endl << "0. Quit" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Enter with an option: ";
        cin >> option;

        if(option == '1')
        {
            InsertWord(ListOfWords);
            continue;
        }
        if(option == '2')
        {
            PrintList(ListOfWords);
            continue;
        }
        if(option == '3')
        {
            cout << "Enter with a word to search: "; //*** MVC
            string busca;
            cin >> busca;
            SearchWord(ListOfWords, busca);
            continue;
        }
        if(option == '4')
        {
            SearchSubstring(ListOfWords);
            continue;
        }
        if(option == '5')
        {
            RemoveByIndex(ListOfWords);
            continue;
        }
        if(option == '6')
        {
            RemoveSubstrings(ListOfWords);
            continue;
        }
        if(option == '0')
        {
            ArquivoOut(ListOfWords);
            break;
        }
    }
    return 0;
}

bool InsertWordsFromFile(vector<string> &lista)
{
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile.is_open())
    {
        cout << "Error: Could not open file." << endl;
        return false;
    }

    lista.clear(); // Limpar a lista antes de inserir do arquivo

    string word;
    while (inputFile >> word)
    {
        lista.push_back(word);
    }

    inputFile.close();
    cout << "Words inserted from file successfully." << endl;
    return true;
}



bool InsertWord(vector<string> &lista) //to modify
{
    string newWord;
    cin >> newWord;
    lista.push_back(newWord);
    return true;
}

bool PrintList(const vector<string> &lista) //read only
{
    for(size_t i=0; i<lista.size(); i++)
    {
        cout << "Index: " << i << " -> " << lista.at(i) << endl;
    }
    return true;
}

bool SearchWord(const vector<string> &lista, string busca)
{
    for(size_t i=0; i<lista.size(); i++)
    {
        if(lista.at(i) == busca) //procura a primeira ocorrencia somente
        {
            cout << "Word has been found at pos: " << i << endl;
            return true;
        }
    }
    cout << "Word " << busca << " not found" << endl;
    return false;
}

bool SearchSubstring(const vector<string> &lista)
{
    cout << "Enter with a substring to search: ";
    string substring;
    cin >> substring;
    bool hasfound = false;

    for(size_t i=0; i<lista.size(); i++)
    {
        //if(lista.at(i).find(substring) < lista.at(i).size())
        string word = lista.at(i);
        size_t pos = word.find(substring);
        if(pos < word.size())
        {
            cout << "Substring " << substring << " found at pos: " << i << "  -> " << word << endl;
            hasfound = true;
        }
    }
    return hasfound;
}

bool RemoveByIndex(vector<string> &lista)
{
    cout << "Enter with an Index to remove: ";
    size_t index;
    cin >> index;

    if(index >= lista.size())
    {
        cout << "Error, index out of range" << endl;
        return false;
    }

    lista.erase(lista.begin()+index);
    return true;
}

bool RemoveSubstrings(vector<string> &lista)
{
    cout << "Enter with a substring to remove: ";
    string substring;
    cin >> substring;

    bool hasfound = false;
    size_t i=0;
    while(true)
    {
       if (i >= lista.size()) {
           hasfound = false;
           break;
       }
        string word = lista.at(i);
        size_t pos = word.find(substring);
        if (pos < word.size())
        {
            lista.erase(lista.begin() + i);
            hasfound = true;
            
        }
        else 
        {
            i++;
            if(i >= lista.size()) break;
        }
 
    }
    return hasfound;
}
bool ArquivoOut(vector <string> &lista)
{
    ofstream arquivo;

    arquivo.open("texto.txt");

    for (size_t i = 0; i < lista.size(); i++) {
        arquivo << lista.at(i) << endl;
    }

    arquivo.close();
   return true;
}
bool LoadFromFile(vector<string> &lista) {
    ifstream arquivo("texto.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir arquivo" << endl;
        return false;
    }

    string word;
    while (getline(arquivo, word)) {
        lista.push_back(word);
    }

    arquivo.close();
    return true;
}
