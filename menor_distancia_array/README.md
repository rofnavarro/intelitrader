- [English](#english)
- [Português](#português)

# English

# INTELITRADER CHALLENGE

# Integer Distance Comparison

This project is a C++ console application that finds the shortest distance between numbers in two separate arrays of integers.

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
    cd menor_distancia_array
    ```

2. **Compile the program:**
    ```sh
    g++ -o menor_distancia_array main.cpp
    ```

3. **Run the program:**
    ```sh
    ./menor_distancia_array
    ```

## Usage

- The program does not require any user input as the arrays are hardcoded in the source file.
- The output will display the shortest distance between the numbers in the two arrays.

## File Structure

The project contains the following files:

- `main.cpp`: The main source file containing the entire program.

## Code Explanation

### Main Function

The main function performs the following steps:

1. Defines two arrays of integers.
2. Calculates the size of each array.
3. Initializes variables to store the distance and the shortest distance found.
4. Iterates through each combination of elements in both arrays to find the shortest distance.
5. Prints the shortest distance found.

## Example

### Input

The input is the hardcoded arrays in the code:

```cpp
int array1[] = {-1, 5, 19, -19, 8, -16, 0, 22, 65, 72};
int array2[] = {26, 6, -88, -6, -45, -3, 29, 15, -18, 100};
```

### Output

The program prints the shortest distance between the numbers in the two arrays:

```
The shortest distance between the numbers on both arrays is: 1
```

***

# Português

# DESAFIO INTELITRADER

# Comparação de Distância de Números Inteiros

Este projeto é uma aplicação de console em C++ que encontra a menor distância entre números em dois arrays separados de inteiros.

## Índice

- [Pré-requisitos](#pré-requisitos)
- [Compilação e Execução](#compilação-e-execução)
- [Uso](#uso)
- [Estrutura de Arquivos](#estrutura-de-arquivos)
- [Explicação do Código](#explicação-do-código)
- [Exemplo](#exemplo)

## Pré-requisitos

- Um compilador C++ (por exemplo, `g++`)
- Certifique-se de ter a Biblioteca Padrão do C++ disponível.

## Compilação e Execução

1. **Clone o repositório:**
    ```sh
    git clone git@github.com:rofnavarro/intelitrader.git
    cd menor_distancia_array
    ```

2. **Compile o programa:**
    ```sh
    g++ -o menor_distancia_array main.cpp
    ```

3. **Execute o programa:**
    ```sh
    ./menor_distancia_array
    ```

## Uso

- O programa não requer nenhuma entrada do usuário, pois os arrays estão codificados no arquivo fonte.
- A saída exibirá a menor distância entre os números nos dois arrays.

## Estrutura de Arquivos

O projeto contém os seguintes arquivos:

- `main.cpp`: O arquivo fonte principal que contém todo o programa.

## Explicação do Código

### Função Main

A função main executa os seguintes passos:

1. Define dois arrays de inteiros.
2. Calcula o tamanho de cada array.
3. Inicializa variáveis para armazenar a distância e a menor distância encontrada.
4. Itera por cada combinação de elementos em ambos os arrays para encontrar a menor distância.
5. Imprime a menor distância encontrada.


## Exemplo

### Entrada

A entrada são os arrays codificados no código:

```cpp
int array1[] = {-1, 5, 19, -19, 8, -16, 0, 22, 65, 72};
int array2[] = {26, 6, -88, -6, -45, -3, 29, 15, -18, 100};
```

### Saída

O programa imprime a menor distância entre os números nos dois arrays:

```
A menor distância entre os números nos dois arrays é: 1
```