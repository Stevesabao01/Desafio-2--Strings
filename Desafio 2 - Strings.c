#include <stdio.h>
#include <string.h>

int main() {
    char frase[100]; // Declara uma string para armazenar frase
    int tamanho; // armazenar o tamanho da frase

    printf("Digite a sua melhor frase: ");
    fgets(frase, sizeof(frase), stdin); // Captura a frase digitada pelo usuário

    // Remove o caractere de nova linha (\n) adicionado por fgets
    frase[strcspn(frase, "\n")] = '\0';

    // Calcula o tamanho da frase
    tamanho = strlen(frase);

    printf("A frase \"%s\" tem %d caracteres.\n", frase, tamanho);

    return 0;
}
