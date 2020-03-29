//
// Created by Marius on 3/23/2020.
//

#ifndef COMPOSITEEXAMPLE_COMPOSITE_H
#define COMPOSITEEXAMPLE_COMPOSITE_H

#include "Component.h"
#include <iostream>
#include <list>
class Composite : public Component{
public:
  void showDetails() override;
  void addComponent(Component *component);
  double getPrice() override;
  Composite(const std::string &name);

private:
  std::string name;
  std::list<Component*> components;
};


#endif //COMPOSITEEXAMPLE_COMPOSITE_H
