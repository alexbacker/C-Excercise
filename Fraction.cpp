#include "Fraction.h"
#include <time.h>
#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;


template <class T>
Fraction<T>::Fraction()
{
    this->numerator = T(0);
    this->denominator = T(1);
}

template <class T>
Fraction<T>::~Fraction()
{
}

template <class T>
Fraction<T>::Fraction(T numeratorInput, T denominatorInput)
{
    this->numerator = numeratorInput;
    this->denominator = denominatorInput;
}

/*
 * add list
 */
template <typename T>
void timeAddList(std::list<Fraction<T> > &variableToProcess, int amountToAdd, Fraction<T> fraToAdd)
{
    for (int i = 0; i < amountToAdd; i++)
    {
        variableToProcess.push_back(fraToAdd);
    }
    cout << "Size of list is " << variableToProcess.size() << endl;
}

/*
 * add vector
 */
template <typename T>
void timeAddVector(std::vector<Fraction<T> > &variableToProcess, int amountToAdd, Fraction<T> fraToAdd)
{
    for (int i = 0; i < amountToAdd; i++)
    {
        variableToProcess.push_back(fraToAdd);
    }
    cout << "Size of vector is " << variableToProcess.size() << endl;
}

/*
 * add vector
 */
template <typename T, typename U>
void timeAddMap(std::map<U, Fraction<T> > &variableToProcess, int amountToAdd, Fraction<T> fraToAdd)
{
    for (int i = 0; i < amountToAdd; i++)
    {
        variableToProcess[i] = fraToAdd;
    }
    cout << "Size of map is " << variableToProcess.size() << endl;
}

/*
 *  remove list front
 */
template <typename T>
void timeRemoveFrontList(std::list<Fraction<T> > &variableToProcess, int amountToRemove)
{
    struct timespec start, finish;
    double elapsed;
    clock_gettime(CLOCK_MONOTONIC, &start); // start timer
    for (int i = 0; i < amountToRemove; i++)
    {
        variableToProcess.pop_front();
    }
    clock_gettime(CLOCK_MONOTONIC, &finish); // end timer
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;

    cout <<"Elapsed time " << elapsed <<" ||   Size of list is " << variableToProcess.size() << endl;
}

/*
 * remove vector front
 */
template <typename T>
void timeRemoveFrontVector(std::vector<Fraction<T> > &variableToProcess, int amountToRemove)
{
    struct timespec start, finish;
    double elapsed;
    clock_gettime(CLOCK_MONOTONIC, &start); // start timer 
    for (int i = 0; i < amountToRemove; i++)
    {
        variableToProcess.erase(variableToProcess.begin());
    }
    clock_gettime(CLOCK_MONOTONIC, &finish); // end timer
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;

    cout  << "Elapsed time " << elapsed << "  ||   Size of map is " << variableToProcess.size() << endl;
}

/*
 * Remove list back
 */
template <typename T>
void timeRemoveBackList(std::list<Fraction<T> > &variableToProcess, int amountToRemove)
{
    struct timespec start, finish;
    double elapsed;
    clock_gettime(CLOCK_MONOTONIC, &start); // start timer
    for (int i = 0; i < amountToRemove; i++)
    {
        variableToProcess.pop_back();
    }
    clock_gettime(CLOCK_MONOTONIC, &finish); // end timer
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;

    cout <<"Elapsed time " << elapsed <<"   ||   Size of list is " << variableToProcess.size() << endl;
}

/*
 * remove vector back
 */
template <typename T>
void timeRemoveBackVector(std::vector<Fraction<T> > &variableToProcess, int amountToRemove)
{
    struct timespec start, finish;
    double elapsed;
    clock_gettime(CLOCK_MONOTONIC, &start); // start timer 
    for (int i = 0; i < amountToRemove; i++)
    {
        variableToProcess.pop_back();
    }
    clock_gettime(CLOCK_MONOTONIC, &finish); // end timer
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;

    cout  << "Elapsed time " << elapsed << "    ||   Size of vecor is " << variableToProcess.size() << endl;
}

/*
 * remove vector back
 */
template <typename T, typename U>
void timeRemoveBackMap(std::map<U, Fraction<T> > &variableToProcess, int amountToRemove)
{
    struct timespec start, finish;
    double elapsed;
    clock_gettime(CLOCK_MONOTONIC, &start); // start timer
    for (int i = variableToProcess.size() - amountToRemove; i < variableToProcess.size(); i++)
    {
        variableToProcess.erase(i);
    }
    clock_gettime(CLOCK_MONOTONIC, &finish); // end timer
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;

    cout  << "Elapsed time " << elapsed << "    ||   Size of map is " << variableToProcess.size() << endl;
}