//
// Created by tanak on 21/09/2021.
//
#include "calculoGeo.h"

calculoGeo::calculoGeo():areaTotal(0) {

}
calculoGeo::~calculoGeo() {
    vector<geometricas*>::iterator it;
    for (it = begin(); it != end(); ++it) {
        delete *it;
    }
}
void calculoGeo::addGeo(triangulo geo) {
    push_back(new triangulo(std::move(geo)));
}
void calculoGeo::addGeo(quadrado geo) {
    push_back(new quadrado(std::move(geo)));
}
void calculoGeo::addGeo(circulo geo) {
    push_back(new circulo(std::move(geo)));
}
float calculoGeo::calculaArea() {
    vector<geometricas*>::iterator it;
    for (it = begin(); it != end(); ++it) {
        areaTotal = (*it)->getArea() + areaTotal;
    }
    return areaTotal;
}
