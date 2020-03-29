//
// Created by Marius on 3/23/2020.
//

#ifndef COMPOSITEEXAMPLE_LEAF_H
#define COMPOSITEEXAMPLE_LEAF_H

#include "Component.h"
#include <iostream>

class Leaf : public Component{
public:
  void showDetails() override;

  double getPrice() override;
  Leaf(const std::string &name, double price);

private:
  std::string name;
  double price;
};

#endif //COMPOSITEEXAMPLE_LEAF_H
