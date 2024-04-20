#ifndef CERCLE_H
#define CERCLE_H
#include "figure.h"

class Cercle : public Figure {
private:
  double rayon;
public:
  Cercle(){
      std::cout << "le constricteur par defaut de cercle." <<std::endl;
  }
  Cercle(double r){
      rayon = r;
      std::cout <<"le constricteur avc parametre de cercle." <<std::endl;
  }
  Cercle(const Cercle &c) {
      this->rayon = c.rayon;
      std::cout << "le constricteur par copie de cercle." << std::endl;
  }
  ~Cercle () {
      std::cout << "le districteur de Cercle ." <<std::endl;
  }
  void affiche() const {
    std::cout << "Cercle de rayon " << rayon << std::endl;
  }
  Figure* copie() const {
    return new Cercle(*this);
  }
};


#endif // CERCLE_H
