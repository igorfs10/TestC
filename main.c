#include<stdio.h> // Biblioteca padrão de entrada e saída de dados.
#include<stdint.h> // Biblioteca para usar variáveis numéricas com o tamanho exato dela. Ex: uint_8 para variável de 8 bits positiva
#include<stdbool.h> // Biblioteca para usar variáveis booleanas.
#include<string.h> // Biblioteca para manipular strings como contagem de caracteres e comparações.

int main(){
    // Podemos declarar variáveis ou funções como static para que ela fique em escopo de arquivo
    // ao invés de função ou global
    static uint8_t numeros[3] = {1, 2, 3};
    uint8_t soma = numeros[0] + numeros[1] + numeros[2];
    bool condicao = true;

    /*  Em c a string é um vetor de char. O tamanho dela equivale a
        quantidade de caracteres mais o finalizador \0.  */
    char texto[] = "condição";
    
    if(condicao){
        /*  Se verdadeiro imprime o texto substituindo % pelo tipo definido
            na string e o valor correspondente no parâmetro na ordem. \n é nova linha. */
        printf("Se a %s for verdadeira mostre a soma %d\n", texto, soma);
        
        /*  A função strncmp compara duas strings e recebe como parâmetro
            duas strings mais a quantidades de caracteres,
            se forem iguais ele retorna 0, caso contrário retorna outro número.
            Strlen mostra a quantidade de caracteres em uma string, sem o finalizador. */
        if(strncmp(texto, "condição515", strlen(texto)) == 0){
            printf("A string tem: %d caracteres \n", strlen(texto));
        }

        /*  A função de concatenar string recebe 3 parâmetros,
            a primeira variável vai receber o texto para concatenar,
            a segunda vai ser o texto adicionado e o terceiro é a quantidade
            de caracteres da segunda variável que vai ser adicionada à primeira.    */
        if(1){
            char ola[] = "Olá ";
            char mundo[] = "Mundo";
            strncat(ola, "mundo", strlen(mundo)-1);
            printf("%s\n", ola);
        }
    }else{
        printf("Se a %s for falsa mostra o primeiro número %d\n", texto, numeros[0]);
    }

    return 0;
}