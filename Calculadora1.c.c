#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double potencia(double a1, double a2){
     return pow(a1, a2);
}
double raiz(double a1){
   return sqrt(a1);
}
double multiplicacao (double a1, double a2){
   return a1*a2;
}
double divisao(double a1, double a2){
  return a1/a2;
}
double soma(double a1, double a2){
  return a1+a2;
}
double subtrair(double a1, double a2){
  return a1-a2;
}
int main(){
    double a, b;
    int usuario;
    printf("Bem vindo(a) a calculadora!!!\nqual o tipo de operacao voce deseja fazer ?");
    printf("\n1)potenciacao\n2)radiciacao\n3)multiplicacao\n4)divisao\n5)soma\n6)subtracao\n");
    scanf("%d", &usuario);
    if(usuario==1 || usuario==3 || usuario==4 || usuario==4 || usuario==5 || usuario==6){
      printf("a:");
      scanf("%lf", &a);
      printf("b; ");
      scanf("%lf", &b);
      if (usuario==1){
        printf("%.1lf^%.1lf=%.1lf", a, b, potencia(a, b));
      }
      if (usuario==3){
        printf("%.1lf*%.1lf=%.1lf", a, b, multiplicacao(a, b));
      }
      if(usuario==4){
        printf("%.1lf/%.1lf=%.1lf", a, b, divisao(a, b));
      }
      if(usuario==5){
        printf("%.1lf+%.1lf=%.1lf", a, b, soma(a, b));
      }
      if(usuario==6){
        printf("%.1lf-%.1lf=%.1lf", a, b, subtrair(a, b));
      }
    }
    if(usuario==2){
      printf("a:");
      scanf("%lf", &a);
      printf("a raiz quadrada de %.1lf e %.1lf", a, raiz(a));
    }
}