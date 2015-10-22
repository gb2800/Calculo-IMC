#include <stdio.h>

int main (){
    float peso;
    float altura;
    float imc;
    
    printf("Digite o seu peso:");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    imc=peso / (altura*altura);
    
    if (imc<19){
        printf("Voce esta magro(a), e seu imc e: %0.0f",imc);
    }
    else if (imc<=25){
        printf("Voce esta em seu peso ideal, e seu imc e: %0.0f",imc);
    }
    else if (imc<=31){
        printf("Voce esta acima do seu peso, e seu imc e: %0.0f",imc);
    }
    else{
        printf("Voce esta obeso, e seu imc e: %0.0f",imc);
    }
    
    return 0;
}