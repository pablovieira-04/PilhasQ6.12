#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter_palavra(char *inicio, char *fim) { //troca os caracteres de início para o fim até chegar ao meio
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}


//inverte as letras de cada palavra na sentença
void inverter_palavras(char *sentenca) {
    char *inicio_palavra = sentenca;
    
    while (*sentenca) {
        if (*sentenca == ' ' || *(sentenca + 1) == '\0') {
            if (*(sentenca + 1) == '\0') {
                inverter_palavra(inicio_palavra, sentenca);
            } else {
                inverter_palavra(inicio_palavra, sentenca - 1);
            }
            inicio_palavra = sentenca + 1;
        }
        sentenca++;
    }
}

int main() {
    char frase[] = "AMU MEGASNEM ATERCES";
    printf("Sentença original: %s\n", frase);
    
    inverter_palavras(frase);
    printf("Sentença invertida: %s\n", frase);
    
    return 0;
}