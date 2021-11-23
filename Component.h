//
// Created by Marius on 3/23/2020.
//

#ifndef COMPOSITEEXAMPLE_COMPONENT_H
#define COMPOSITEEXAMPLE_COMPONENT_H
class Component{
public:
  // abstract void showDetails();
  virtual void showDetails() = 0;
  virtual double getPrice() = 0;

};
#endif //COMPOSITEEXAMPLE_COMPONENT_H
