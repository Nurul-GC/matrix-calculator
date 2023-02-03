#ifndef CALCULOS
#define CALCULOS

void soma()
{
    int n, c;
    printf("\nS� � poss�vel a soma de matrizes\nquando elas t�m a mesma ordem,\nisto � mesmo n�mero de linhas e \ncolunas.\n\n");
    system("cls");

    // banner_soma();
    printf("\nPrimeira Matriz:\n");
    printf("Digite o n�mero de colunas >");
    scanf("%d", &n);
    printf("Digite o n�mero de linhas >");
    scanf("%d", &c);
    system("cls");

    int matriz[n][c];
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < c; b++)
        {
            // banner_soma();
            printf("\nDigite o indice da matriz na:\nlinha: %d, coluna: %d => ", a + 1, b + 1);
            scanf("%d", &matriz[a][b]);
            system("cls");
        }
    }

    int f, d;
Ronaldo:
    // banner_soma();
    printf("\nSegunda Matriz:\n");
    printf("Digite o n�mero de colunas >");
    scanf("%d", &f);

    printf("Digite o n�mero de linhas >");
    scanf("%d", &d);

    system("cls");
    int matri[f][d];
    if (c == d && f == n)
    {

        for (int a = 0; a < f; a++)
        {
            for (int b = 0; b < d; b++)
            {
                // banner_soma();
                printf("\nDigite o indice da matriz na:\nlinha: %d, coluna: %d => ", a + 1, b + 1);
                scanf("%d", &matri[a][b]);
                system("cls");
            }
        }
        // banner_soma();
        printf("\n________Primeira Matriz_________\n");

        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < c; b++)
            {
                printf("[%d]", matriz[a][b]);
            }
            printf("\n");
        }

        printf("\n________Segunda Matriz__________\n");
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < c; b++)
            {
                printf("[%d]", matri[a][b]);
            }
            printf("\n");
        }
        printf("\n___________Soma delas___________\n");

        for (int a = 0; a < f; a++)
        {
            for (int b = 0; b < d; b++)
            {
                printf("[%d]+[%d]", matriz[a][b], matri[a][b]);
            }
            printf("\n");
        }
        printf("\n___________Resultado____________\n");

        int resultado[n][c];
        for (int a = 0; a < f; a++)
        {
            for (int b = 0; b < d; b++)
            {
                n = 0;
                c = 0;
                resultado[n][c] = matriz[a][b] + matri[a][b];

                printf("[%d]", resultado[n][c]);
            }
            printf("\n");
        }
    }

    else
    {
        // banner_soma();
        printf("\nApenas é possível a soma de matrizes \nquando elas tiverem a mesmaordem, \n ou seja, o mesmo número de colunas\n e linhas\n");

        system("cls");
        goto Ronaldo;
    }
}

void sub()
{
    int n, c;
    printf("\nDefine-se a subtração de matrizes\ncomo a diferença da primeira com a\n oposta da segunda, e elas têm que \nter a mesma ordem, ou seja mesmo\nnúmero de linhas e colunas.\n");
    system("cls");

    // banner_subtracao();
    printf("\nPrimeira Matriz:\n");
    printf("Digite o número de linhas\n> ");
    scanf("%d", &n);

    printf("Digite o número de colunas\n> ");
    scanf("%d", &c);
    system("cls");

    int matriz[n][c];
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < c; b++)
        {
            // banner_subtracao();
            printf("\nDigite o indice da matriz na:\nlinha: %d, coluna: %d => ", a+1, b+1);
            scanf("%d", &matriz[a][b]);
            system("cls");
        }
    }

