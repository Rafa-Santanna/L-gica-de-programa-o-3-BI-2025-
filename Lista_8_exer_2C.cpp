#include<stdio.h>

prestacao(int valor, float taxa, int tempo){
    printf("%.2f", valor + (valor * (taxa/100) * tempo));
}

int main(){
    int a, c;
    float b;
    scanf("%d %f %d", &a, &b, &c);
    prestacao(a, b, c);
}
