// DeleteMe1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#pragma once
using namespace std;

class EnergyProject {
private:
    void ReadFile();

public:

};

void EnergyProject::ReadFile() {
    bool firstLine = true;
    ifstream file("energy.csv");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            stringstream parsedline(line);
            if (firstLine) {
                firstLine = false;
                continue;
            }

            //should these be vector<string>?
            string stateYear = "";
            string state = "";
            string year = "";

            getline(parsedline, line, ','); // state
            stateYear += line;
            state += line; //"Hawaii"
            stateYear += "-"; //"Hawaii-"
            getline(parsedline, line, ','); // year column
            stateYear += line; //"Hawaii-1990"
            year += line; //"1990"
            getline(parsedline, line, ','); // column c
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ','); // p
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ','); // z
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ','); // ac
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ',');
            getline(parsedline, line, ','); // ap
        }
    }
}

int main() 
{
{
    int choice = 0; 
    
    cout << "===================================================== \n";
    cout << " \t\tMENU \t \n ";
    cout << "===================================================== \n";
    cout << " 1. Play the Bad Energy Guessing Game \n"; //which state has the highest nonrenewable energy (bad energy) consumption in 1990?
    cout << " 2. Play the Good Energy Guessing Game \n";
    cout << " 3. Find Top 10 States with Highest Nonrenewable Energy Consumption \n";
    cout << " 4. Find Top 10 States with Lowest Nonrenewable Energy Consumption  \n";
    cout << " 5. Exit \n";

    // call functions
    cin >> choice;
    switch (choice) 
    {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            break;
        default:
            cout << "Error! Invalid choice. Pick a number from 1-5";
            break;
        }
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
