#include <stdio.h>

// Desafio de Xadrez - MateCheck

// função para declarar movimento bispo
void moverBispo(int bispo){
    if (bispo > 0){
        printf("Cima, Direita\n");
        moverBispo(bispo -1);
    }
}

// função para declarar movimento torre
void moverTorre(int torre){
    if (torre > 0){
        printf("Direita\n");
        moverTorre(torre -1);
    }
}

// função para declarar movimento rainha
void moverRainha(int rainha){
    if (rainha > 0){
        printf("Esquerda\n");
        moverRainha(rainha -1);
    }
}


// FUNÇÃO DE EXECUÇÃO DO CODIGO

int main() {
    int movimentoBispo, movimentoRainha, movimentoTorre;
    char movimentoCavaloX, movimentoCavaloY;

    // SOLICITAR MOVIMENTO DO BISPO

    printf("Digite quantas casas deseja movimentar o Bispo: ");
    scanf("%d", &movimentoBispo);

    // LOOP DO MOVIMENTO DO BISPO USANDO RECURSIVIDADE
    moverBispo(movimentoBispo);

    // SOLICITAR MOVIMENTO DA TORRE

    printf("Digite quantas casas deseja movimentar a Torre: ");
    scanf("%d", &movimentoTorre);

    // LOOP DO MOVIMENTO DA TORRE USANDO RECURSIVIDADE
    moverTorre(movimentoTorre);

    // SOLICITAR MOVIMENTO DA RAINHA

    printf("Digite quantas casas deseja movimentar a Rainha: ");
    scanf("%d", &movimentoRainha);

    // LOOP DO MOVIMENTO DA RAINHA USANDO RECURSIVIDADE
    moverRainha(movimentoRainha);

    // CIRAÇÃO DE LÓGICA PARA SOLICITAR MOVIMENTO DO CAVALO

    printf("Escolha o movimento vertical do cavalo (C)ima ou (B)aixo:\n");
    scanf(" %c", &movimentoCavaloY);
    printf("Escolha o movimento horizontal do cavalo (E)squerda ou (D)ireita:\n");
    scanf(" %c", &movimentoCavaloX);

    //MENU DE LEUTURA

    switch (movimentoCavaloY)
    {
    case 'C':
    case 'c':
        if (movimentoCavaloX == 'E' || movimentoCavaloX == 'e'){
            printf("Cima\nCima\nEsquerda\n");
        } else if (movimentoCavaloX == 'D' || movimentoCavaloX == 'd'){
            printf("Cima\nCima\nDireita\n");
        }
        break;

    case 'B':
    case 'b':
        if (movimentoCavaloX == 'E' || movimentoCavaloX == 'e'){
            printf("Baixo\nBaixo\nEsquerda\n");
        } else if (movimentoCavaloX == 'D' || movimentoCavaloX == 'd'){
            printf("Baixo\nBaixo\nDireita\n");
        }
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}
