//
// Created by Marius on 3/23/2020.
//

#include "Leaf.h"

Leaf::Leaf(const std::string &name, double price) : name(name), price(price) {}

void Leaf::showDetails() {
  std::cout<< name << " "<< price << "eur"<< std::endl;
}

double Leaf::getPrice() {
  return price;
}

const std::string &Leaf::GetName() const {
  return name;
}
