#include "Composite.h"
#include "Leaf.h"
#include <vector>

int main() {




   int input = 1;

   vector<string> peripherals{"Razer 205", "Keybord Logitech K250", "Mouse 45", "Printer Kyocera X"};
  cout << "Sukurkite kompiuteri:" << endl;
   while(input != 0){
     cout << "1. Susikurti paciam." << endl;
     cout << "2. Rekomenduoti jau surinkta." << endl;
     cout << "0. Uzdaryti." << endl;
     cin >> input;

     switch (input) {
       case 1:
       {
         Composite computer("Custom Build");
         Composite per("Peripherals");

         for (int i = 0; i < peripherals.size(); ++i) {
           cout << (i+1) <<". " << peripherals[i] << endl;
         }
         int option;
         cout << "Pasirinkite isorinius prietaisus:" << endl;
         cin >> option;

         Leaf leaf(peripherals[option-1], 42);
         per.addComponent(&leaf);
         computer.addComponent(&per);
         computer.showDetails();

         break;
       }
       case 2:
         cout << "REKOMENDUOJAME ALIENWARE 18" << endl;
         break;
       case 0:
         break;
       default:
         cout << "Tokio punkto nera" << endl;
         break;
     }



   }


  return 0;
}
