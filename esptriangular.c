#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){

    int input;
    int x = 0;
    int y = 0;
    scanf("%d", &input);

    int resolve = (-1 + sqrt(1 + 4*input))/2;
    int limite = pow(resolve, 2) + resolve;
    int falta = input - limite;
    int salto = resolve + 1;

    if(resolve % 2 == 0){
        y = -1*(salto/2);

        if(salto >= falta){
            x = x + falta;
        }
        else{
            x = x + 2*salto - falta;
            y = y + (falta - salto);
        }
    }
    else{
        y = (salto/2);
        if(salto >= falta){
            x = x - falta;
            y = y - falta;
        }
        else{
            y = y - salto;
            x = x - 2*salto + falta;
        }
    }
    printf("(%d,%d)", x, y);
}