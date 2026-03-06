# Sistema de Inventário de Biblioteca (C++ e Qt)

Projeto desenvolvido para a disciplina de Programação 2 (Engenharia de Computação - UFSC).

## 📌 Sobre o Projeto
Uma aplicação desktop interativa criada para o gerenciamento de um acervo de livros. O sistema utiliza o **Qt Framework** para a interface gráfica e aplica conceitos avançados de C++ moderno e Estruturas de Dados (`std::vector`) para manipulação ágil das informações em memória.

## ⚙️ Funcionalidades Principais
* **CRUD Completo:** Adição, edição, visualização e remoção de livros do acervo.
* **Busca e Filtros Dinâmicos:** Pesquisa de obras por Título e filtro em tempo real por Gênero literário.
* **Gestão de Estoque:** Atualização inteligente da quantidade de exemplares disponíveis ao remover um item.
* **Interface Gráfica (GUI):** Formulários integrados, listas dinâmicas e navegação construída via Qt Creator.

## 🛠️ Tecnologias e Arquitetura
* **Linguagem:** C++
* **Framework:** Qt 
* **Arquitetura:** Orientação a Objetos (Classes `Biblioteca`, `Livro` e `MainWindow`) com separação clara entre a interface visual e as regras de negócio.