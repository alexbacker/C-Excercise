#include <iostream>
#include "Fraction.h"
#include "Fraction.cpp"
using namespace std;

int main()
{
    cout << "Hello!!! \n";

    int amountToAdd = 1000000;
    int amountToErase = 1000;
    Fraction<double> fraToTest(20, 100);
    std::list<Fraction<double> > listToAdd;
    std::vector<Fraction<double> > vectorToAdd;
    std::map<int, Fraction<double> > mapToAdd;

    /*add to containers*/
    timeAddList(listToAdd, amountToAdd, fraToTest);
    timeAddVector(vectorToAdd, amountToAdd, fraToTest);
    timeAddMap(mapToAdd, amountToAdd, fraToTest);
    cout << endl;

    /*erase front of containers*/
    timeRemoveFrontList(listToAdd, amountToErase);
    timeRemoveFrontVector(vectorToAdd, amountToErase);
    timeRemoveFrontMap(mapToAdd, amountToErase);
    cout << endl;

    /*erase back of containers*/
    timeRemoveBackList(listToAdd, amountToErase);
    timeRemoveBackVector(vectorToAdd, amountToErase);
    timeRemoveBackMap(mapToAdd, amountToErase);

    return 0;
}