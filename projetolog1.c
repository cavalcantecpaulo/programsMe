//..//
//Paulo Cavalcante Caroba - SP3156371//

/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

/*Constantes*/
#define maxAtletismo 183
#define maxNatacao 122 
#define maxRugby 74  
#define maxJudo 41  

//Variáveis Globais//
int dia, mes, ano, diasnoMes;

//Protótipos de funções//
char* diadasemana(int dia, int mes, int ano);
int anoBissexto(int ano);
void ajustarData(int *dia, int *mes, int *ano, int intervalo);
int verifdiaMes(int dia, int mes, int ano);
int digitDia();
int digitMes();
int digitAno();
void digitarData();
void loopdata();
void verificarData();
void datasTreinos();
void datasComuns();

char* diadasemana(int dia, int mes, int ano) {
    static char diaSemana[14];
    struct tm data = {0};
    data.tm_mday = dia;
    data.tm_mon = mes - 1;
    data.tm_year = ano - 1900;
    mktime(&data);
    int dia_da_semana = data.tm_wday;

    char *diaEscrito[] = {
    "Domingo", "Segunda-feira", "Terca-feira", "Quarta-Feira", "Quinta-feira", "Sexta-feira", "Sabado"
    };

    if (dia_da_semana >= 0 && dia_da_semana <= 6) {
        snprintf (diaSemana, sizeof(diaSemana), "%s", diaEscrito[dia_da_semana]);
        return diaSemana;
    } else {
    return ("erro");
    }   
}
int anoBissexto(int ano) {
    return (ano %4 == 0 && ano % 100 != 0) || (ano %400 == 0);
    }
void ajustarData(int *dia, int *mes, int *ano, int intervalo) { //ajustar meses//
        *dia += intervalo;
    
    while (*dia > 28) {
    if (*mes == 2) {diasnoMes = anoBissexto(*ano) ? 29 : 28;
    } else if (*mes == 4 || *mes == 6 || *mes == 9 || *mes == 11) { diasnoMes = 30;
    } else {diasnoMes = 31;
     } 
    if (*dia > diasnoMes) {
            *dia -= diasnoMes; (*mes)++;
    if (*mes > 12) { *mes = 1; (*ano)++; //no limite de dias, ele avança ao próximo mês, e no limite de meses ele avança o ano.//
            }
        } else {
            break;
        }
    }
}
int verifdiaMes(int dia, int mes, int ano) {
    if (mes == 2) {
        diasnoMes = anoBissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes==6 || mes==9 || mes == 11){   
        diasnoMes = 30;
    } else if (mes >= 1 && mes <= 12) {
        diasnoMes = 31;
    } else {
    return 1;
    }
    return (dia < 1 || dia > diasnoMes);
}
  int digitDia(){
        while(1){
        printf ("\nDigite um dia de 1 a 31: ");
        fflush(stdin); scanf ( "%i", &dia );
    if ( dia>=1 && dia<=31 ) {
        return 0;
    }
 }
}
int digitMes() {
        while(1){
        system("cls");
        printf("%.2i/ \b", dia);
        printf ("\n\nDigite um mês: "); 
        scanf ( "%i", &mes );
    if ( mes >= 1 && mes<=12 ) {
        return 0;
    }
    }
}
int digitAno(){
    while(1){
        system("cls");
        printf("%.2i/%.2i/ \b", dia,mes);
        printf ("\n\nDigite um ano de 1900 a 2100: "); 
        scanf ( "%i", &ano );
    if ( ano>=1900 && ano<=2100 ) {
        return 0;  
    }
    }
}
void digitarData() {
    digitDia(); digitMes(); digitAno();
}
void loopdata(){
    while (verifdiaMes(dia, mes, ano) != 0 || (dia == 29 && mes==2 && !anoBissexto(ano))) {
         if (dia == 29 && mes == 2 && !anoBissexto(ano)) {
                printf("\nESSE ANO NÃO É BISSEXTO, INSIRA NOVAMENTE!\n");
            } else {
                printf("\nDATA INVÁLIDA!!!\n");
            } 
            digitarData();
            }
        }
