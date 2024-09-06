#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int p[MAX];
int t = -1;

void push(int elemento) {
    if (t < MAX - 1) {
        t++;
        p[t] = elemento;
        printf("Elemento %d inserido na pilha.\n", elemento);
    } else {
        printf(" Pilha cheia.\n");
    }
}

int pop() {
    if (t >= 0) {
        int elemento = p[t];
        t--;
        printf("Elemento %d removido da pilha.\n", elemento);
        return elemento;
    } else {
        printf(" Pilha vazia.\n");
        return -1;
    }
}

int main() {
    push(10);
    push(20);
    pop();
    pop();
    pop();

    return 0;
}