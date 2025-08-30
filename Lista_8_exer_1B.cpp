//Fiz só para 2 alunos, 20 ia ficar grande dms
#include <stdio.h>
#include <string.h>
#include<stdbool.h>
		void Aprovado();
		void reprovado();
		void Alterar();
   void informacoes();
		void classificar();
    	struct cadastro{
    	int nota;
    	char nome[100];
	};
	struct cadastro pessoa1[2];
    void informacoes(){
    	int a; int b; char d[80]; char c[100];
    	for(int i=0; i<2;i++){
    	printf("digite a nota do aluno\n");
    	scanf("%d", &pessoa1[i].nota);
    	fflush(stdin);
    	printf("digite seu nome\n");
    	fgets(pessoa1[i].nome,80,stdin);
    	pessoa1[i].nome[strcspn(pessoa1[i].nome, "\n")] = 0; // remove \n
    	
	}
	}
	void classificar(){
		int i,j,nota[i];
		 struct cadastro x;
		printf("Os alunos classificados por nota sao:\n");
		for(i=0;i<1;++i){
			for(j=i+1;j<2;++j){
				if(pessoa1[i].nota<pessoa1[j].nota){
					x=pessoa1[i];
					pessoa1[i]=pessoa1[j];
					pessoa1[j]=x;
									}
				
			}
				}
		printf("As notas em ordem crescente sao\n");
		for(i=0;i<2;++i){
		
		printf("%d\n", pessoa1[i].nota);
	}
}
void Alterar(){
	int i;
	char n_b[80];
	printf("Entre com a pessoa a ser pesquisada:\n");
	
    fgets(n_b, 100, stdin);
	n_b[strcspn(n_b, "\n")] = 0;
	for(i=0;i<2;i++){
	if(strcmp(pessoa1[i].nome,n_b)==0){
    	printf("Registro encontrado:\n");
		printf("Nome: %s\n", pessoa1[i].nome);
        printf("Nota: %d\n", pessoa1[i].nota);
            printf("Nota: ");
            scanf("%d", &pessoa1[i].nota);
            getchar(); // limpa buffer
            printf("Nome: ");
            fgets(pessoa1[i].nome, 100, stdin);
            pessoa1[i].nome[strcspn(pessoa1[i].nome, "\n")] = 0; 
           printf("\nDados alterados com sucesso!\n");
            return;
            
        }
    }
}
void Aprovado(){
	int i;

	for(i=0;i<2;++i){
		if(pessoa1[i].nota>=7){
		printf("Aprovado %s", pessoa1[i].nome);
	}
	
	}
}
void reprovado(){
	int i;

	for(i=0;i<2;++i){
		if(pessoa1[i].nota<7){
		printf("Reprovado %s", pessoa1[i].nome);
	}
	
	}
}
	int main(){
	
	while(true){
		int opcao;
    
    	printf(" Aperte 1- Cadastrar dados\n Aperte 2- Classificar por nota\n Aperte 3-Alterar notas\n Aperte 4- Alunos aprovados\n Aperte 5-Reprovados\n");
    	scanf("%d", &opcao);
    	getchar();
    	
    	switch(opcao){
        	case 1:
        	informacoes();
            	break;
        	case 2:
            	classificar();
            	break;
       	 
        	case 3:
        		Alterar();
            	break;
       	 
        	case 4:
        		Aprovado();
           	 
            	break;
       	 
        	case 5:
            reprovado();
            break;
       	 
    	}
   	 
	}
    
	return 0;   	 
}
