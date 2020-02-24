#include<stdio.h> // Biblioteca padrão de entrada e saída de dados
#include<stdint.h> // Biblioteca para usar variáveis numéricas com o tamanho exato dela. Ex: uint_8 para variável de 8 bits positiva
#include<stdbool.h> // Biblioteca para usar variáveis booleanas

int main(){
    uint8_t numeros[3];
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    uint8_t soma = numeros[0] + numeros[1] + numeros[2];
    bool condicao = true;
    
    if(condicao){
        printf("Se a condição for verdadeira mostre a soma %d\n", soma);
    }else{
        printf("Se a condição for falsa mostra o primeiro número %d\n", numeros[0]);
    }

    return 0;
}