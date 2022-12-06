#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#ifndef BACKEND_H
#define BACKEND_H
using namespace std;

class state {
public:
    string name;
    int powerConsumption;
    int year;
    state() {
        this->name = "";
        this->year = 0;
        this->powerConsumption = 0;
    }
    state(string name, int year, int powerConsumption) {
        this->name = name;
        this->year = year;
        this->powerConsumption = powerConsumption;
    }
};
void insertStateNames(set<string> &stateList);
void printStateInput(int choice, set<string> &stateList);
bool isInputValid(string input);
void printMenu();
void invalidMenuPrint();
void printEnergyMenu();
void invalidCategoryPrint();
string removeQuotes(string quotes);
void readEnergyFile();
#endif