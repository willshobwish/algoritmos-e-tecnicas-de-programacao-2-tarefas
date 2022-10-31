#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846264338327950288

float AreaCirculo(float raio) {
    return PI * pow(raio, 2);
}
float AreaRetangulo(float base, float altura) {
    return base * altura;
}
float AreaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}
