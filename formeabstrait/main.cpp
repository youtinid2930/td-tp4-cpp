#include <iostream>
#include "cercle.h"
#include "triangle.h"

using namespace std;


void affichageDesc(const Forme &f) {
    f.description();
}

int main() {
Cercle c(5);
Triangle t(10, 2);
affichageDesc(t);
affichageDesc(c);
return 0;
}