void verificarData(){
    do {
        printf("Seja bem-vindo ao programa de verificação de datas!");
        digitarData();
        loopdata();
    } while (dia == 29 && mes == 2 && !anoBissexto(ano));
    system("cls"); 
    printf("Data Fornecida: %02i/%02i/%04i", dia, mes, ano);
}
void datasTreinos(){
    FILE *arquivo = fopen("datastreinos.txt", "w");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo!");
        return;
    }
    fprintf (arquivo,"Data Fornecida: %02i/%02i/%04i; ", dia, mes, ano);
    fprintf(arquivo, "\nOs esportes Atletismo, Natação, Rugby e Judô serão praticados no clube nas seguintes datas: ");
    fprintf(arquivo, "\n\n-----------------------------------------------------------------------------------------------------------------------\n");
    fprintf(arquivo, "|         ATLETISMO         ||           NATAÇÃO          ||           RUGBY            ||            JUDÔ            |\n");
    fprintf(arquivo, "|         (2 dias)          ||          (3 dias)          ||          (5 dias)          ||          (9 dias)          |\n");
    fprintf(arquivo, "-----------------------------------------------------------------------------------------------------------------------\n");
    
    int diaAtletismo = dia, mesAtletismo = mes, anoAtletismo = ano;
    int diaNatacao = dia, mesNatacao = mes, anoNatacao = ano;
    int diaRugby = dia, mesRugby = mes, anoRugby = ano;	//divisão de datas uma por uma para não haver problema//
    int diaJudo = dia, mesJudo = mes, anoJudo = ano;  	//na execução do código pra não afetar datas//
    
    for (int i = 0; i < maxAtletismo || i<maxNatacao || i <maxRugby || i <maxJudo; i++) {
    if (i < maxAtletismo) {
            fprintf(arquivo, " %02i/%02i/%04i - %-13s || ", diaAtletismo, mesAtletismo, anoAtletismo, diadasemana(diaAtletismo, mesAtletismo, anoAtletismo));
            ajustarData ( &diaAtletismo, &mesAtletismo, &anoAtletismo, 2);
        } else {
        fprintf(arquivo, "                    ");
        }
    if (i < maxNatacao) {   
            fprintf(arquivo, "%02i/%02i/%04i - %-13s || ", diaNatacao, mesNatacao, anoNatacao, diadasemana(diaNatacao, mesNatacao, anoNatacao));
            ajustarData (&diaNatacao, &mesNatacao, &anoNatacao, 3);
        } else {
        fprintf(arquivo, "                    ");
        }
    if (i < maxRugby) {
            fprintf(arquivo, "%02i/%02i/%04i - %-13s || ", diaRugby, mesRugby, anoRugby, diadasemana(diaRugby, mesRugby, anoRugby));
            ajustarData (&diaRugby, &mesRugby, &anoRugby, 5);
        } else {
        fprintf(arquivo, "                    ");
        }
    if (i < maxJudo) {
            fprintf(arquivo, "%02i/%02i/%04i - %-13s |\n", diaJudo, mesJudo, anoJudo, diadasemana(diaJudo, mesJudo, anoJudo));
            ajustarData (&diaJudo, &mesJudo, &anoJudo, 9);
        } else {
        fprintf(arquivo, "\n");
        }
    }
    fclose(arquivo);    printf("\n\nArquivo 'datastreinos.txt' gerado com sucesso! Obrigado!");
}
void datasComuns() {
    int diasPassados = 0;
    int aumenta = 90;
    int diaComum = dia, mesComum = mes, anoComum = ano;

    FILE *arquivo = fopen("datascomuns.txt", "w");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo!");
        return;
    }
    fprintf(arquivo, "Data Fornecida: %02i/%02i/%04i; ", dia, mes, ano);
    fprintf(arquivo, "\nOs esportes Atletismo, Natação, Rugby e Judô serão praticados juntos nas seguintes datas: ");
    fprintf(arquivo, "\n\n--------------------------------------------------------------------------------------------------------------------");
    fprintf(arquivo, "\n|                                    Os 4 esportes se encontram a cada %i dias                                     |", aumenta);
    fprintf(arquivo, "\n--------------------------------------------------------------------------------------------------------------------\n");
   
    while (diasPassados<=365) {
        fprintf(arquivo, "| %02i/%02i/%04i - %-13s                                                                                       |\n",
                    diaComum, mesComum, anoComum, diadasemana(diaComum, mesComum, anoComum));
        ajustarData(&diaComum, &mesComum, &anoComum, aumenta);
        diasPassados+=aumenta;
    }
    fprintf(arquivo, "--------------------------------------------------------------------------------------------------------------------\n");
    fclose(arquivo);   printf("\n\nArquivo 'datascomuns.txt' gerado com sucesso! Obrigado!");
} 
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    verificarData();
    datasTreinos();
    datasComuns();
    return 10;
}