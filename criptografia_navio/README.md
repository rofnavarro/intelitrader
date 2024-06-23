- [English](#english)
- [Português](#portugês)

# English

# INTELITRADER CHALLENGE

# Decryption Program

This project is a C++ console application that performs bit manipulations to decrypt a message. It inverts the last two bits and swaps the upper four bits with the lower four bits of each byte of the encrypted message to generate the original message.

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
    git clone git@github.com:rofnavarro/intelitrader.git
    cd criptografia_navio
    ```

2. **Compile the program:**
    ```sh
    g++ -o criptografia_navio main.cpp
    ```

3. **Run the program:**
    ```sh
    ./criptografia_navio
    ```

## Usage

1. **Input:**
    - The encrypted message is embedded in the code as a string. Each byte is represented by a sequence of 8 bits, and the bytes are separated by spaces.

2. **Output:**
    - The program prints the decrypted message to the standard output.

## File Structure

The project contains the following files:

- `main.cpp`: The main source file containing the entire program.

## Code Explanation

### Functions

- **`invert_last_two_bits`**: Inverts the last two bits of a byte.
- **`swap_four_bits`**: Swaps the upper four bits with the lower four bits of a byte.


### Main Function

- The main function:
  1. Defines the encrypted message as a string.
  2. Processes each byte of the message:
     - Converts the byte from string to `std::bitset<8>`.
     - Inverts the last two bits.
     - Swaps the upper four bits with the lower four bits.
     - Converts the modified byte back to a character and adds it to the output.
  3. Prints the decrypted message.


## Example

### Input

The input is the string embedded in the code:

```cpp
std::string msg = "10010110 11110111 01010110 00000001 00010111 00100110 01010111 00000001 00010111 01110110 01010111 00110110 11110111 11010111 01010111 00000011";
```

### Output

The program prints the decrypted message to the standard output:

```
Decrypted Message: <decrypted message>
```

***

# Portugês

# DESAFIO INTELITRADER

# Programa de Descriptografia

Este projeto é um aplicativo de console C++ que realiza manipulações de bits para descriptografar uma mensagem. Ele inverte os dois últimos bits e troca os quatro bits superiores e inferiores de cada byte da mensagem criptografada para gerar a mensagem original.

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
    git clone https://github.com/rofnavarro/intelitrader/
    cd criptografia_navio
    ```

2. **Compile o programa:**
    ```sh
    g++ -o criptografia_navio main.cpp
    ```

3. **Execute o programa:**
    ```sh
    ./criptografia_navio
    ```

## Uso

1. **Entrada:**
    - A mensagem criptografada está embutida no código como uma string. Cada byte é representado por uma sequência de 8 bits e os bytes são separados por espaços.

2. **Saída:**
    - O programa imprime a mensagem descriptografada na saída padrão.

## Estrutura de Arquivos

O projeto contém os seguintes arquivos:

- `main.cpp`: O arquivo de código-fonte principal que contém todo o programa.

## Explicação do Código

### Funções

- **`invert_last_two_bits`**: Inverte os dois últimos bits de um byte.
- **`swap_four_bits`**: Troca os quatro bits superiores e inferiores de um byte.

### Função Principal

- A função principal:
  1. Define a mensagem criptografada como uma string.
  2. Processa cada byte da mensagem:
     - Converte o byte de string para `std::bitset<8>`.
     - Inverte os dois últimos bits.
     - Troca os quatro bits superiores e inferiores.
     - Converte o byte modificado de volta para um caractere e adiciona à saída.
  3. Imprime a mensagem descriptografada.


## Exemplo

### Entrada

A entrada é a string embutida no código:

```cpp
std::string msg = "10010110 11110111 01010110 00000001 00010111 00100110 01010111 00000001 00010111 01110110 01010111 00110110 11110111 11010111 01010111 00000011";
```

### Saída

O programa imprime a mensagem descriptografada na saída padrão:

```
Decrypted Message: <mensagem descriptografada>
```
