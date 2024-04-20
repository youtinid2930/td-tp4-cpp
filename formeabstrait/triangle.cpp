#include "triangle.h"



using namespace std;


Triangle::Triangle() : base(1),hauteur(1) {}

Triangle::Triangle(double b,double h): base(b),hauteur(h) {}

void Triangle::description() const{
    cout << "Ceci est un triangle" << endl;
}

double Triangle::aire() {
    return 0.5*base*hauteur;
}
