#ifndef FOOD_H
#define FOOD_H

#include <string>
using namespace std;

class Food
{
public:
    string name;
    int serial;
    int price;
    Food(string, int, int);
};

#endif