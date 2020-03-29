//
// Created by Marius on 3/23/2020.
//

#include "Composite.h"
#include "Color.h"



Composite::Composite(const std::string &name) : name(name) {}

void Composite::showDetails() {

  Color::setConsoleColor(1);
  std::cout << name<< std::endl;
  for(Component *c: components){
    c->showDetails();
  }
}

void Composite::addComponent(Component *component) {
  components.push_back(component);
}

double Composite::getPrice() {

  double total = 0.0;
  for(Component *c: components){
    total += c->getPrice();
  }
  return total;
}