RFS_Program:
    int f, d;
    banner_subtracao();
    printf("\nSegunda Matriz:\n");
    printf("Digite o número de colunas\n> ");
    scanf("%d", &f);

    printf("Digite o número de linhas >");
    scanf("%d", &d);
    system("cls");

    int matriz[f][d];
    if (c == d && f == n)
    {
        for (int a = 0; a < f; a++)
        {
            for (int b = 0; b < d; b++)
            {
                banner_subtracao();
                printf("\nDigite o indice da matriz na:\nlinha: %d, coluna: %d => ", a+1, b+1);
                scanf("%d", &matriz[a][b]);
                system("cls");
            }
        }
        banner_subtracao();
        printf("\n----------[ Primeira Matriz ]----------\n");

        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < c; b++)
            {
                printf("[%d]", matriz[a][b]);
            }
            printf("\n");
        }

        printf("\n----------[ Segunda Matriz ]----------\n");
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < c; b++)
            {
                printf("[%d]", matriz[a][b]);
            }
            printf("\n");
        }
        printf("\n----------[ Subtração Delas ]----------\n");

        for (int a = 0; a < f; a++)
        {
            for (int b = 0; b < d; b++)
            {
                printf("[%d]-[%d]", matriz[a][b], matriz[a][b]);
            }
            printf("\n");
        }
        printf("\n----------[ Resultado ]----------\n");

        int resultado[n][c];
        for (int a = 0; a < f; a++)
        {
            for (int b = 0; b < d; b++)
            {
                n = 0;
                c = 0;
                resultado[n][c] = matriz[a][b] - matriz[a][b];

                printf("[%d]", resultado[n][c]);
            }
            printf("\n");
        }
    }

    else
    {
        banner_soma();
        printf("\nApenas é possível a soma de matrizes \nquando elas têm a mesma \nordem, ou seja, o mesmo número de colunas\n e linhas!");

        system("cls");
        goto RFS_Program;
    }
}

void muliplicacao()
{
    int numlinha, numcoluna;

    printf("\nMatriz é uma representação de \ndados, geralmente numéricos,\ndivididos por linhas e colunas\nSão estruturas némericas em\nforma de tabela.\n\n");
    printf("\nPrimeiro vaz digitar o n�mero\nde linhas de seguida o de colunas\n");
    printf("e por final os elementos da matriz\n");
    system("cls");

    // banner_criacaomatr();
    printf("Digite o número de linhas\n> ");
    scanf("%d", &numlinha);
    
    printf("Digite o número de colunas\n> ");
    scanf("%d", &numcoluna);
    system("cls");

    int matriz[numlinha][numcoluna];
    for (int a = 0; a < numlinha; a++)
    {
        for (int b = 0; b < numcoluna; b++)
        {
            // banner_criacaomatr();
            printf("\nDigite o indice da matriz na:\nlinha: %d, coluna: %d => ", a+1, b+1);
            scanf("%d", &matriz[a][b]);
            system("cls");
        }
    }
    banner_criacaomatr();
    if (numlinha == numcoluna)
    {
        printf("\nMatriz Quadrada de ordem [%dx%d]\n\n", numlinha, numcoluna);
    }
    if (numlinha == 1 && numcoluna > 1)
    {
        printf("\nMatriz linha de ordem [%dx%d]\n\n", numlinha, numcoluna);
    }

    if (numlinha > 1 && numcoluna == 1)
    {
        printf("\nMatriz coluna de ordem [%dx%d]\n\n", numlinha, numcoluna);
    }

    if (numlinha != 1 && numcoluna != 1 && numlinha != numcoluna)
    {
        printf("\nMatriz retangular de ordem [%dx%d]\n\n", numlinha, numcoluna);
    }
    for (int a = 0; a < numlinha; a++)
    {
        for (int b = 0; b < numcoluna; b++)
        {
            printf("[%d]", matriz[a][b]);
        }
        printf("\n");
    }
}

