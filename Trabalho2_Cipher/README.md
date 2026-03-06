# Criptografia com Orientação a Objetos (C++)

Projeto desenvolvido para a disciplina de Programação 2 do curso de Engenharia de Computação.

## 📌 Sobre o Projeto
Este sistema implementa uma cifra de substituição simples para criptografar e descriptografar mensagens. O diferencial do projeto é a sua arquitetura baseada em Orientação a Objetos, utilizando separação de responsabilidades entre classes e alocação dinâmica de memória.

## ⚙️ Funcionalidades Principais
* **Criptografia e Descriptografia:** Transforma textos usando uma tabela de conversão baseada em uma chave numérica (código do aluno).
* **Persistência de Dados:** Salva os textos criptografados em um arquivo `.txt` e permite carregá-los posteriormente.
* **Geração Dinâmica:** Permite alterar a chave de conversão em tempo de execução para gerar novas cifras.

## 🛠️ Conceitos de C++ Aplicados
* **Orientação a Objetos (OOP):** Separação em arquivos `.h` e `.cpp` (classes `Cipher` e `ConversionTable`).
* **Gerenciamento de Memória:** Uso de ponteiros e alocação/desalocação dinâmica (`new` / `delete`).
* **Estruturas STL:** Utilização de `std::vector` e `std::pair` para mapear os caracteres.