#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"


class Triangle : public Figure {
private:
  double base, hauteur;
public:
  Triangle() {
      std::cout << "le constructeur par defaut de triangle. "<<std::endl;
  }
  Triangle(double b, double h) {
      base = b;
      hauteur = h;
      std::cout << "le constructeur avec parametre de triangle." << std::endl;
  }
  Triangle(const Triangle &t) {
      base = t.base;
      hauteur = t.hauteur;
      std::cout << "le constructeur par copie de triangle. " << std::endl;
  }
  ~Triangle () {
      std::cout << "distructeur de Triangle. " << std::endl;
  }
  void affiche() const{
    std::cout << "Triangle de base " << base << " et de hauteur " << hauteur << std::endl;
  }
  Figure* copie() const{
    return new Triangle(*this);
  }
};
#endif // TRIANGLE_H
