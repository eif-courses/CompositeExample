#include <iostream>
#include "Composite.h"
#include "Leaf.h"
#include "Color.h"

int main() {

  auto *computer = new Composite("Dell inspiron N7110");
  auto *peripherals = new Composite("Peripherals");
  auto *cabinet = new Composite("Cabinet");
  auto *motherboard = new Composite("motherboard");

  auto *cpu = new Leaf("INTEL I7 5555K", 500);
  auto *ram = new Leaf("CORSAIR 8GB", 200);

  auto *mouse = new Leaf("RAzer KKK", 300);
  auto *keyboard = new Leaf("Razer Naga", 120);


  peripherals->addComponent(mouse);
  peripherals->addComponent(keyboard);

  motherboard->addComponent(cpu);
  motherboard->addComponent(ram);

  computer->addComponent(peripherals);
  computer->addComponent(cabinet);
  cabinet->addComponent(motherboard);


  peripherals->showDetails();


  Color::setConsoleColor(3);
  std::cout<<"Your peripherals total price:" << peripherals->getPrice() << " eur"<<std::endl;
  Color::setConsoleColor(9);
  std::cout<<"Your Computer total price:" << computer->getPrice() << " eur"<<std::endl;






  return 0;
}
