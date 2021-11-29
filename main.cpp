#include <iostream>
#include <vector>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

using namespace std;

int main() {

   int input = 1;
   vector<Leaf> peripherals{
     Leaf("Razer 205", 55),
     Leaf("Keybord Logitech K250", 22.51),
     Leaf("Mouse 45", 421.43),
     Leaf("Printer Kyocera X", 1243.12)};

  cout << "Pick your option:" << endl;
   while(input != 0){
     cout << "1. Create yourself" << endl;
     cout << "2. Recommended built-in" << endl;
     cout << "0. Close." << endl;
     cin >> input;

     switch (input) {
       case 1:
       {
         Composite* computer = new Composite("Custom Build");
         Composite* per = new Composite("Peripherals");

         int option = 1;

         while (option != 0) {
           for (int i = 0; i < peripherals.size(); ++i) {
             cout << (i+1) <<". " << peripherals[i].GetName() << endl;
           }
           cout << "Pick peripheral:" << endl;
           cin >> option;
           if(option == 0){break;}
           Leaf* leaf = new Leaf(peripherals[option - 1].GetName(), peripherals[option - 1].getPrice());
           per->addComponent(leaf);

         }
         computer->addComponent(per);
         computer->showDetails();
         cout << "Total price for peripherals: " << per->getPrice() <<" eur"<< endl;
         break;
       }
       case 2:
         cout << "Recommended ALIENWARE 18" << endl;
         break;
       case 0:
         break;
       default:
         cout << "There is no option" << endl;
         break;
     }

   }


  return 0;
}
