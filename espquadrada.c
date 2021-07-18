#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

    int input;
    int x = 0;
    int y = 0;
    scanf("%d", &input);

    int resolve = (-1 + sqrt(1 + 4*input))/2;
    int limite = pow(resolve, 2) + resolve;
    int falta = input - limite;
    int salto = resolve + 1;

    if(resolve % 2 ==0){
        x = salto/2;
        y = (-1 * salto/2);

        if(salto >= falta){
            y = y + falta;
        }
        else{
            y = y + salto;
            x = x - (falta - salto);
        }
    }
    else{
        x = -1 * (salto/2);
        y = salto/2;
        if(salto >= falta){
            y = y - falta;
        }
        else{
            y = y - salto;
            x = x + (falta - salto);
        }
    }
    printf("(%d,%d)", x, y); 
 
}