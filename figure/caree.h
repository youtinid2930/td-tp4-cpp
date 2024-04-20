#ifndef CAREE_H
#define CAREE_H
#include "figure.h"

class Caree : public Figure {
private:
  double cote;
public:
  Caree(){
      std::cout << "le constructeur par defaut de carre. " <<std::endl;
  }
  Caree(double c){
      cote = c;
      std::cout << "le constructeur avec parametre de carre."<< std::endl;
   }
  Caree(const Caree &c) {
      std::cout << "le constructeur par copie de caree. " << std::endl;
      cote = c.cote;
  }
  ~Caree() {
      std::cout << "destricteur de caree. " << std::endl;
  }
  void affiche() const {
    std::cout << "Carre de cote " << cote << std::endl;
  }
  Figure* copie() const {
      return new Caree(*this);
  }
};
#endif // CARREE_H
