//Paulo Cavalcante, Tentativa de criar qualquer coisa//
//mexendo pela 2ª vez, 29/10/2024, 02:55 da manhã//
//arrumando os limpar terminal aqui dia 16/11/2024, 05:23 da manhã. 1,2 e 3 criados e arrumados, cotacao do mesmo dia, calculadora apenas co 2 números e boletim com uma matéria//
//SANTOS FUTEBOL CLUBE//

//Bibliotecas//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//variáveis globais//
float real, dolar, euro, libra, realConvert, dolarConvert, euroConvert, libraConvert, celsius, fahrenheit, kelvin, celsiusConvert, fahrenheitConvert, kelvinConvert;
int escFinanceira, inicialEsc,escCalculadora, escTemperatura;
int soma, sub, multi,division, potencia, numero1, numero2, continuarOperacao, numeroProx, resultado, resto;
int fecharOuNao;
char nome[20];

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
void menuTemperatura();
void escolhaInicial(int inicialEsc);
void escolhaFinanceiro(int escFinanceira);
void escolhaCalculadora(int escCalculadora);
void escolhaTemperatura(int escTemperatura);
void convertCelsiusToFahrenheit();
void convertCelsiusToKelvin();
void convertFahrenheitToCelsius();
void convertFahrenheitToKelvin();
void convertKelvinToCelsius();
void convertKelvinToFahrenheit();
void funcionalidades();
void login();
void encerrarPrograma();
void limparTerminal();

//functions//
void limparTerminal(){
    system("cls");
    }

void encerrarPrograma(){
    printf("\nEncerrando o programa...");
    exit (0);
}

void login(){
    printf("\nSeja bem-vindo(a), qual o seu nome? \n");
    scanf("%s", nome);
}

