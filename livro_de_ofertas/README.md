- [English](#english)
- [Português](#português)

# English

# Offer Management System

This project is a simple C++ console application to manage offers. It supports inserting, modifying, and deleting offers based on notifications. The offers are sorted and re-positioned dynamically after each modification. The program reads the notifications from standard input, processes them, and outputs the final state of offers.

## Table of Contents

- [Prerequisites](#prerequisites)
- [Building and Running](#building-and-running)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Code Explanation](#code-explanation)
- [Example](#example)


## Prerequisites

- A C++ compiler (e.g., `g++`)
- Make sure you have the C++ Standard Library available.

## Building and Running

1. **Clone the repository:**
    ```sh
    git clone https://github.com/yourusername/offer-management-system.git
    cd offer-management-system
    ```

2. **Compile the program:**
    ```sh
    g++ -o offer_management main.cpp
    ```

3. **Run the program:**
    ```sh
    ./offer_management
    ```

## Usage

1. **Input:**
    - The first line of input contains the number of notifications.
    - Each subsequent line contains a notification in the format: `<position>,<action>,<value>,<quantity>`.
    - `<action>` is represented by an integer (0 for INSERIR, 1 for MODIFICAR, and 2 for DELETAR).

2. **Output:**
    - The program prints the final state of the offers after processing all notifications.
    - Each offer is printed in the format: `<position>,<value>,<quantity>`.

## File Structure

The project contains the following files:

- `main.cpp`: The main source file containing the entire program.

## Code Explanation

### Structures and Enums

- **`t_offer`**: A structure to represent an offer with position, value, and quantity.
- **`t_action`**: An enum to represent the possible actions (INSERIR, MODIFICAR, DELETAR).
- **`t_notification`**: A structure to represent a notification containing an offer and an action.

### Functions

- **`parse_input`**: Parses a string input to extract notification details and populate a `t_notification` structure.
- **`modify_offer`**: Modifies an existing offer based on the notification details.
- **`delete_offer`**: Deletes an existing offer based on the notification details.
- **`sort_offers`**: Sorts the offers by position and re-assigns positions sequentially.
- **`print_offers`**: Prints the offers in the required format.
- **`operator<<`**: Overloads the `<<` operator for `t_offer` to print its details.

### Main Function

- Reads the number of notifications.
- Iterates over each notification, processes it, and updates the offers accordingly.
- Sorts the offers after each modification.
- Prints the final state of the offers.

## Example

### Input

```
5
1,0,100.0,10
2,0,150.0,15
1,1,110.0,0
2,2,0.0,0
1,2,0.0,0
```

### Output

```
```

In this example:
1. Inserts an offer at position 1 with value 100.0 and quantity 10.
2. Inserts an offer at position 2 with value 150.0 and quantity 15.
3. Modifies the offer at position 1 to change the value to 110.0.
4. Deletes the offer at position 2.
5. Deletes the offer at position 1.

The final output is empty as all offers have been deleted.

***

# Português

# Sistema de Gerenciamento de Ofertas

Este projeto é um aplicativo de console C++ simples para gerenciar ofertas. Ele suporta inserção, modificação e exclusão de ofertas com base em notificações. As ofertas são ordenadas e reposicionadas dinamicamente após cada modificação. O programa lê as notificações da entrada padrão, processa-as e imprime o estado final das ofertas.

## Índice

- [Pré-requisitos](#pré-requisitos)
- [Compilando e Executando](#compilando-e-executando)
- [Uso](#uso)
- [Estrutura de Arquivos](#estrutura-de-arquivos)
- [Explicação do Código](#explicação-do-código)
- [Exemplo](#exemplo)

## Pré-requisitos

- Um compilador C++ (por exemplo, `g++`)
- Certifique-se de ter a Biblioteca Padrão C++ disponível.

## Compilando e Executando

1. **Clone o repositório:**
    ```sh
    git clone https://github.com/seuusuario/sistema-gerenciamento-ofertas.git
    cd sistema-gerenciamento-ofertas
    ```

2. **Compile o programa:**
    ```sh
    g++ -o gerenciamento_ofertas main.cpp
    ```

3. **Execute o programa:**
    ```sh
    ./gerenciamento_ofertas
    ```

## Uso

1. **Entrada:**
    - A primeira linha da entrada contém o número de notificações.
    - Cada linha subsequente contém uma notificação no formato: `<posição>,<ação>,<valor>,<quantidade>`.
    - `<ação>` é representada por um inteiro (0 para INSERIR, 1 para MODIFICAR e 2 para DELETAR).

2. **Saída:**
    - O programa imprime o estado final das ofertas após processar todas as notificações.
    - Cada oferta é impressa no formato: `<posição>,<valor>,<quantidade>`.

## Estrutura de Arquivos

O projeto contém os seguintes arquivos:

- `main.cpp`: O arquivo de código-fonte principal que contém todo o programa.

## Explicação do Código

### Estruturas e Enums

- **`t_offer`**: Uma estrutura para representar uma oferta com posição, valor e quantidade.
- **`t_action`**: Um enum para representar as ações possíveis (INSERIR, MODIFICAR, DELETAR).
- **`t_notification`**: Uma estrutura para representar uma notificação contendo uma oferta e uma ação.

### Funções

- **`parse_input`**: Analisa uma entrada de string para extrair detalhes da notificação e preencher uma estrutura `t_notification`.
- **`modify_offer`**: Modifica uma oferta existente com base nos detalhes da notificação.
- **`delete_offer`**: Exclui uma oferta existente com base nos detalhes da notificação.
- **`sort_offers`**: Ordena as ofertas por posição e reatribui posições sequencialmente.
- **`print_offers`**: Imprime as ofertas no formato requerido.
- **`operator<<`**: Sobrecarga do operador `<<` para `t_offer` para imprimir seus detalhes.

### Função Principal

- Lê o número de notificações.
- Itera sobre cada notificação, processa-a e atualiza as ofertas de acordo.
- Ordena as ofertas após cada modificação.
- Imprime o estado final das ofertas.

## Exemplo

### Entrada

```
5
1,0,100.0,10
2,0,150.0,15
1,1,110.0,0
2,2,0.0,0
1,2,0.0,0
```

### Saída

```
```

Neste exemplo:
1. Insere uma oferta na posição 1 com valor 100.0 e quantidade 10.
2. Insere uma oferta na posição 2 com valor 150.0 e quantidade 15.
3. Modifica a oferta na posição 1 para mudar o valor para 110.0.
4. Exclui a oferta na posição 2.
5. Exclui a oferta na posição 1.

A saída final é vazia, pois todas as ofertas foram excluídas.
