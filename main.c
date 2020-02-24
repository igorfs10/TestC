#include<stdio.h> // Biblioteca padrão de entrada e saída de dados.
#include<stdint.h> // Biblioteca para usar variáveis numéricas com o tamanho exato dela. Ex: uint_8 para variável de 8 bits positiva
#include<stdbool.h> // Biblioteca para usar variáveis booleanas.
#include<string.h> // Biblioteca para manipular strings como contagem de caracteres e comparações.
#include<locale.h> // Biblioteca para usar e manipular caracteres UTF-8 e manipular datas de variás regiões

int main(){
    // Define o idioma da biblioteca locale para manipular os caracteres de diversas regioões
    setlocale(LC_ALL, "Portuguese_Brasil");

    // Podemos declarar variáveis ou funções como static para que ela fique em escopo de arquivo
    // ao invés de função ou global. O tamanho do vetor pode ser ou não definido na declaração.
    static uint8_t numeros[4] = {1, 2, 3, 4};
    uint8_t soma = numeros[0] + numeros[1] + numeros[2];
    bool condicao = true;

    //Use o sizeof do vetor dividivo pelo item para mostrar a quantidade de itens na array
    printf("O vetor tem %d itens.\n", sizeof(numeros)/sizeof(numeros[0]));

    /*  Em c a string é um vetor de char. O tamanho dela equivale a
        quantidade de caracteres mais o finalizador \0.
        Também pode ser declarado como ponteiro. Ex: char * texto = "condição";
        Obs: Não consegui concatenar com ponteiro.  */
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