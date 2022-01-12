//
// Created by tanak on 21/09/2021.
//

#ifndef AREA_GEOMETRICAS_CALCULOGEO_H
#define AREA_GEOMETRICAS_CALCULOGEO_H

#include "geometricas.h"
#include <vector>
#include <iostream>

using namespace std;
class calculoGeo: protected vector<geometricas*>{
private:
    float areaTotal;
public:
    calculoGeo();
    ~calculoGeo();

    void addGeo(triangulo geo);
    void addGeo(quadrado geo);
    void addGeo(circulo geo);

    float calculaArea();
};


#endif //AREA_GEOMETRICAS_CALCULOGEO_H
