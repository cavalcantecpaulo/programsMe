//Paulo Cavalcante, Tentativa de criar qualquer coisa//

//Bibliotecas//
#include<stdio.h>
#include<stdlib.h>

//variáveis globais//
float real, dolar, euro, libra, realConvert, dolarConvert, euroConvert, libraConvert;
int escolha;

//programa//
void convertDolarToReal(){
    printf("Insira a quantia de dólares que quer converter em reais: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("Você inseriu a quantia de [%.2f]$", dolar);
    realConvert = (dolar * 5.7075);
    printf("\n\n%.2f dólares em reais são %.2fR$  *;", dolar, realConvert);
    printf("\n*Valores atualizados do dia 25/10/2024, Sexta-Feira.\n\n");
    exit(0);
}
void convertDolarToEuro(){
    printf("Insira a quantia de dólares que quer converter em euros: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f]$€", dolar);
        euroConvert = (dolar * 0.9257);
    printf("\n\n*%.2f dólares em Euros são %.2f€ *", dolar, euroConvert);
    printf("\n*Valores atualizados do dia 25/10/2024, Sexta-Feira.\n\n");
    exit(0);
    //funcao feita
}
void convertDolarToLibra(){
    printf("Insira a quantia de dólares que quer converter em libras esterlinas: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] £", dolar);
        libraConvert = (dolar * 0.77);
    printf("\n\n*%.2f dólares em Libras são %.2f £", dolar, libraConvert);
    printf("\n\n*Valores atualizados do dia 25/10/2024, Sexta-Feira");
}
void convertRealToDolar(){
    printf("Insira a quantia de reais que quer converter em dólares: \n");
    scanf("%f",  &real);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] R$", real);
        dolarConvert = (real * 0.18);
    printf("\n\n*%.2fR$ em dólares são %.2f$", real, dolarConvert);
    printf("\n\n*Valores atualizados do dia 25/10/2024, Sexta-Feira");
}
void convertRealToEuro(){
    printf("Insira a quantia de reais que quer converter em euros: \n");
    scanf("%f",  &real);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] R$", real);
        euroConvert = (real * 0.1622);
    printf("\n\n%.2fR$ em dólares são %.2f€ *;", real, euroConvert);
    printf("\n*Valores atualizados do dia 25/10/2024, Sexta-Feira");
    exit(0);
}
void convertRealToLibra(){

}
void convertEuroToDolar(){

}
void convertEuroToReal(){
    
}
void convertEuroToLibra(){
    
}
void convertLibraToDolar(){
    
}
void convertLibraToReal(){
}
void convertLibraToEuro(){
}

void escolhaConversao(int escolha) {
    
    switch (escolha) {
        case 1 :
            convertDolarToReal();
    	    break;
        case 2:
            convertDolarToEuro();
            break;
        case 3:
            convertDolarToLibra();
            break;
        case 4 : 
            convertRealToDolar();
            break;
        case 5:
            convertRealToEuro();
            break;
        case 6:
            convertRealToLibra();
            break;
        case 7:
            convertEuroToDolar();
            break;
        case 8:
            convertEuroToReal();
            break;
        case 9:
            convertEuroToLibra();
            break;
        case 10:
            convertLibraToDolar();
            break;
        case 11:
            convertLibraToReal();
            break;
        case 12:
            convertLibraToEuro();
            break;
        case 0 :
            printf("Encerrando o programa...");
            exit(0);
            break;

    default: 
        printf("OPÇÃO INVÁLIDA!!!!");
        printf("\nInsira Novamente!!!!");
        getch();
    }
    }

void menuPrograma() { 
    printf("Seja bem-vindo ao programa de conversão de moedas Real/Dólar/Euro/Libra!!!");
    printf("\nEscolha uma opção a seguir:");
    printf("\n\n           1. Converter Dólar para Real");
    printf("\n           2. Converter Dólar para Euro");
    printf("\n           3. Converter Dólar para Libra");
    printf("\n           4. Converter Real para Dólar");
    printf("\n           5. Converter Real para Euro");
    printf("\n           6. Converter Real para Libra");
    printf("\n           7. Converter Euro para Dólar");
    printf("\n           8. Converter Euro para Real");
    printf("\n           9. Converter Euro para Libra");
    printf("\n           10. Converter Libra para Dólar");
    printf("\n           11. Converter Libra para Real");
    printf("\n           12. Converter Libra para Euro");
    printf("\n           0. Sair do Programa\n");
    scanf("%i", &escolha);
}

int main(){
    while(1) {
    system("cls");
    menuPrograma();
    escolhaConversao(escolha);
    } 
    return 0;
}