#include "cercle.h"
#include "cmath"


using namespace std;


Cercle::Cercle():r(1) {}
Cercle::Cercle(double a): r(a) {}

void Cercle::description() const{
    cout << "Ceci est un cercle" << endl;
}

double Cercle::aire() {
    return M_PI*r*r;
}
