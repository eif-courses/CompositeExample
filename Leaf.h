//
// Created by Marius on 3/23/2020.
//

#ifndef COMPOSITEEXAMPLE_LEAF_H
#define COMPOSITEEXAMPLE_LEAF_H

#include "Component.h"
#include <iostream>
// IS - A ir HAS - A
class Leaf : public Component{
private:
  std::string name;
  double price;
public:
  Leaf(const std::string &name, double price);
  void showDetails() override;
  double getPrice() override;

};

#endif //COMPOSITEEXAMPLE_LEAF_H
