#include<stdio.h>

int main(){
    int num;
    int soma(int num1);
    printf("Digite o numero:");
    scanf("%i", &num);
    soma(num);
}

int soma(int num1)
{
    int x, p;
    x = 0;
    for(p = 1; p <= num1; p = p + 1)
    {
        x = x + p;
    }
    printf("A soma e : %d", x);
}

