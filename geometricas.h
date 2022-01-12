//
// Created by tanak on 21/09/2021.
//

#ifndef AREA_GEOMETRICAS_GEOMETRICAS_H
#define AREA_GEOMETRICAS_GEOMETRICAS_H

#include <vector>

using namespace std;
class geometricas {
public:
    geometricas()= default;
    virtual float getArea() = 0;
};

class triangulo: public geometricas{
private:
    float area, altura, base;
public:
    triangulo(float h, float b): area(0), base(b), altura(h){area = (altura*base)/2; };
    float getArea() override{ return area; };
};
class quadrado: public geometricas{
private:
    float area, altura, base;
public:
    quadrado(float h, float b): area(0), base(b), altura(h){area = (altura*base); };
    float getArea() override{ return area; };
};
class circulo: public geometricas{
private:
    float area, pi, raio;
public:
    circulo(float pii, float r): area(0), pi(pii), raio(r){area = raio*raio*pi; };
    float getArea() override{ return area; };
};

#endif //AREA_GEOMETRICAS_GEOMETRICAS_H
