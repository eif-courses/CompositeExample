//
// Created by Marius on 3/23/2020.
//

#include "Composite.h"


Composite::Composite(const std::string &name) : name(name) {}

void Composite::showDetails() {

  std::cout << name<< std::endl;
  for(Component *c: components){
    c->showDetails();
  }
}

void Composite::addComponent(Component *component) {
  components.emplace_back(component);
}

double Composite::getPrice() {

  double total = 0.0;
  for(Component *c: components){
    total += c->getPrice();
  }
  return total;
}
