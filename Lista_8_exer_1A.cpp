
#include <stdio.h>
#include <string.h>
		void ordem();
		void alterar();
    	void informacoes();
    	void pesquisa();
    	struct cadastro{
    	char email[20];
    	int telefone;
    	char endereco[200];
    	char nome[100];
	};
	int pesq;
	struct cadastro pessoa1[2];
    
	void informacoes(){
    	int a; int b; char d[80]; char c[100];
    	for(int i=0; i<2;i++){
    	printf("digite seu email\n");
    	scanf("%d", &pessoa1[i].email);
    	getchar();
    	printf("digite seu telefone\n");
    	scanf("%d", &pessoa1[i].telefone);
    	fflush(stdin);
    	printf("digite seu nome\n");
    	fgets(pessoa1[i].nome,80,stdin);
    	pessoa1[i].nome[strcspn(pessoa1[i].nome, "\n")] = 0; // remove \n

    	printf("digite seu endereço\n");
    	fgets(pessoa1[i].endereco,100,stdin);
	}
	}
    
    int main(){
    
	int opcao;
    
	while(true){
    
    	printf(" Aperte 1- Cadastrar dados\n Aperte 2- Pesquisar idades\n Aperte 3- A genda em ordem alfabetica\n Aperte 4- Alterar dados\n Aperte 5-Sair\n");
    	scanf("%d", &opcao);
    	getchar();
    	
    	switch(opcao){
        	case 1:
        	informacoes();
            	break;
        	case 2:
            	pesquisa();
            	break;
       	 
        	case 3:
        		ordem();
            	break;
       	 
        	case 4:
        		alterar();
           	 
            	break;
       	 
        	case 5:
            	return 1;
            	break;
           	 
    	opcao = 0;
       	 
    	}
   	 
	}
    
	return 0;   	 
}
void pesquisa(){
char Pesq[100];

    printf("Digite o nome a ser pesquisado: ");
    fgets(Pesq, 100, stdin);
    Pesq[strcspn(Pesq, "\n")] = 0; // remove o ENTER

    for (int i = 0; i < 2; i++) { // só 2 cadastros fixos
        if (strcmp(Pesq, pessoa1[i].nome) == 0) {
            printf("\nPessoa encontrada:\n");
            printf("Nome: %s\n", pessoa1[i].nome);
            printf("Idade: %d\n", pessoa1[i].email);
            printf("Telefone: %d\n", pessoa1[i].telefone);
            printf("Endereco: %s\n", pessoa1[i].endereco);
            return; // sai da função quando acha
        }
    }
}

void ordem(){
	int j;
	int i;
	struct cadastro x;
	for(i=0;i<1;++i)
		for(j=i+1;j<2;++j){
		
	
		
		if(strcmp(pessoa1[i].nome, pessoa1[j].nome)>0){
			x=pessoa1[i];
			pessoa1[i]=pessoa1[j];
			pessoa1[j]=x;
		}
		
	}
	printf("\n Os nomes em ordem alfabetica são:\n");
for (i=0; i<2; i++) {
printf("%s", pessoa1[i].nome);
}	
    
}
void alterar(){
	int i;
	char n_b[80];
	printf("Entre com a pessoa a ser pesquisada:\n");
	
    fgets(n_b, 100, stdin);
	n_b[strcspn(n_b, "\n")] = 0;
	for(i=0;i<2;i++){
	if(strcmp(pessoa1[i].nome,n_b)==0){
    	printf("Registro encontrado:\n");
		printf("Idade: %d\n", pessoa1[i].email);
		printf("Nome: %s\n", pessoa1[i].nome);
        printf("Endereço: %s\n", pessoa1[i].endereco);
        printf("Telefone: %d\n", pessoa1[i].telefone);
            printf("Email: ");
            scanf("%d", &pessoa1[i].email);
            getchar(); // limpa buffer
            printf("Telefone: ");
            scanf("%d", &pessoa1[i].telefone);
            getchar(); // limpa buffer
            printf("Nome: ");
            fgets(pessoa1[i].nome, 100, stdin);
            pessoa1[i].nome[strcspn(pessoa1[i].nome, "\n")] = 0; 
            printf("Endereco: ");
            fgets(pessoa1[i].endereco, 200, stdin);
            pessoa1[i].endereco[strcspn(pessoa1[i].endereco, "\n")] = 0;

            printf("\nDados alterados com sucesso!\n");
            return;
            
        }
      printf("Pessoa nao encontrada!\n");


    }   
	} 
	
  
	

	
