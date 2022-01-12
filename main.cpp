/*1- Uma forma de se calcular a área de uma figura geométrica complexa, é dividir essa figura em várias figuras simples,
 * como triângulos, retângulos, círculos, etc.
Escreva um programa que receba como entrada uma lista de figuras simples (a princípio apenas triângulos e retângulos) e
 imprima a área total deste conjunto de figuras. Seu programa deve prever a extensão
 dos tipos de figuras possíveis (círculos, losangulos, etc.). Depois de pronto, faça a extensão para admitir ao menos mais um tipo de */

#include <iostream>
#include "geometricas.h"
#include "calculoGeo.h"

using namespace std;
int main() {
    calculoGeo teste;
    teste.addGeo(triangulo(5,2));
    teste.addGeo(quadrado(2,2));
    teste.addGeo(circulo(3.14,15));

    cout<< teste.calculaArea() <<endl;
    return 0;
}
