#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

int main() {
    CCalc<int> i1;
    CCalc<string> i2;
    i1.set(1, 2);
    i2.set("AC", "DEF");
    cout << i1.add() << endl << i2.add() << endl;
    return 0;
}