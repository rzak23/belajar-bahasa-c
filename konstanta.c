#include <stdio.h>
#define pi 3.14; //konstanta nilai pi

void main(){
    int r = 4;

    float luas = ((float) r * 2) * pi;

    printf("Jari-jari lingkaran : %i\n",r);
    printf("Hasil : %.2f",luas);
}