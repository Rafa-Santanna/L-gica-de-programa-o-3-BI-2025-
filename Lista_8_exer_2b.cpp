#include<stdio.h>

int a[5], b[5], c[10], i;
int lera(){
    printf("Digite os valores de a");
    for(i=0; i<=4; ++i){
        scanf("%d", &a[i]);
    }
}

int lerb(){
    printf("Digite os valores de b");
    for(i=0; i<=4; ++i){
        scanf("%d", &b[i]);
    }
}

int aeb(){
    for(i=0; i<5; i++){
        c[i] = a[i];
        c[i+5] = b[i];
    }
}

int resul(){
    printf("Os valores da junção são:\n");
    for(i=0; i<=9; ++i){
        printf("%i", c[i]);
    }
}

int main(){
    lera();
    lerb();
    aeb();
    resul();
}
