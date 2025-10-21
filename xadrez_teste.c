#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Declarar váriaveis

    int bispo;
    int torre = 1;
    int rainha;
    int movimentoBispo, movimentoRainha, movimentoTorre;
    char movimentoCavaloX, movimentoCavaloY;

    // Implementação de Movimentação do Bispo

    // solicita quatas casas deseja movimentar o Bispo seguindo o padrão Cima,Direita
    printf("Digite quantas casas deseja movimentar o Bispo: ");
    scanf("%d", &movimentoBispo);

    // loop para miovimentação usando for
    for (bispo = 1; bispo <= movimentoBispo; bispo++){
        printf("Cima, Direta");
    }
    
    
    // Implementação de Movimentação da Torre
    // solicita quantas casas deseja miovimentar a Torre seguindo o padrão para direita

    printf("Digite quantas casas deseja movimentar a Torre: ");
    scanf("%d", &movimentoTorre);

    // loop para movimentar usando do-while
    do
    {
        
        printf("Direita\n");

        
        torre++;
    } while (torre <= movimentoTorre);
    
    

    // Implementação de Movimentação da Rainha
    // solicita quantas casas deseja miovimentar a Torre seguindo o padrão para direita
    
    printf("Digite quantas casas deseja movimentar a Rainha: ");
    scanf("%d", &movimentoRainha);

    // loop para movimentar usando for
    for (rainha = 1; rainha <= movimentoRainha; rainha++)
    {
        printf("Esquerda\n");
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.

    
    // solictar entrada de dados ao usuário
    printf("Escolha o movimento vertical do cavalor (C)ima ou (B)aixo do Cavalo\n");
    scanf(" %c", &movimentoCavaloY);
    printf("Escolha o movimento vertical do cavalor (E)squerda ou (D)ireita do Cavalo\n");
    scanf(" %c", &movimentoCavaloX);

    //estrutura de menu para escolher o movimento do cavalo + loop aninhado para movimento do cavalo

    switch (movimentoCavaloY)
    {
    case 'C':
    case 'c':
        if (movimentoCavaloX == 'E'){
            for (int movimento1 = 0; movimento1 < 1; movimento1++){
                for (int movimento2 = 0; movimento2 < 2; movimento2++){
                printf("Cima\n");
                }
                printf("Esqueda\n");
            }
        } else if (movimentoCavaloX == 'D'){
            for (int movimento1 = 0; movimento1 < 1; movimento1++){
                for (int movimento2 = 0; movimento2 < 2; movimento2++){
                printf("Cima\n");
                }
                printf("Direita\n");
            }
        }
        
    break;

    case 'B':
    case 'b':
        if (movimentoCavaloX == 'E' || movimentoCavaloX == 'e'){
            for (int movimento1 = 0; movimento1 < 1; movimento1++){
                for (int movimento2 = 0; movimento2 < 2; movimento2++){
                printf("Baixo\n");
                }
                printf("Esqueda\n");
            }
        } else if (movimentoCavaloX == 'D' || movimentoCavaloX == 'd'){
            for (int movimento1 = 0; movimento1 < 1; movimento1++){
                for (int movimento2 = 0; movimento2 < 2; movimento2++){
                printf("Baixo\n");
                }
                printf("Direita\n");
            }
        }
        
        break;    
    
    default:
        printf("Opção inválida\n");
        break;
    }

        
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
