#include <chrono>
#include <random>
using namespace std;

int GenRandomNum(int min, int max)
{
    static mt19937 generator(chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}