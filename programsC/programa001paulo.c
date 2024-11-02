//Paulo Cavalcante, Tentativa de criar qualquer coisa//
//mexendo pela 2ª vez, 29/10/2024, 02:55 da manhã//
//SANTOS FUTEBOL CLUBE//

//Bibliotecas//
#include<stdio.h>
#include<stdlib.h>

//variáveis globais//
float real, dolar, euro, libra, realConvert, dolarConvert, euroConvert, libraConvert;
int escFinanceira, inicialEsc,escCalculadora;
int soma, sub, multi,division, numero1, numero2, continuarOperacao, numeroProx, resultado, resto;
int fecharOuNao;
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
void menuCalculadora();
void escolhaInicial(int inicialEsc);
void escolhaFinanceiro(int escFinanceira);
void escolhaCalculadora(int escCalculadora);
void funcionalidades();

//functions//
void convertDolarToReal(){
    printf("Insira a quantia de dólares que quer converter em reais: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("Você inseriu a quantia de [%.2f] dólares", dolar);
    realConvert = (dolar * 5.7116);
    printf("\n\n%.2f dólares são %.2fR$ *;", dolar, realConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
}
void convertDolarToEuro(){
    printf("Insira a quantia de dólares que quer converter em euros: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] dólares", dolar);
        euroConvert = (dolar * 0.9252);
    printf("\n\n%.2f dólares são %.2f€ *", dolar, euroConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
}
void convertDolarToLibra(){
    printf("Insira a quantia de dólares que quer converter em libras esterlinas: \n");
    scanf("%f",  &dolar);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] dólares", dolar);
        libraConvert = (dolar * 0.7716);
    printf("\n\n%.2f dólares são %.2f£ libras *", dolar, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
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
}
void convertRealToLibra(){
    printf("Insira a quantia de reais que quer converter em libras: \n");
    scanf("%f",  &real);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] reais", real);
        libraConvert = (real * 0.1351);
    printf("\n\n%.2f reais são %.2f£ *;", real, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
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
}
void convertEuroToLibra(){
    printf("Insira a quantia de euros que quer converter em libras: \n");
    scanf("%f",  &euro);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] euros ", euro);
        libraConvert = (euro * 0.8340);
    printf("\n\n%.2f euros são %.2f£ *", euro, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
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
}
void convertLibraToEuro(){
    printf("Insira a quantia de libras que quer converter em euros: \n");
    scanf("%f",  &libra);
    system("cls");
    printf("\nVocê inseriu a quantia de [%.2f] libras", libra);
        euroConvert = (libra * 1.1992);
    printf("\n\n%.2f libras são %.2f€ *", libra, euroConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}

void adicao(){
    printf("Insira o primeiro número da operação: \n");
    scanf("%d",  &numero1);
    printf("\nInsira o segundo número que quer somar: ");
    scanf("%d",&numero2);
    soma = (numero1 + numero2);
    printf("O resultado da soma entre os dois números é: %d\n", soma);
}
   /*// Preciso adicionar depois//
    while(0){
        printf("\nQuer inserir mais um número? \n");
        scanf("%i", &continuarOperacao);
        if(continuarOperacao == 'n' || continuarOperacao == 'N'){
            break;
        }
    }
    if (continuarOperacao == 'S' && continuarOperacao == 's'){
        printf("Insira o próximo número: ");
        scanf("%d", &numeroProx);
        resultado = (soma + numeroProx);
         printf("O resultado mais o número adicionado é: %d\n", resultado);
    }
    printf("Quer inserir mais um número? \n"); printf("\nQuer inserir mais um número? \n");*/

void subtracao(){
    printf("Insira o primeiro número da operação: \n");
    scanf("%d",  &numero1);
    printf("\nInsira o segundo número da operação: \n");
    scanf("%d",&numero2);
    sub = (numero1 - numero2);
    printf("O resultado da subtracão é: %d - %d = %d\n",numero1,numero2, sub);
}
void multiplication(){
    printf("Insira o primeiro número da operação: \n");
    scanf("%d",  &numero1);
    printf("\nInsira o segundo número da operação: \n");
    scanf("%d",&numero2);
    multi = (numero1 * numero2);
    printf("O resultado da multiplicação é: %d x %d = %d",numero1,numero2, multi);
}
void divisao(){
    printf("Insira o primeiro número da operação: \n");
    scanf("%d",  &numero1);
    printf("\nInsira o segundo número da operação: \n");
    scanf("%d",&numero2);
    division = (numero1 / numero2);
    resto = (numero1 % numero2);
    printf("O resultado da divisão é: %d / %d = %d, resto %d\n",numero1,numero2, division, resto);
}
/*void endOrNo(int fecharOuNao){
            printf("\nQuer retornar ao menu inicial ou encerrar o programa?");
            printf("\nR para retornar ou E para encerrar\n");
            scanf("%i", &fecharOuNao);
            if ( fecharOuNao == 'R' ||  fecharOuNao== 'r') {
                    funcionalidades();
            }
            else if ( fecharOuNao == 'E' ||  fecharOuNao == 'e') {
                    printf("Você selecionou encerrar!");
                    printf("Encerrando o progarma...");
            } exit(0);
}*/
void escolhaCalculadora(int escCalculadora){
    switch(escCalculadora){
        case 1:
            adicao();
            exit(0);
        case 2:
            subtracao();
            exit(0);
        case 3:
            multiplication();
            exit(0);
        case 4:
            divisao();
            exit(0);
        case 5:
            system("cls");
            printf("Você retornou ao menu das funcionalidades do programa");
            funcionalidades();
            break;
        case 0:
            printf("Encerrando o programa...");
            exit(0);
            break;
    }
}
void escolhaInicial(int inicialEsc){
    switch(inicialEsc) {
        case 1:
            menuFinanceiro();
            break;
        case 2:
            menuCalculadora();
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
void escolhaFinanceiro(int escFinanceira) {
    switch (escFinanceira) {
        case 1 :
            convertDolarToReal();
            exit(0);
    	    break;
        case 2:
            convertDolarToEuro();
            exit(0);
            break;
        case 3:
            convertDolarToLibra();
            exit(0);
            break;
        case 4 : 
            convertRealToDolar();
            exit(0);
            break;
        case 5:
            convertRealToEuro();
            exit(0);
            break;
        case 6:
            convertRealToLibra();
            exit(0);
            break;
        case 7:
            convertEuroToDolar();
            exit(0);
            break;
        case 8:
            convertEuroToReal();
             exit(0);
            break;
        case 9:
            convertEuroToLibra();
             exit(0);
            break;
        case 10:
            convertLibraToDolar();
            exit(0);
            break;
        case 11:
            convertLibraToReal();
            exit(0);
            break;
        case 12:
            convertLibraToEuro();
            exit(0);
            break;
        case 13:
            funcionalidades();
            exit(0);
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
    funcionalidades();
 }
void funcionalidades(){
    printf("\n\n            1 - Financeiro ");
    printf("\n            2 - Calculadora simples ");
    printf("\n            3 - Em desenvolvimento ");
    printf("\n            0 - Encerrar o programa \n");
    scanf("%i", &inicialEsc);
    escolhaInicial(inicialEsc);
 }

void menuFinanceiro() { 
    system("cls");
    printf("Seja bem-vindo(a) ao programa de conversão de moedas Real/Dólar/Euro/Libra!!!");
    printf("\nEscolha uma opção a seguir:");
    printf("\nAperte qualquer tecla...\n");
    getch();
    printf("\n            1. Converter Dólar para Real");
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
    scanf("%i", &escFinanceira);
    escolhaFinanceiro(escFinanceira);
}

void menuCalculadora(){
    system("cls");
    printf("Seja bem-vindo(a) a calculadora!!!");
    printf("\nQual operação deseja efetuar: ");
    printf("\nAperte qualquer tecla...\n");
    getch();
    printf("\n\n            1. Soma");
    printf("\n            2. Subtração");
    printf("\n            3. Multiplicação");
    printf("\n            4. Divisão");
    printf("\n            5. Retornar ao menu inicial.");
    printf("\n            0. Sair do Programa.\n");
    scanf("%i", &escCalculadora);
    escolhaCalculadora(escCalculadora);
}
//main executando tudo//
int main() {
    while(1){
    menuInicial();
    } 
    return 0;
}