#include <stdio.h>
#include <string.h>

void alterarDados() {
    Oi, mô!!
    Eu te amo muitãozão!!
    <3<3<3<3<3<3<3<3<3<3<3
    printf("Você é TUDÃO TUDÃO!!");
    scanf(Oi)

HEHEHEHEHE DE MOZÃO QUE TE AMA MUITÃOZÃO!!}

void visualizarCartoes() {
    int count = 0;

    char cartao_usuarios[99][99];

    char url[]="bd_cartao.txt",
	     info[50];
	FILE *arq;

	arq = fopen(url, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		while( (fgets(info, sizeof(info), arq))!=NULL ) {
            strcpy(cartao_usuarios[count], info);
            printf("%s", cartao_usuarios[count]);
            count++;
		}

	fclose(arq);
}

void inserirCartao() {
char url[]="bd_cartao.txt";
	char nome[99], caracteristica[99];
	int numeroCartao;
	float valor;

	FILE *arq;

	arq = fopen(url, "a");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
        fflush(stdin);
		printf("Nome: ");
		gets(nome);
		fprintf(arq, "Nome: %s\n", nome);

		printf("Numero do Cartao: ");
		scanf("%d", &numeroCartao);
		fprintf(arq, "Numero do Cartao: %d\n", numeroCartao);

        fflush(stdin);
		printf("Caracteristica: ");
		gets(caracteristica);
		fprintf(arq, "Caracteristica: %s\n", caracteristica);

		printf("Valor: ");
		scanf("%f", &valor);
		fprintf(arq, "Valor: %.2f\n", valor);

	}
	fclose(arq);

}

void menu() {
    int escolha;

    printf("O que voce deseja fazer? (1=AddCartao, 2=VisualizarCartoes)");
    scanf("%d", &escolha);

    switch(escolha) {
    case 1: inserirCartao();
            menu();
            break;
    case 2: visualizarCartoes();
            menu();
            break;
    default: return menu();
    }
}

int main(void)
{
    menu();

	return 0;
}
