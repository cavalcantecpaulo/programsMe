//Paulo Cavalcante, Tentativa de criar qualquer coisa//
//mexendo pela 2ª vez, 29/10/2024, 02:55 da manhã//
//SANTOS FUTEBOL CLUBE//

//Bibliotecas//
#include<stdio.h>
#include<stdlib.h>

//variáveis globais//
float real, dolar, euro, libra, realConvert, dolarConvert, euroConvert, libraConvert;
int escolha, inicialEsc;

//Protótipo das funções//
void convertDolarToReal();
void convertDolarToEuro();
void convertDolarToLibra();
void convertRealToDolar();
void convertRealToEuro();
void convertRealToLibra();
void convertEuroToDolar();
void convertEuroToReal();
void convertEuroToLibra();
void convertLibraToDolar();
void convertLibraToReal();
void convertLibraToEuro();
void menuInicial();
void menuFinanceiro();
void escolhaInicial(int inicialEsc);
void escolhaFinanceiro(int escolha);

//functions//
void convertDolarToReal(){
    printf("Insira a quantia de dólares que quer converter em reais: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("Você inseriu a quantia de [%.2f] dólares", dolar);
    realConvert = (dolar * 5.7116);
    printf("\n\n%.2f dólares são %.2fR$ *;", dolar, realConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
    exit(0);
}
void convertDolarToEuro(){
    printf("Insira a quantia de dólares que quer converter em euros: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] dólares", dolar);
        euroConvert = (dolar * 0.9252);
    printf("\n\n%.2f dólares são %.2f€ *", dolar, euroConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
    exit(0);
}
void convertDolarToLibra(){
    printf("Insira a quantia de dólares que quer converter em libras esterlinas: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] dólares", dolar);
        libraConvert = (dolar * 0.7716);
    printf("\n\n%.2f dólares são %.2f£ libras *", dolar, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
    exit(0);
}                                       
void convertRealToDolar(){
    printf("Insira a quantia de reais que quer converter em dólares: \n");
    scanf("%f",  &real);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] reais", real);
        dolarConvert = (real * 0.1751);
    printf("\n\n%.2f reais são %.2f$ *", real, dolarConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertRealToEuro(){
    printf("Insira a quantia de reais que quer converter em euros: \n");
    scanf("%f",  &real);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] reais", real);
        euroConvert = (real * 0.1620);
    printf("\n\n%.2f reais são %.2f€ *;", real, euroConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
    exit(0);
}
void convertRealToLibra(){
    printf("Insira a quantia de reais que quer converter em libras: \n");
    scanf("%f",  &real);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] reais", real);
        libraConvert = (real * 0.1351);
    printf("\n\n%.2f reais são %.2f£ *;", real, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
    exit(0);
}
void convertEuroToDolar(){
    printf("Insira a quantia de euros que quer converter em dólares: \n");
    scanf("%f",  &euro);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] euros ", euro);
        dolarConvert = (euro * 1.0807);
    printf("\n\n%.2f euros são %.2f$*", euro, dolarConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
    exit(0);
}
void convertEuroToReal(){
    printf("Insira a quantia de euros que quer converter em reais: \n");
    scanf("%f",  &euro);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] euros ", euro);
        realConvert = (euro * 6.1753);
    printf("\n\n%.2f euros são %.2fR$ *", euro, realConvert);
    printf("\n*Valores atualizados do dia 29/10/2024, Terça-feira");
    exit(0);
}
void convertEuroToLibra(){
    printf("Insira a quantia de euros que quer converter em libras: \n");
    scanf("%f",  &euro);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] euros ", euro);
        libraConvert = (euro * 0.8340);
    printf("\n\n%.2f euros são %.2f£ *", euro, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
    exit(0);
}
void convertLibraToDolar(){
    printf("Insira a quantia de libras que quer converter em dólares: \n");
    scanf("%f",  &libra);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] libras", libra);
        dolarConvert = (libra * 1.2961);
    printf("\n\n%.2f libras são %.2f$ *", libra, dolarConvert);
    printf("\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertLibraToReal(){
    printf("Insira a quantia de libras que quer converter em reais: \n");
    scanf("%f",  &libra);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] libras", libra);
        realConvert = (libra * 7.4019);
    printf("\n\n%.2f libras são %.2fR$ *", libra, realConvert);
    printf("\n*Valores atualizados do dia 29/10/2024, Terça-feira");
    exit(0);
}
void convertLibraToEuro(){
    printf("Insira a quantia de libras que quer converter em euros: \n");
    scanf("%f",  &libra);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] libras", libra);
        euroConvert = (libra * 1.1992);
    printf("\n\n%.2f libras são %.2f€ *", libra, euroConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
    exit(0);
}
void escolhaInicial(int inicialEsc){
    switch(inicialEsc) {
        case 1:
            menuFinanceiro();
            break;
        case 2:
            printf("Em desenvolvimento...");
            getch();
            printf("Encerrando o programa...");
            exit (0);
            break;
        case 3:
            printf("Em desenvolvimento...");
            getch();
            printf("Encerrando o programa...");
            exit (0);
            break;
        case 0 :
            printf("Encerrando o programa...");
            exit (0);
            break;
        default: 
            printf("OPÇÃO INVÁLIDA!!!!");
            printf("\nInsira Novamente!!!!");
            getch();
    }
}
void escolhaFinanceiro(int escolha) {
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
        case 13:
            menuInicial();
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
//saída da tela e pá//
 void menuInicial(){ 
    printf("Tela de Inicialização do programa em C");
    printf("\nEscolha uma opção a seguir:");
    printf("\nAperte qualquer tecla...\n");
    getch();
    printf("\n\n1 - Financeiro");
    printf("\n2 - Em desenvolvimento ");
    printf("\n3 - Em desenvolvimento ");
    printf("\n0 - Encerrar o programa \n");
    scanf("%i", &inicialEsc);
    escolhaInicial(inicialEsc);
 }

void menuFinanceiro() { 
    system("cls");
    printf("Seja bem-vindo ao programa de conversão de moedas Real/Dólar/Euro/Libra!!!");
    printf("\nEscolha uma opção a seguir:");
    printf("\nAperte qualquer tecla...\n");
    getch();
    printf("\n\n            1. Converter Dólar para Real");
    printf("\n            2. Converter Dólar para Euro");
    printf("\n            3. Converter Dólar para Libra");
    printf("\n            4. Converter Real para Dólar");
    printf("\n            5. Converter Real para Euro");
    printf("\n            6. Converter Real para Libra");
    printf("\n            7. Converter Euro para Dólar");
    printf("\n            8. Converter Euro para Real");
    printf("\n            9. Converter Euro para Libra");
    printf("\n           10. Converter Libra para Dólar");
    printf("\n           11. Converter Libra para Real");
    printf("\n           12. Converter Libra para Euro");
    printf("\n           13. Retornar ao menu inicial");
    printf("\n           0. Sair do Programa\n");
    scanf("%i", &escolha);
    escolhaFinanceiro(escolha);
}
//main executando tudo//
int main() {
    while(1) {
    menuInicial();
    } return 0;
}