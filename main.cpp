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
    void ReadFile();
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
            string stateYear = "";
            getline(parsedline, line, ','); // state
            stateYear += line;
            stateYear += "-";
            getline(parsedline, line, ','); // year column
            stateYear += line;
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