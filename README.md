# :computer: Estrutura de Dados 1
Estudos elementares realizados em linguagem C sobre o ramo de Estrutura de dados pela Universidade de Brasília - UnB.

## :warning: O que será visto? 
1. Lista Encadeada
2. Pilha
3. Fila
4. Recursividade
5. Algoritmos Elementares de Busca
6. Alguns Exercícios trabalhados na disciplina

## :hammer_and_wrench: Qual linguagem foi usada? 
Todos os exemplos foram realizados em linguagem C.

## :question: Lista Encadeada 
É uma sequência de células, todas do mesmo tipo na memória Ram. Cada célula contém um objeto (todos do mesmo tipo) e o endereço da célula seguinte.

1. O arquivo será dividido em:
    * Declaração
    * Criação
    * Inserço
    * Impressão
    * Busca
    * Remoção
## :question: Pilha
Uma pilha é uma estrutura linear para manipulação de dados que segue o esquema LIFO: Laste in Firest out, ou seja, o último que entra é o primeiro que sai.

1. O arquivo será dividido em:
    * Declaração
    * Criaço
    * Inserção
    * Remoção
    * :heavy_plus_sign: Implementação de cada um dos tópicos acima para Pilha estática e Pilha com Lista Encadeada
## :question: Fila
Uma fila é uma estrutura de dados dinâmica que admite remoção de elementos e inserção de novos objetos, seguindo a estrutura FIFO (First-In-First-Out), ou seja, o primeiro que entra é o primeiro que sai.

1. O arquivo será dividido em:
    * Declaraço
    * Criação
    * Inserção
    * Remoção
    * Verificação de Fila Cheia e Fila Vazia
    * Impressão
    * Redimensionamento
    * Finalização da Fila
    * :heavy_plus_sign: Implementação de cada um dos tópicos acima para Fila com Vetor, Fila Circular Endadeada e Fila Circular com Redimensionamento. 
## :question: Recursividade
Uma função recursiva é uma função que chama ela mesma. Um problema possui uma solução recursiva, quando é possível resolvê-lo aplicando a mesma técnica em uma instância menor, combinando a solução dessa instância com algum elemento da instância original, para assim, obter a solução desejada.

1. Quais algoritmos serão vistos?
   * Cálculo de potência Aᵇ.
   * Fatorial
   * Maior elemento em um vetor.   
   * Régua Inglesa.
   * Somar dígitos de um número N.
   * F91.
   * Rumo aos 9s.
   * Pares de caracteres.
   * String ao contrário.
   * Fibonacci
2. Algoritmos de ordenação recursivos 
   * Insertion Sort
   * Selection Sort 
## :question: Algoritmos Elementares de Busca
1. Quais algoritmos serão vistos?
    * Busca Sequencial
        - Algoritmo que implementa uma busca Sequencial por um determinado elemento em um vetor ordenado, com complexidade de O(n).
    * Busca Binária 
        - Algoritmo que implementa o paradigma de Divisão e Conquista para encontrar um determinado elemento em um vetor ordenado, com complexidade de O(log(n)).

## :warning: Observações
Para o bom entendimento dos exemplos e dos exercícios é necessário conhecimentos básicos de linguagem C e alocação dinâmica de memória. 

## :computer: Como executar os programas usando o sistema Linux?
> Clonar este repositório
     
    git clone https://github.com/victordsantoss/estrutura-de-dados-1.git
> Acessar a pasta raiz do repositório

    cd ../../estrutura-de-dados-1
> Escolher um arquivo de preferência e execute o processo de compilação
    
    gcc nome_arquivo.c -o bin
> Rodar o processo de execução

    ./bin
