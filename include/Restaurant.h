#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include <vector>
#include "Food.h"
using namespace std;

class Restaurant
{
public:
    string name;
    vector<Food> menu;
    Restaurant(string);
};

#endif