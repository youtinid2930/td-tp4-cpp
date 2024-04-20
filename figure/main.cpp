#include <iostream>
#include "dessin.h"
#include "cercle.h"
#include "caree.h"
#include "triangle.h"

using namespace std;


void unCercleDePlus(Dessin const& img)
{
Dessin tmp(img);
tmp.ajouteFigure(Cercle(1));
cout << "Affichage de 'tmp': " << endl;
tmp.affiche();
}


int main () {
Dessin dessin;
dessin.ajouteFigure(Triangle(3,4));
unCercleDePlus(dessin);
dessin.ajouteFigure(Caree(2));
dessin.ajouteFigure(Triangle(6,1));
dessin.ajouteFigure(Cercle(12));

cout << endl << "Affichage du dessin : "<< endl;
dessin.affiche();


}