void determinant()
{
    // banner_det();
    int numcol, numcoluna;
    int ordem, result, result2, result3;

    printf("\nDeterminante é uma função matricial\nque associa uma matriz quadrada a \num escalar, ou seja, transforma uma\nmatriz quadrada em um número real\n\n");
    printf("OBS: Apenas é possível achar o Derminante\nde matrizes quadradas.\n");

    system("cls");
    banner_det();
RFS:
    printf("Digite o número de colunas >");
    scanf("%d", &numcol);

    printf("Digite o número de linhas >");
    scanf("%d", &numcoluna);
    system("cls");

    if (numcol >= 5 || numcoluna >= 5)
    {
        printf("Ainda não foi definida, apenas temos diponíveis matrizes inferiores a 4º ordem..\n ");
    }

    int matriz[numcol][numcoluna], resultado, deter;
    if (numcol == numcoluna)
    {
        for (int a = 0; a < numcol; a++)
        {
            for (int b = 0; b < numcoluna; b++)
            {
                // banner_det();
                printf("\nDigite o indice da matriz na:\nlinha: %d, coluna: %d => ", a+1, b+1);
                scanf("%d", &matriz[a][b]);
                system("cls");
            }
            printf("\n********************************\n");
        }
        system("cls");
        banner_det();

        for (int a = 0; a < numcol; a++)
        {
            for (int b = 0; b < numcoluna; b++)
            {
                printf("[ %d ]", matriz[a][b]);
            }
            printf("\n");
        }

        if (numcoluna == 1)
        {
            printf("Determinante da primeira ordem [1x1]:\n[ %d ]\n\n", matriz[0][0]);
        }
        if (numcoluna == 2)
        {
            resultado = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
            printf("\nDeterminante da segunda ordem [2x2]:\n(%d x %d)-(%d x %d) = %d\n\n", matriz[0][0], matriz[1][1], matriz[0][1], matriz[1][0], resultado);
        }

        if (numcoluna == 3)
        {
            resultado = (matriz[0][0] * matriz[1][1] * matriz[2][2] + matriz[1][0] * matriz[2][1] * matriz[0][2] + matriz[2][0] * matriz[0][1] * matriz[1][2] - matriz[2][0] * matriz[1][1] * matriz[0][2] - matriz[0][0] * matriz[2][1] * matriz[1][2] - matriz[1][0] * matriz[0][1] * matriz[2][2]);
            printf("\nDeterminante da terceira ordem [3x3]:\n((%d x %d x %d)+(%d x %d x %d)+(%d x %d x %d))-((%d x %d x %d)-(%d x %d x %d)-(%d x %d x %d)) = %d\n\n", matriz[0][0], matriz[1][1], matriz[2][2], matriz[1][0], matriz[2][1], matriz[0][2], matriz[2][0], matriz[0][1], matriz[1][2], matriz[2][0], matriz[1][1], matriz[0][2], matriz[0][0], matriz[2][1], matriz[1][2], matriz[1][0], matriz[0][1], matriz[2][2], resultado);
        }
        if (numcoluna == 4)
        {
            printf("\nDeterminante da quarta ordem [4x4]:\n");
            resultado = ((matriz[0][0] * matriz[1][1] * matriz[2][2] * matriz[3][3]) - (matriz[0][1] * matriz[1][2] * matriz[2][3] * matriz[3][0]) + (matriz[0][2] * matriz[1][3] * matriz[2][0] * matriz[3][1]) - (matriz[0][3] * matriz[1][0] * matriz[2][1] * matriz[3][2]) + (matriz[3][0] * matriz[2][1] * matriz[1][2] * matriz[0][3]) - (matriz[0][0] * matriz[1][3] * matriz[2][2] * matriz[3][1]) + (matriz[0][1] * matriz[1][0] * matriz[2][3] * matriz[3][2]) - (matriz[0][2] * matriz[1][1] * matriz[2][1] * matriz[3][3]));
            printf("Det1 = ((%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)) = %d\n", matriz[0][0], matriz[1][1], matriz[2][2], matriz[3][3], matriz[1][0], matriz[3][1], matriz[0][2], matriz[2][3], matriz[2][0], matriz[3][1], matriz[0][2], matriz[1][3], matriz[3][0], matriz[0][1], matriz[1][2], matriz[2][3], matriz[3][0], matriz[2][1], matriz[1][2], matriz[0][3], matriz[0][0], matriz[3][1], matriz[2][2], matriz[1][3], matriz[1][0], matriz[0][1], matriz[3][2], matriz[2][3], matriz[3][3], matriz[0][2], matriz[1][1], matriz[2][0], resultado);

            result = (-(matriz[0][1] * matriz[1][0] * matriz[2][2] * matriz[3][3]) + (matriz[0][0] * matriz[1][2] * matriz[2][3] * matriz[3][1]) - (matriz[0][2] * matriz[1][3] * matriz[2][1] * matriz[3][0]) + (matriz[0][3] * matriz[1][1] * matriz[2][0] * matriz[3][2]) - (matriz[3][1] * matriz[2][0] * matriz[1][2] * matriz[0][3]) + (matriz[3][0] * matriz[2][2] * matriz[1][3] * matriz[0][1]) - (matriz[3][2] * matriz[2][3] * matriz[1][1] * matriz[0][0]) + (matriz[3][3] * matriz[2][1] * matriz[1][0] * matriz[0][2]));
            printf("Det2 = (-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)) = %d\n", matriz[0][1], matriz[1][0], matriz[2][2], matriz[3][3], matriz[0][0], matriz[1][2], matriz[2][3], matriz[3][1], matriz[0][2], matriz[1][3], matriz[2][1], matriz[3][0], matriz[0][3], matriz[1][1], matriz[2][0], matriz[3][2], matriz[3][1], matriz[2][0], matriz[1][2], matriz[0][3], matriz[3][0], matriz[2][2], matriz[1][3], matriz[0][1], matriz[3][2], matriz[2][3], matriz[1][1], matriz[0][0], matriz[3][3], matriz[2][1], matriz[1][0], matriz[0][2], result);

            result2 = ((matriz[0][1] * matriz[1][2] * matriz[2][0] * matriz[3][3]) - (matriz[0][2] * matriz[1][0] * matriz[2][3] * matriz[3][1]) + (matriz[0][0] * matriz[1][3] * matriz[2][1] * matriz[3][2]) - (matriz[0][3] * matriz[1][1] * matriz[2][2] * matriz[3][0]) + (matriz[3][1] * matriz[2][2] * matriz[1][0] * matriz[0][3]) - (matriz[3][2] * matriz[2][0] * matriz[1][3] * matriz[0][1]) + (matriz[3][0] * matriz[2][3] * matriz[1][1] * matriz[0][2]) - (matriz[3][3] * matriz[2][1] * matriz[1][2] * matriz[0][0]));
            printf("Det3 = ((%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)+(%d x %d x %d x %d)-(%d x %d x %d x %d)) = %d\n\n", matriz[0][1], matriz[1][2], matriz[2][0], matriz[3][3], matriz[0][2], matriz[1][0], matriz[2][3], matriz[3][1], matriz[0][0], matriz[1][3], matriz[2][1], matriz[3][2], matriz[0][3], matriz[1][1], matriz[2][2], matriz[3][0], matriz[3][1], matriz[2][2], matriz[1][0], matriz[0][3], matriz[3][2], matriz[2][0], matriz[1][3], matriz[0][1], matriz[3][0], matriz[2][3], matriz[1][1], matriz[0][2], matriz[3][3], matriz[2][1], matriz[1][2], matriz[0][0], result2);
            
            result3 = resultado + result + result2;
            printf("(%d)+(%d)+(%d) = %d", resultado, result, result2, result3);
        }
    }

    else
    {
        system("cls");
        banner_det();
        printf("\nApenas é possível achar a Determinante\n de uma matriz quadrada, ou seja,\nnúmero de colunas tem que ser igual\nao número de linhas!\n");
        system("cls");
        goto RFS;
    }
}

#endif
