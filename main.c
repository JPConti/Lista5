#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float quad(float a); // determina área quadrado
float quadP(float a); // determina perímetro quadrado

float retangulo(float a, float b); // determina área retangulo
float retanguloP(float a, float b); // determina perímetro retangulo

float triangulo3(float h, float b); // determina área triangulo equilatero
float triangulo3P(float h, float b); // determina perímetro triangulo equilatero

float triangulo4(float a); // determina área triangulo retangulo
float triangulo4P(float a); // determina perímetro triangulo retangulo

float losango(float h, float b); // determina área losango
float losangoP(float h, float b); // determina perímetro losango



int main(){

float a, b, h, x, y;
int op, i, k, j;

//Inicializa variáveis

a=0; // lados das figuras
b=0; // base das figuras
h=0; // altura das figuras
x=0; // área das figuras
y=0; // perímetro das figuras
op=0;// opcao a escolher

printf(" ###############################################\n");
printf(" ############### MENU DE OPCOES ################\n");
printf(" ###############################################\n");
printf(" ##                                           ##\n");
printf(" ## Escolha uma forma geometrica              ##\n");
printf(" ##                                           ##\n");
printf(" ## 1. Quadrado                               ##\n");
printf(" ## 2. Retangulo                              ##\n");
printf(" ## 3. Triangulo Equilatero                   ##\n");
printf(" ## 4. Triangulo Retangulo (catetos iguais)   ##\n");
printf(" ## 5. Losango                               ##\n");
printf(" ## 6. Sair                                   ##\n");
printf(" ##                                           ##\n");
printf(" ###############################################\n");
printf(" ###############################################\n");

printf("\n Digite a sua escolha: ");
scanf("%d", &op); // Lê qual opção do menu vai utilizar

switch(op){

    case 1:
        printf("\nInforme o valor do lado: ");
        scanf(" %f", &a);
            while (a <= 0){
            printf("\nValor invalido coloque um numero positivo\n");
            scanf("%f", &a);
        }
          for(int i = 0; i < a + 2; i++){
    printf("_");
  }
  printf("\n");
  for(int i = 0; i < a; i++){
    printf("|");
    for(int j = 0; j < a; j++){
      printf("@");
    }
    printf("|");
    printf("\n");
  }
  for(int i = 0; i < a + 2; i++){
    printf("_");
  }
        x=quad(a);
        y=quadP(a);
        printf("\nA area do quadrado: %f\n\n", x);
        printf("\nO perimetro do quadrado: %f\n\n", y);
    break;

    case 2:
        printf("\nInforme o valor da base: ");
        scanf("%f", &b);
            while (b <= 0){
            printf("\nValor invalido coloque um numero positivo\n");
            scanf("%f", &b);
        }
        printf("\nInforme o valor da altura: ");
        scanf("%f", &a);
            while (a <= 0){
            printf("\nValor invalido coloque um numero positivo\n");
            scanf("%f", &a);
        }
        for(int i = 0; i < a + b && i < b + 2; i++){
    printf("_");
  }
  printf("\n");
  for(int i = 0; i < a; i++){
    printf("|");
    for(int j = 0; j < b; j++){
      printf("@");
    }
    printf("|");
    printf("\n");
  }
  for(int i = 0; i < a + b && i < b + 2; i++){
    printf("_");
  }
        x=retangulo(a, b);
        y=retanguloP(a, b);
        printf("\nA area do retangulo: %f\n\n", x);
        printf("\nO perimetro do retangulo: %f\n\n", y);
    break;

    case 3:
        printf("Informe o valor da altura do triangulo: ");
        scanf("%f", &h);
            while (h <= 0){
            printf("\nValor invalido coloque um numero positivo\n");
            scanf("%f", &h);
        }       
        printf("Informe o valor da base do triangulo: ");
        scanf("%f", &b);
            while (b <= 0){
            printf("\nValor invalido coloque um numero positivo\n");
            scanf("%f", &b);
        }
         for(int i = 0; i < h; i++){
    for(int k = 0; k < b - i; k++){
      printf(" ");
    }
    for(int j = 0; j < i; j++){
      printf("@ ");
    }
    printf("\n");
  }
        x=triangulo3(h, b);
        y=triangulo3P(h, b);
        printf("\nA area do Triangulo Equilatero: %0.3f\n\n", x);
        printf("\nO perimetro do Triangulo Equilatero: %0.3f\n\n", y);
    break;

    case 4:
        printf("Informe o valor de um dos catetos do triangulo: ");
        scanf("%f", &a);
            while (a <= 0){
            printf("\nValor invalido coloque um numero positivo\n");
            scanf("%f", &a);
        }
        for(int i = 0; i < a; i++){
        for(int k = 0; k < a - i; k++){
    }
    for(int j = 0; j < i; j++){
      printf("@ ");
    }
    printf("\n");
  }
        x=triangulo4(a);
        y=triangulo4P(a);
        printf("\nA area do Triangulo Retangulo: %f\n\n", x);
        printf("\nO perimetro do Triangulo Retangulo: %f\n\n", y);
    break;

    case 5:
        printf("\nInforme o valor da base maior do losango\n");
        scanf(" %f", &h);
            while (h <= 0){
            printf("\nValor invalido coloque um numero positivo\n");
            scanf("%f", &h);
        }
        printf("\nInforme o valor da base menor do losango\n");
        scanf(" %f", &b);
            while (b <= 0){
            printf("\nValor invalido coloque um numero positivo\n");
            scanf("%f", &b);
        }
         for(int i = 0; i > h; i++){
    for(int k = 0; k > b - i; k++){
      printf(" ");
    }
    for(int j = 0; j > i; j++){
      printf("@ ");
    }
    printf("\n");
    }
        x=losango(h, b);
        y=losangoP(h, b);
        printf("\nA area do Losango: %f\n\n", x);
        printf("\nO perimetro do Losango: %f\n\n", y);
    break;

    case 6:

        return(0);

    break;

default:

printf(" **Opcao Invalida**\n\n ----> Digite uma opcao valida do menu\n\n\n");

}
return(main());

}

float quad(float a){

return(a*a);

}
float quadP(float a){

return(a*4);

}
float retangulo(float a, float b){

return(a*b);
}
float retanguloP(float a, float b){

return((a*2)+(b*2));
}
float triangulo3(float h, float b){
return( (h*b)/2);
}
float triangulo3P(float h, float b){
return(b*3);
}
float triangulo4(float a){
return( (a*a)/2);
}
float triangulo4P(float a){
return( (sqrt((a*a)*2))+(2*a) );
}
float losango(float h, float b){
return((h*b)/2);
}
float losangoP(float h, float b){
return( b*4 );
}