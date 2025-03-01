#ifndef _SPHERE
#define _SPHERE 

class Sphere {

    public:

    Sphere();  // default constructor
    Sphere(double radiusPar);  // overloaded constructor

    void setRadius(double radiuspar); // (setter)
    double getRadius(); // accessor (getter)
    double calcSurfaceArea(double radiusPar);
    double calcVolume(double radiusPar);



    private:

    double radius; 


};

#endif