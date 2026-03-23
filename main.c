//Biblioteca
 #include <stdio.h>

//Variáveis



//Lógica de programação
 int main (void){

    int a = 10;
    int b = 8;
    int c = 4;
    float e = 2.5;
    //printf("Soma: %d\n", a + b);
    //printf("Subtracao: %d\n", a - b);
    //printf("Multiplicacao: %d\n", a * b);
    //printf("Divisao: %d\n", a / b);
    //printf("Resto: %d\n", a % b);
    
    printf("Exercicio_1: %d\n", (a+b) * c );
    //Primeiro ele soma "a + b" 
    //Depois Multiplica o resultado de "a + b" por c

    printf("Exercicio_2: %d\n", a / c);
    //Dividiu a por c
    //Se for um int, ele só printa do valor inteiro
    
    printf("Exercicio_3: %f\n", (float)a / c);
    //Dividiu a por e  
    //Se for um float, ele printa o valor com casas decimais

    printf("Exercicio_4: %d\n", a + b / c);
    //Primeiro ele dividi b por c
    //Depois soma o resultado da divisão com a

    printf("Exercicio_5: %d\n", a > c);
    //Se "a" é maior que "c", ele printa 1 por ser verdadeiro, caso seja falso, printa 0

    printf("Exercicio_6: %d\n", a == b);
    //Verifica se o "a" é igual a "c"

    printf("Exercicio_7: %d\n", (a + b) > (c * a));
    //Primeiro ele faz as contas "a + b" e "c * a"
    //Depois verifica se os resultado da conta "a + b" é maior que "c * a"

    printf("Exercicio_8: %f\n", (float)a / c + (a > b));
    //Primeiro ele realiza a conta "a / c" 
    //Depois verifica se "a" é amior que "b"
    //Após isso ele soma o resultado "a / c" que é 2.5 e soma com o valor de 1 que é verdadeiro para a comparação dos valores

    printf("Exercicio_9: %d\n", (a > e) * 10);
    //Primeiro ele verifica se "a" é maior que "e"
    //Depois multiplica o valor (0 ou 1) por 10

    printf("Exercicio_10: %d\n", (a + c) / (b + c));
    //Primeiro ele realiza as somas dos parenteses
    //Depois divide o resultado das somas

    printf("Exercicio_11: %f\n", (float)(a + b) / c + b);
    //Primeiro ele faz a soma dos parenteses
    //Depois divide o resultado por c
    //Por ultimo ele soma o resultado da divisão por b

    printf("Exercicio_12: %f\n", (float)a / e * c);
    //Primeiro ele divide o "a" por "e"
    //Depois multiplica o resultado da divisão

    printf("Exercicio_13: %f\n", (float)(a > e) + (c * a));
    //Primeiro ele realiza as expressões dos parenteses
    //Depois realiza a soma