void convertDolarToReal(){
    printf("Insira a quantia de dólares que quer converter em reais: \n");
    scanf("%f",  &dolar);
    limparTerminal();
    printf("Você inseriu a quantia de [%.2f] dólares", dolar);
    realConvert = (dolar * 5.7116);
    printf("\n\n%.2f dólares são %.2fR$ *;", dolar, realConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
}
void convertDolarToEuro(){
    printf("Insira a quantia de dólares que quer converter em euros: \n");
    scanf("%f",  &dolar);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] dólares", dolar);
        euroConvert = (dolar * 0.9252);
    printf("\n\n%.2f dólares são %.2f€ *", dolar, euroConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
}
void convertDolarToLibra(){
    printf("Insira a quantia de dólares que quer converter em libras esterlinas: \n");
    scanf("%f",  &dolar);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] dólares", dolar);
        libraConvert = (dolar * 0.7716);
    printf("\n\n%.2f dólares são %.2f£ libras *", dolar, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-Feira.\n\n");
}                                       
void convertRealToDolar(){
    printf("Insira a quantia de reais que quer converter em dólares: \n");
    scanf("%f",  &real);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] reais", real);
        dolarConvert = (real * 0.1751);
    printf("\n\n%.2f reais são %.2f$ *", real, dolarConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertRealToEuro(){
    printf("Insira a quantia de reais que quer converter em euros: \n");
    scanf("%f",  &real);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] reais", real);
        euroConvert = (real * 0.1620);
    printf("\n\n%.2f reais são %.2f€ *;", real, euroConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertRealToLibra(){
    printf("Insira a quantia de reais que quer converter em libras: \n");
    scanf("%f",  &real);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] reais", real);
        libraConvert = (real * 0.1351);
    printf("\n\n%.2f reais são %.2f£ *;", real, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertEuroToDolar(){
    printf("Insira a quantia de euros que quer converter em dólares: \n");
    scanf("%f",  &euro);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] euros ", euro);
        dolarConvert = (euro * 1.0807);
    printf("\n\n%.2f euros são %.2f$*", euro, dolarConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
    exit(0);
}
void convertEuroToReal(){
    printf("Insira a quantia de euros que quer converter em reais: \n");
    scanf("%f",  &euro);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] euros ", euro);
        realConvert = (euro * 6.1753);
    printf("\n\n%.2f euros são %.2fR$ *", euro, realConvert);
    printf("\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertEuroToLibra(){
    printf("Insira a quantia de euros que quer converter em libras: \n");
    scanf("%f",  &euro);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] euros ", euro);
        libraConvert = (euro * 0.8340);
    printf("\n\n%.2f euros são %.2f£ *", euro, libraConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertLibraToDolar(){
    printf("Insira a quantia de libras que quer converter em dólares: \n");
    scanf("%f",  &libra);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] libras", libra);
        dolarConvert = (libra * 1.2961);
    printf("\n\n%.2f libras são %.2f$ *", libra, dolarConvert);
    printf("\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertLibraToReal(){
    printf("Insira a quantia de libras que quer converter em reais: \n");
    scanf("%f",  &libra);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] libras", libra);
        realConvert = (libra * 7.4019);
    printf("\n\n%.2f libras são %.2fR$ *", libra, realConvert);
    printf("\n*Valores atualizados do dia 29/10/2024, Terça-feira");
}
void convertLibraToEuro(){
    printf("Insira a quantia de libras que quer converter em euros: \n");
    scanf("%f",  &libra);
    limparTerminal();
    printf("\nVocê inseriu a quantia de [%.2f] libras", libra);
        euroConvert = (libra * 1.1992);
    printf("\n\n%.2f libras são %.2f€ *", libra, euroConvert);
    printf("\n\n*Valores atualizados do dia 29/10/2024, Terça-feira");
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

void adicao(){
    limparTerminal();
    printf("Você selecionou a opção 1 - Soma");
    printf("\n\nInsira o primeiro número da soma: ");
    scanf("%d",  &numero1);
    printf("\nQuer somar quanto ao %d: ", numero1);
    scanf("%d",&numero2);
    soma = (numero1 + numero2);
    printf("\nO resultado da soma entre os dois números é: %d + %d = %d",numero1,numero2, soma);
    printf("\nResultado = %d\n", soma);
}
void subtracao(){
    limparTerminal();
    printf("Você selecionou a opção 2 - Subtração");
    printf("\n\nInsira o primeiro número da operação: ");
    scanf("%d",  &numero1);
    printf("\nSubtrair quanto de %d: ", numero1);
    scanf("%d",&numero2);
    sub = (numero1 - numero2);
    printf("\nO resultado da subtração é: %d - %d = %d",numero1,numero2, sub);
    printf("\nResultado = %d\n", sub);
}
void multiplication(){
    limparTerminal();
    printf("Você selecionou a opção 3 - Multiplicação");
    printf("\n\nInsira o primeiro número que quer multiplicar: ");
    scanf("%d",  &numero1);
    printf("\nMultiplicar %d por qual número: ", numero1);
    scanf("%d",&numero2);
    multi = (numero1 * numero2);
    printf("\nA multiplicação é: %d x %d = %d",numero1,numero2, multi);
    printf("\nResultado = %d\n", multi);
}
void divisao(){
    limparTerminal();
    printf("Você selecionou a opção 4 - Divisão");
    printf("\n\nInsira o primeiro número da divisão: ");
    scanf("%d",  &numero1);
    printf("\nDividir %d por qual número: ", numero1);
    scanf("%d",&numero2);
    division = (numero1 / numero2);
    resto = (numero1 % numero2);
    printf("\nO resultado da divisão é: %d / %d = %d, e o resto %d\n",numero1,numero2, division, resto);
}
void potenciaDois(){
    limparTerminal();
    printf("Você selecionou a opção 5 - Potência de base²");
    printf("\nInsira o número que quer elevar na potência de base²: \n");
    scanf("%d",  &numero1);
    potencia = (numero1 * numero1);
    printf("O número %d ao quadrado é: %d\n",numero1, potencia);
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

void convertCelsiusToFahrenheit(){
    printf("Qual  Temperatura  °C, você deseja converter a  °F\n");
    scanf("%f", &celsius);
    limparTerminal();
    fahrenheitConvert = ((celsius * 1.8)+32);
    printf("%.1f graus Celsius em Fahrenheit é igual a %.1f°F", celsius, fahrenheitConvert);
}
void convertCelsiusToKelvin(){
    printf("Qual  Temperatura  °C, você deseja converter a  °K\n");
    scanf("%f", &celsius);
    limparTerminal();
    kelvinConvert = (celsius + 273.15);
    printf("%.1f graus Celsius em Fahrenheit é igual a %.2f°K", celsius, kelvinConvert);
}
void convertFahrenheitToCelsius(){
    printf("Qual  Temperatura  °F, você deseja converter a  °C\n");
    scanf("%f", &fahrenheit);
    limparTerminal();
    celsiusConvert = ((fahrenheit-32) / 1.8);
    printf("%.1f graus Fahrenheit em Celsius é igual a %.1f°C", fahrenheit, celsiusConvert);
}
void convertFahrenheitToKelvin(){
    printf("Qual  Temperatura  °F, você deseja converter a  °K\n");
    scanf("%f", &fahrenheit);
    limparTerminal();
    kelvinConvert = ((fahrenheit + 459.67) * 5/9);
    printf("%.2f graus Fahrenheit em Kelvin é igual a %.2f°C", fahrenheit, kelvinConvert);
}
void convertKelvinToCelsius(){

}
void convertKelvinToFahrenheit(){

}

void escolhaCalculadora(int escCalculadora){
    switch(escCalculadora){
        case 1:
            adicao();
            encerrarPrograma();
        case 2:
            subtracao();
            encerrarPrograma();
        case 3:
            multiplication();
            encerrarPrograma();
        case 4:
            divisao();
            encerrarPrograma();
        case 5: 
            potenciaDois();
            encerrarPrograma();
        case 6:
            limparTerminal();
            printf("Você selecionou a opção 6 - Retornar à tela inicial.");
            printf("\nVocê retornou ao menu das funcionalidades do programa.");
            funcionalidades();
            break;
        case 0:
            limparTerminal();
            printf("Você selecionou a opção 0 - Encerrar o programa.");
            encerrarPrograma();
    }
}
void escolhaInicial(int inicialEsc){
    switch(inicialEsc) {
        case 1:
            menuFinanceiro();
            encerrarPrograma();
        case 2:
            menuCalculadora();
            encerrarPrograma();
        case 3:
            boletim();
            encerrarPrograma();
        case 4:
           menuTemperatura();
            encerrarPrograma();
        case 5: 
            printf("Em desenvolvimento...");
            encerrarPrograma();
        case 0 :
            limparTerminal();
            printf("Você selecionou a opção 0 - Encerrar o programa.");
            encerrarPrograma();
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
            encerrarPrograma();
        case 2:
            convertDolarToEuro();
            encerrarPrograma();
        case 3:
            convertDolarToLibra();
            encerrarPrograma();
        case 4 : 
            convertRealToDolar();
            encerrarPrograma();
        case 5:
            convertRealToEuro();
            encerrarPrograma();
        case 6:
            convertRealToLibra();
            encerrarPrograma();
        case 7:
            convertEuroToDolar();
            encerrarPrograma();
        case 8:
            convertEuroToReal();
             encerrarPrograma();
        case 9:
            convertEuroToLibra();
             encerrarPrograma();
        case 10:
            convertLibraToDolar();
            encerrarPrograma();
        case 11:
            convertLibraToReal();
            encerrarPrograma();
        case 12:
            convertLibraToEuro();
            encerrarPrograma();
        case 13:
            limparTerminal();
            printf("Você selecionou a opção 6 - Retornar à tela inicial.");
            printf("\nVocê retornou ao menu das funcionalidades do programa.");
            funcionalidades();
            break;
        case 0 :
            limparTerminal();
            printf("Você selecionou a opção 0 - Encerrar o programa.");
            encerrarPrograma();
    default: 
        printf("OPÇÃO INVÁLIDA!!!!");
        printf("\nInsira Novamente!!!!");
        getch();
    }
    }
void escolhaTemperatura(int escTemperatura){
    switch(escTemperatura){
            case 1:
        convertCelsiusToFahrenheit();
        encerrarPrograma();
            case 2:
        convertCelsiusToKelvin();
        encerrarPrograma();
            case 3:
        convertFahrenheitToCelsius();
        encerrarPrograma();
            case 4:
        convertFahrenheitToKelvin();
        encerrarPrograma();
            case 5:
        convertKelvinToCelsius();
        encerrarPrograma();
            case 6:
        convertKelvinToFahrenheit();
        encerrarPrograma();
            case 7:
        limparTerminal();
        printf("Você selecionou a opção 6 - Retornar à tela inicial.");
        printf("\nVocê retornou ao menu das funcionalidades do programa.");
        funcionalidades();
        break;
            case 0:
        limparTerminal();
        printf("Você selecionou a opção 0 - Encerrar o programa.");
        encerrarPrograma();
    }
}
//saída da tela e pá//
 void menuInicial(){ 
    limparTerminal();
    printf("Tela de Inicialização do programa em C :]");
    login();
    printf("\n%s, escolha uma opção a seguir: ", nome);
    printf("\nAperte qualquer tecla...\n");
    getch();
    funcionalidades();
 }

void funcionalidades(){
    printf("\n\n            1 - Financeiro ");
    printf("\n            2 - Calculadora simples ");
    printf("\n            3 - Boletim com média e faltas ");
    printf("\n            4 - Conversor de Temperatura ");
    printf("\n            5 - Em desenvolvimento ");
    printf("\n            0 - Encerrar o programa \n");
    scanf("%i", &inicialEsc);
    escolhaInicial(inicialEsc);
 }

void menuFinanceiro() { 
    limparTerminal();
    printf("\nVocê selecionou a opção 1 - Financeiro:");
    printf("\n%s, seja bem-vindo(a) ao programa de conversão de moedas Real/Dólar/Euro/Libra!!!",nome);
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
    limparTerminal();
    printf("\nVocê selecionou a opção 2 - Calculadora simples:");
    printf("\n%s, seja bem-vindo(a) a calculadora!!!", nome);
    printf("\nQual operação deseja efetuar: ");
    printf("\nAperte qualquer tecla...\n");
    getch();
    printf("\n\n            1. Soma");
    printf("\n            2. Subtração");
    printf("\n            3. Multiplicação");
    printf("\n            4. Divisão");
    printf("\n            5. Potência na base²");
    printf("\n            6. Retornar ao menu inicial.");
    printf("\n            0. Sair do Programa.\n");
    scanf("%i", &escCalculadora);
    escolhaCalculadora(escCalculadora);
}

void boletim(){
    float nota1, nota2, trabalho, media,aMais, faltouA, faltouIfa; 
    int faltas, restantes, ifa, aprovado;
    aprovado = 6;
    ifa = 4;

    limparTerminal();
    printf("\nVocê selecionou a opção 3 - Boletim com média e faltas:");
    printf("Ver se aluno x foi aprovado por média e faltas");
    getch();
        printf("\nQual o número de faltas no semestre: \n");
        while(1){
        scanf("%i", &faltas);
        if(faltas >0 && faltas <95){
            printf("Número de faltas no semestre: %d", faltas);
            break;
        } else{
            printf("Número de faltas inválidos");
            printf("\n\nInsira a quantidade de faltas novamente: \n");
        }
    } restantes = (23 - faltas);
       printf("\n\nInsira a Nota da Prova 1: ");
       while(1){
        scanf("%f", &nota1); 
            if(nota1 >=0 && nota1<=10){
                printf("Nota válida!!!");
                printf("\n\nProva 1: %.2f", nota1);
                break;
        } else{
            printf("\nNOTA INVÁLIDA!!!");
            printf("\n\nInsira a Nota da Prova 1 novamente: \n");
        }
       }
        printf("\n\nInsira a Nota da Prova 2: ");
    while(1){
        scanf("%f", &nota2);
        if(nota2 >=0 && nota2 >=0){
            printf("Nota válida!!!");
            printf("\n\nProva 2: %.2f", nota2);
            break;
    } else {
        printf("\nNOTA INVÁLIDA!!!");
        printf("\n\nInsira a nota da Prova 2 novamente: \n");
        }
    }
        printf("\n\nInsira a Nota do Trabalho Final: ");
        while(1){
        scanf("%f", &trabalho);
            if(trabalho >=0 && trabalho>=0){
            printf("Nota válida!!!");
            printf("\n\nTrabalho Final: %.2f", trabalho);
            break;
        } else{
            printf("\nNOTA INVÁLIDA!!!");
            printf("\n\nInsira a nota do trabalho novamente: \n");
            }
        }
        media = ((nota1 + nota2 + trabalho) / 3 );
            printf("\n\nMédia do Semestre: N1: %.2f, N2: %.2f, T: %.2f / 3 = %.2f", nota1, nota2, trabalho, media);
        faltouA = (aprovado - media);
        faltouIfa = (ifa - media);
        aMais = (media - aprovado);

            if(faltas>23 && faltas<=95){
                printf("\nREPROVADO com %i faltas!!!", faltas);
            }
            else if (faltas<=23 && faltas>=0){
                if(media >= 6 && media <=10){
                printf("\n\nParabéns, aprovado com média %.2f!!!", media);
                printf("\nVocê conseguiu %.2f pontos a mais do que a média necessária para passar!!", aMais);
                printf("\nVocê ficou com %d faltas para gastar!!!", restantes);
            }
            else if(media <6 && media>=4) {
                printf("\n\nVocê está no IFA, não conseguiu média 6 ou superior!!!");
                printf("\nPara passar direto você precisava de mais %.2f pontos!!", faltouA);
            }
            else if(media<4 && media>=0){
                printf("\n\nREPROVADO por nota abaixo de 4!!!");
                printf("\nPara passar direto você precisava de mais %.2f pontos!!", faltouA);
                printf("\nFaltaram %.2f pontos para ir ao IFA!!!",faltouIfa);
            }
    }
    else{
        printf("\nNúmero de faltas Inválido!!!");
    }  
    getch();
    encerrarPrograma();
}

void menuTemperatura(){
    limparTerminal();
    printf("\nVocê selecionou a opção 4 - Conversor de Temperatura: ");
    printf("\n%s, seja bem-vindo(a) ao programa de conversão de Temperatura Celsius/Fahrenheit/Kelvin!!!",nome);
    printf("\nEscolha uma opção a seguir:");
    printf("\nAperte qualquer tecla...\n");
    getch();
    printf("\n            1. Converter Celsius para Fahrenheit");
    printf("\n            2. Converter Celsius para Kelvin");
    printf("\n            3. Converter Fahrenheit para Celsius");
    printf("\n            4. Converter Fahrenheit para Kelvin");
    printf("\n            5. Converter Kelvin para Celsius");
    printf("\n            6. Converter Kelvin para Fahrenheit");
    printf("\n            7. Retornar ao menu inicial");
    printf("\n            0. Sair do Programa\n");
    scanf("%i", &escTemperatura);
    escolhaTemperatura(escTemperatura);
}
//main executando tudo//
int main() {
    while(1) {
    menuInicial();
    } 
    return 0;
}