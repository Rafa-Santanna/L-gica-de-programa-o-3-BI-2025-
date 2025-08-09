#include<stdio.h>
int main(){
	int A[20], i;
	for(i=0;i<=19;++i){
		A[i]=i;
	}
	printf("Os numeros de 1 a 20 pares são");
	for(i=0;i<=19;++i){
		if(A[i]%2==0){
		
		printf("\n %d\n", A[i]);
	}
}
	
	
	return 0;
}
