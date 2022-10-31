// #include "FuncoesGeometricas.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Utilizacao de biblioteca do math.h que possui a constante pi
#define M_PI 3.14159265358979323846264338327950288

float AreaCirculo(float raio) {
    return M_PI * pow(raio, 2);
}
float AreaRetangulo(float base, float altura) {
    return base * altura;
}
float AreaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}
// circulo == a = pi * r^2
// retangulo == a = base * altura
// triangulo == (base * altura) /2