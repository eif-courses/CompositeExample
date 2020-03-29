//
// Created by Marius on 3/23/2020.
//

#include "Leaf.h"
#include "Color.h"
Leaf::Leaf(const std::string &name, double price) : name(name), price(price) {}

void Leaf::showDetails() {
  Color::setConsoleColor(2);
  std::cout<< name << " "<< price << "eur"<< std::endl;
}

double Leaf::getPrice() {
  return price;
}
