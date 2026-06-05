#include <iostream>
// #include <random>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
// #include <tuple>
#include <stack>
#include <queue>
#include <deque>
// #include <list>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <map>
// #include <bit>
#include <bitset>
#include <limits>
#include <numeric>
#include <functional>
#include <utility>
#include "main.h"
using namespace std;

/*
POST SUBMISSION QUESTIONS:

1.

*/

// PROTOTYPES
std::ostream &operator<<(std::ostream &os, unsigned __int128 x);

// CLASSES AND STRUCTURES
enum class ShapeKind
{
    Circle,
    Rectangle,
    Square
};
struct Distance
{
    int feet;
    double inches;
};
struct Room
{
    ShapeKind shape;
    Distance length;
    Distance width;
};

// MAIN
int main()
{


    /*
    unsigned __int128 is a compiler extension (mainly GCC/Clang),
    not a standard C++ integer type,
    so the standard stream operators (<<) were never overloaded for it.
    */
    unsigned __int128 x = 4;
    std::cout << x << " Hello world." << std::endl;

    message1();

    return 0;
}

// DEFINITIONS
std::ostream &operator<<(std::ostream &os, unsigned __int128 x)
{
    if (x == 0)
    {
        os << '0';
        return os;
    }

    std::string s;

    while (x > 0)
    {
        s += '0' + (x % 10);
        x /= 10;
    }

    std::reverse(s.begin(), s.end());

    os << s;
    return os;
}

void message1() {
    message2();
    cout << "Mesage 1" << endl;
}
void message2() {
    message3();
    cout << "Mesage 2" << endl;
}
void message3() {
    message4();
    cout << "Mesage 3" << endl;
}
void message4() {
    cout << "Mesage 4" << endl;
}