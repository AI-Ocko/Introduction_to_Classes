#include "Sphere.h"
#include <iostream>
#include <cmath>

Sphere::Sphere() {
    radius = 0.0;
}

Sphere::Sphere(double radiusPar) {
    if (radiusPar > 0) {
        radius = radiusPar;
    } else {
        radius = 0;
    }
}

void Sphere::setRadius(double radiusPar) {
    if (radiusPar > 0) {
        radius = radiusPar;
    } else {
        radius = 0;
    }
}

