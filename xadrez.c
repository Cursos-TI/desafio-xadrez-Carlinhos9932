#include <stdio.h>

void Recursividade(int t){
    if (t > 0){
        Recursividade(t - 1);
        printf("%d casa!\n", t);
    }
}


int main()
{
    // movtorre, movbispo, movrainha, representam a movimentação a seguir de cada peça assim,
    // se necessario posso fazer um scanf para que o movimento seja digitado ao invez de
    // já estar codado dentro da programação.
    int torre, bispo, rainha, cavaloH, cavaloV, movtorre, movrainha, movcavaloH, movcavaloV;
    int opcao;
    int movbispoH, movbispoV;
    torre = 0;
    movtorre = 5;
    bispo = 0;
    movbispoH = 5;
    movbispoV = 5;
    rainha = 0;
    movrainha = 8;
    movcavaloH = 1;
    movcavaloV = 2;

    printf("Bem vindo ao Xadrez, Escolha qual peça você deseja mover:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcao);

    // os Resultados de casas mostram o numero de casas totais percorridas.

    switch (opcao)
    {
    case 1:
        printf("torre moveu para direita:\n");
        
        Recursividade(movtorre);
        break;

    case 2:
    for (bispo = 0; bispo < movbispoV; bispo++)
    {       
        
        while (bispo < 5)
        {
            bispo++;
        }
        }
    
            printf("Bispo moveu para cima:\n");
        Recursividade(movbispoV);
        printf("Bispo moveu para direita:\n");
        Recursividade(movbispoH);
    
        
    
        break;

    case 3:
        printf("Rainha moveu para esquerda:\n");
        
        Recursividade(movrainha);
        break;

    case 4:
        for (cavaloH = 0; cavaloH <= movcavaloH; cavaloH++)
        {
            for (cavaloV = 0; cavaloV <= movcavaloV && cavaloH == 0; cavaloV++)
            {
                if (cavaloV != 0)
                {
                    printf("Cavalo moveu para cima: %d casas!\n", cavaloV);
                }
            }
            if (cavaloH != 0)
            {
                printf("Cavalo moveu para direita: %d casas!\n", cavaloH);
            }


            
            
        }
        
        break;


    default:
        break;
    }

    return 0;
}
