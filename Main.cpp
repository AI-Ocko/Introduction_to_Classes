#include <iostream>
#include <string>
#include "Sphere.h"
#include "Sphere.cpp"

using namespace std;

int main() {


    //declarations
    double radiusTemp;
    
    Sphere basketball(2.0);

    // get user input
    cout << "What is the radius for the basketball: " << endl;
    cin >> radiusTemp;
    basketball.setRadius(radiusTemp);


    //calculation and output
    radiusTemp = basketball.getRadius();
    cout << "Basketball: " << endl;
    cout << "Surface area: " << basketball.calcSurfaceArea(radiusTemp) << endl;
    cout << "Volumne: " << basketball.calcVolume(radiusTemp);


    return 0;
}