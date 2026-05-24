#include <stdio.h>
#include <string.h>

// Criar o modelo de entidade Territorio
typedef struct
{
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

/* 
Criar a interação com o usuário via terminal para cadastro de territórios. Foi implementada uma
funcionalidade que permite determinar a quantidade de territorios com base no interesse do usuário. 
*/

int main(){

    printf("\n<:><:><:> Cadastro de Teritórios <:><:><:>\n\n");
    int qtde;
    
    printf("Quantos territórios desejas cadastrar? ");
    scanf("%d", &qtde);
    printf("\n");

    Territorio territorios[qtde];

    for (int i = 0; i <= qtde - 1; i++)
    {
        if(i > 0) printf("________________\n\n");
        printf("Cadastre o território de número %d \n", i + 1);
        printf("\n");

        printf("Digite o nome do território: ");
        scanf("%s", &territorios[i].nome);

        printf("Digite a cor do domínio: ");
        scanf("%s", &territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas); 

        printf("\n");
    }

    // Listar os territórios criados imadiatamente após o cadastro do último
    printf("<:><:><:> Teritórios Cadastrados <:><:><:>\n");
    
    for (int i = 0; i <= qtde - 1; i++)
    {
        if(i > 0) printf("\n________________\n");
        printf("\nNome: %s", territorios[i].nome);
        printf("\nCor: %s", territorios[i].cor);
        printf("\nTropas: %d", territorios[i].tropas);
    }

    printf("\n\n<:><:><:> Fim do Processamento <:><:><:>\n\n");

}

