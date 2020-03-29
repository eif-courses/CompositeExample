//
// Created by Marius on 3/23/2020.
//

#include "Color.h"
#include <windows.h>


void Color::setConsoleColor(int color) {
  HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //just once init to control console
  SetConsoleTextAttribute(handle, color);
}
