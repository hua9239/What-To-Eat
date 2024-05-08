#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Restaurant.h"
#include "Food.h"
#include "GenRandom.cpp"
using namespace std;

int Serial = 0; // 全局變量 Serial

void ScanCsv(const string &filename, vector<Restaurant> &restaurants)
{
    ifstream file(filename);
    string line;
    while (getline(file, line)) // 逐行讀取
    {
        stringstream ss(line);                    // 將每行轉換為 stringstream
        string restaurant_name, food_name, price; // 定義變數
        getline(ss, restaurant_name, ',');        // 以逗號分割取得餐廳名稱
        getline(ss, food_name, ',');              // 以逗號分割取得食物名稱
        getline(ss, price, ',');                  // 以逗號分割取得價格

        // 尋找現有的餐廳
        bool found = false;
        for (auto &restaurant : restaurants)
        {
            if (restaurant.name == restaurant_name) // 如果找到餐廳
            {
                restaurant.menu.emplace_back(food_name, Serial++, stoi(price)); // 加入菜單
                found = true;
                break;
            }
        }
        // 如果找不到，則新增餐廳並加入菜單
        if (!found)
        {
            restaurants.emplace_back(restaurant_name);                              // 新增餐廳
            restaurants.back().menu.emplace_back(food_name, Serial++, stoi(price)); // 加入菜單
        }
    }
}

int main()
{
    vector<Restaurant> restaurants;
    ScanCsv("menu.csv", restaurants);
    int WhatToEat = GenRandomNum(0, Serial - 1);

    for (auto &restaurant : restaurants)
    {
        for (auto &food : restaurant.menu)
        {
            if (food.serial == WhatToEat)
            {
                cout << "你可以吃 " << restaurant.name << " 的 " << food.name << " 價格為 " << food.price << " 元" << endl;
                system("pause");
                return 0;
            }
        }
    }
}