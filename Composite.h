//
// Created by Marius on 3/23/2020.
//

#ifndef COMPOSITEEXAMPLE_COMPOSITE_H
#define COMPOSITEEXAMPLE_COMPOSITE_H

#include "Component.h"
#include <iostream>
#include <vector>
using namespace std;
class Composite : public Component{

private:
  std::string name;
  std::vector<Component*> components;

public:
  Composite(const std::string &name);
  void showDetails() override;
  double getPrice() override;

  void addComponent(Component *component);

};


#endif //COMPOSITEEXAMPLE_COMPOSITE_H
