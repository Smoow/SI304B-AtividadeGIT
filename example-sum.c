#include <stdio.h>

int soma(int a, int b);

int main(){

    int a = 5;
    int b = 2;
    int c = 7;

    printf("%d + %d = %d", a, b, soma(a, b));
    printf("c = %d", c);
    return 0;
}

int soma(int a, int b){
    return a+b;
}
