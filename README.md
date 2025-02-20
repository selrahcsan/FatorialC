# Calculadora de Fatorial com GMP

Este repositório contém um programa em C que calcula o fatorial de um número inteiro usando a biblioteca GNU Multiple Precision Arithmetic Library (GMP). A GMP permite trabalhar com números inteiros de precisão arbitrária, o que significa que podemos calcular fatoriais de números muito grandes sem se preocupar com overflow.

## Descrição

O programa `fatorial.c` recebe um número inteiro como entrada e calcula o seu fatorial. O resultado é impresso no console, juntamente com o número original.

## Como usar

1.  **Clone o repositório:**

    ```bash
    git clone https://github.com/selrahcsan/FatorialC.git
    ```

2.  **Compile o programa:**

    ```bash
    gcc fatorial.c -o fatorial -lgmp
    ```

    Certifique-se de ter a biblioteca GMP instalada no seu sistema. Se você estiver em um sistema Linux (como Debian/Ubuntu), você pode instalá-la com o seguinte comando:

    ```bash
    sudo apt-get install libgmp-dev
    ```

3.  **Execute o programa:**

    ```bash
    ./fatorial
    ```

    O programa irá solicitar um número inteiro como entrada.


