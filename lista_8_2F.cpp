#include <stdio.h>

int main() {
    int n, i;
     int n1=0, n2=1, proximo;

    printf("Quantos termos de Fibonacci deseja ver? ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", n1);
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
    }

    printf("\n");
    return 0;
}

