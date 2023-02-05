#include <stdio.h>

int main(){

    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhacao*\n");   
    printf("****************************************\n");

    int  numeroSecreto = 42;

    int chute;
    int ganhou = 0;

    int i = 1;
    
    while (ganhou == 0){

        printf("Tentativa %d\n", i);

        printf("Qual eh seu chute?\n");
        scanf("%d", &chute);

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;

        printf("Seu chute foi: %d\n", chute);

        if(chute < 0){
            printf("**********************************\n");
            printf("Dica: Numeros negativos nao valem!\n");
            printf("**       Essa nao contou!       **\n");
            printf("**********************************\n");

            continue;
        }
        else if (maior){
            printf("**************************************************\n");
            printf("**                  Voce errou                  **\n");
            printf("**         Nao desanime, tente de novo!         **\n");
            printf("Dica: Seu chute foi maior do que o numero secreto!\n");
            printf("**************************************************\n");
        }
        else if (menor){
            printf("**************************************************\n");
            printf("**                  Voce errou                  **\n");
            printf("Dica: Seu chute foi menor do que o numero secreto!\n");
            printf("**************************************************\n");
        }

        i++;
        


     

        if(acertou){
        printf("*******************************************\n");
            printf("**             Voce acertou!             **\n");
            printf("** Jogue de novo. Voce e um bom jogador! **\n");
            printf("*******************************************\n");


        printf("Fim de jogo!\n");
        ganhou = 1;
        }
    }
        
}
