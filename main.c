#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "headers/banners.h"
#include "headers/calculos.h"

int main(void)
{
    setlocale(0, "Portuguese_Portugal");

RFS_Program:
    banner_intro();
    banner_menu();
    int escolha, sair;
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        banner_criacaomatr();
        muliplicacao();
        break;

    case 2:
        banner_soma();
        soma();
        break;

    case 3:
        banner_subtracao();
        sub();
        break;

    case 4:
        determinant();
        break;

    default:
        printf("Lamento!! A opção escolhida não\nfoi definida.\n \nOBS: Escolha entre as opões supra citadas\nno Menu [1, 2, 3, 4].\n");
        system("cls");
        goto RFS_Program;
        break;
    }

    system("cls");
terminar:
    printf("\n\nPretende continuar a fazer operações com matrizes?\n\n");
    printf("Clica na tecla [ 1 ] para continuar\nClica na tecla [ 0 ] pra sair\n>");
    scanf("%d", &sair);

    if (sair == 0)
    {
        printf("Obrigado pela atenção foi\n bom aprende com você!\n");
        exit;
    }

    if (sair == 1)
    {
        printf("Obrigado por escolher continuar..\n\n");
        system("cls");
        goto RFS_Program;
    }

    if (sair != 0 && sair != 1)
    {
        system("cls");
        goto terminar;
    }

    getch();
    return 0;
}
