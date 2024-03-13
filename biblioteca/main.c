#include <stdio.h>
#include "libmatematica.h"

void main(){
    float s,c,t;
    s=calcular_seno(1.0);
    c=calcular_cosseno(1.0);
    t=calcular_tangente(1.0);
    printf("%f  %f  %f", s, c, t);
}
