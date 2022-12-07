#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <unordered_map>
#include "backEnd.h"
#include "minHeap.h"
#include "HashTable.h"
#pragma once
using namespace std;

void insertStateNames(set<string> &stateList) {
    stateList.insert("Alabama");
    stateList.insert("Alaska");
    stateList.insert("Arizona");
    stateList.insert("Arkansas");
    stateList.insert("California");
    stateList.insert("Colorado");
    stateList.insert("Connecticut");
    stateList.insert("Delaware");
    stateList.insert("Florida");
    stateList.insert("Georgia");
    stateList.insert("Hawaii");
    stateList.insert("Idaho");
    stateList.insert("Illinois");
    stateList.insert("Indiana");
    stateList.insert("Iowa");
    stateList.insert("Kansas");
    stateList.insert("Kentucky");
    stateList.insert("Louisiana");
    stateList.insert("Maine");
    stateList.insert("Maryland");
    stateList.insert("Massachusetts");
    stateList.insert("Michigan");
    stateList.insert("Minnesota");
    stateList.insert("Mississippi");
    stateList.insert("Missouri");
    stateList.insert("Montana");
    stateList.insert("Nebraska");
    stateList.insert("Nevada");
    stateList.insert("New Hampshire");
    stateList.insert("New Jersey");
    stateList.insert("New Mexico");
    stateList.insert("New York");
    stateList.insert("North Carolina");
    stateList.insert("North Dakota");
    stateList.insert("Ohio");
    stateList.insert("Oklahoma");
    stateList.insert("Oregon");
    stateList.insert("Pennsylvania");
    stateList.insert("Rhode Island");
    stateList.insert("South Carolina");
    stateList.insert("South Dakota");
    stateList.insert("Tennessee");
    stateList.insert("Texas");
    stateList.insert("Utah");
    stateList.insert("Vermont");
    stateList.insert("Virginia");
    stateList.insert("Washington");
    stateList.insert("West Virginia");
    stateList.insert("Wisconsin");
    stateList.insert("Wyoming");
}

void printStateInput(int choice, set<string> &stateList) {
    string stateInput;
    if (choice == 1) {
        cout << "Enter a State (Start with a Capital Letter): ";
        getline(cin, stateInput);
        while (stateList.find(stateInput) == stateList.end()) {
            cout << "That's Not a State Silly... ( >︹<) , let's try again: \n";
            getline(cin, stateInput);
        }

    }
}

void checkIfValidState(string stateRead, set<string> &stateList) {
    cout << "Enter a State (Start with a Capital Letter): ";
    getline(cin, stateRead);
    while (stateList.find(stateRead) == stateList.end()) {
        cout << "That's Not a State Silly... ( >︹<) , let's try again: \n";
        getline(cin, stateRead);
    }
}

bool isInputValid(string input) {
    for (unsigned int i = 0; i < input.size(); i++) {
        if (!isdigit(input[i])) {
            return false;
        }
    }
    return true;
}

void printMenu() {
    cout << "===================================================== \n";
    cout << "                         MENU                        \n";
    cout << "===================================================== \n";
    cout << "1. Play the Energy Guessing Game\n"; //which state has the highest nonrenewable energy (bad energy) consumption in 1990?
    cout << "2. Game Instructions\n";
    cout << "3. Exit\n";
}

void invalidMenuPrint() {
    cout << "That doesn't seem right... ┐(´～｀)┌ , let's try again: \n";
    printMenu();
}

void printEnergyMenu() {
    cout << "Select a Category: \n";
    cout << "1. Commercial Energy\n";
    cout << "2. Electrical Energy\n";
    cout << "3. Industrial Energy\n";
    cout << "4. Refinery Energy\n";
    cout << "5. Residential Energy\n";
    cout << "6. Industrial Energy\n";
}

void invalidCategoryPrint() {
    cout << "That doesn't seem right... ┐(´～｀)┌ , let's try again: \n";
    printEnergyMenu();
}

void printEnergyOptionsCommercial() {
    cout << "Select a Type of Energy: \n";
    cout << "1. Coal\n";
    cout << "2. Fuel Oil\n";
    cout << "3. Geothermal\n";
    cout << "4. Hydropower\n";
    cout << "5. Kerosene\n";
    cout << "6. Petroleum\n";
    cout << "7. Natural Gas\n";
    cout << "8. Solar\n";
    cout << "9. Wind\n";
    cout << "10. Wood\n";
}

void printEnergyOptionsElectrical() {
    cout << "Select a Type of Energy: \n";
    cout << "1. Coal\n";
    cout << "2. Fuel Oil\n";
    cout << "3. Natural Gas\n";
    cout << "4. Solar\n";
    cout << "5. Wood\n";
}

void printEnergyOptionsIndustrial() {
    cout << "Select a Type of Energy: \n";
    cout << "1. Coal\n";
    cout << "2. Fuel Oil\n";
    cout << "3. Geothermal\n";
    cout << "4. Hydropower\n";
    cout << "5. Kerosene\n";
    cout << "6. Petroleum\n";
    cout << "7. Natural Gas\n";
    cout << "8. Other Petroleum Products\n";
    cout << "9. Solar\n";
    cout << "10. Wind\n";
    cout << "11. Wood\n";
}

void printEnergyOptionsRefinery() {
    cout << "Select a Type of Energy: \n";
    cout << "1. Coal\n";
    cout << "2. Fuel Oil\n";
    cout << "3. Natural Gas\n";
}

void printEnergyOptionsResidential() {
    cout << "Select a Type of Energy: \n";
    cout << "1. Coal\n";
    cout << "2. Fuel Oil\n";
    cout << "3. Geothermal\n";
    cout << "4. Kerosene\n";
    cout << "5. Petroleum\n";
    cout << "6. Natural Gas\n";
    cout << "7. Wood\n";
}

void printEnergyOptionsTransportation() {
    cout << "Select a Type of Energy: \n";
    cout << "1. Coal\n";
    cout << "2. Fuel Oil\n";
    cout << "3. Petroleum\n";
    cout << "4. Natural Gas\n";
}

void invalidCommercialPrint() {
    cout << "That doesn't seem right... ┐(´～｀)┌ , let's try again: \n";
    printEnergyOptionsCommercial();
}

void invalidElectricPrint() {
    cout << "That doesn't seem right... ┐(´～｀)┌ , let's try again: \n";
    printEnergyOptionsElectrical();
}

void invalidIndustrialPrint() {
    cout << "That doesn't seem right... ┐(´～｀)┌ , let's try again: \n";
    printEnergyOptionsIndustrial();
}

void invalidRefineryPrint() {
    cout << "That doesn't seem right... ┐(´～｀)┌ , let's try again: \n";
    printEnergyOptionsRefinery();
}

void invalidResidentialPrint() {
    cout << "That doesn't seem right... ┐(´～｀)┌ , let's try again: \n";
    printEnergyOptionsResidential();
}

void invalidTransportationPrint() {
    cout << "That doesn't seem right... ┐(´～｀)┌ , let's try again: \n";
    printEnergyOptionsTransportation();
}

string removeQuotes(string quotes) { // Removes the quotes from the string that was read
    string name;
    for (unsigned int i = 1; i < quotes.length() - 1; i++) {
        name += quotes[i];
    }
    return name;
}

void readEnergyFile(unordered_map<string, pair<minHeap,Hashtable>> &commercialMap, unordered_map<string, pair<minHeap,Hashtable>> &electricalMap, unordered_map<string, pair<minHeap,Hashtable>> &industrialMap, unordered_map<string, pair<minHeap,Hashtable>> &refineryMap, unordered_map<string, pair<minHeap,Hashtable>> &residentialMap, unordered_map<string, pair<minHeap,Hashtable>> &transportationMap) {
    minHeap commercialCoal;
    commercialMap["commercialCoal"].first = commercialCoal;
    minHeap commercialFuelOil;
    commercialMap["commercialFuelOil"].first = commercialFuelOil;
    minHeap commercialGeothermal;
    commercialMap["commercialGeothermal"].first = commercialGeothermal;
    minHeap commercialHydroPower;
    commercialMap["commercialHydroPower"].first = commercialHydroPower;
    minHeap commercialKerosene;
    commercialMap["commercialKerosene"].first = commercialKerosene;
    minHeap commercialPetroleum;
    commercialMap["commercialPetroleum"].first = commercialPetroleum;
    minHeap commercialNaturalGas;
    commercialMap["commercialNaturalGas"].first = commercialNaturalGas;
    minHeap commercialSolar;
    commercialMap["commercialSolar"].first = commercialSolar;
    minHeap commercialWind;
    commercialMap["commercialWind"].first = commercialWind;
    minHeap commercialWood;
    commercialMap["commercialWood"].first = commercialWood;
    minHeap electricalCoal;
    electricalMap["electricalCoal"].first = electricalCoal;
    minHeap electricalFuelOil;
    electricalMap["electricalFuelOil"].first = electricalFuelOil;
    minHeap electricalNaturalGas;
    electricalMap["electricalNaturalGas"].first = electricalNaturalGas;
    minHeap electricalSolar;
    electricalMap["electricalNaturalGas"].first = electricalSolar;
    minHeap electricalWood;
    electricalMap["electricalWood"].first = electricalWood;
    minHeap industrialCoal;
    industrialMap["industrialCoal"].first = industrialCoal;
    minHeap industrialFuelOil;
    industrialMap["industrialFuelOil"].first = industrialFuelOil;
    minHeap industrialGeothermal;
    industrialMap["industrialGeothermal"].first = industrialGeothermal;
    minHeap industrialHydroPower;
    industrialMap["industrialHydroPower"].first = industrialHydroPower;
    minHeap industrialKerosene;
    industrialMap["industrialKerosene"].first = industrialKerosene;
    minHeap industrialPetroleum;
    industrialMap["industrialPetroleum"].first = industrialPetroleum;
    minHeap industrialNaturalGas;
    industrialMap["industrialNaturalGas"].first = industrialNaturalGas;
    minHeap industrialOtherPetroleum;
    industrialMap["industrialOtherPetroleum"].first = industrialOtherPetroleum;
    minHeap industrialSolar;
    industrialMap["industrialSolar"].first = industrialSolar;
    minHeap industrialWind;
    industrialMap["industrialWind"].first = industrialWind;
    minHeap industrialWood;
    industrialMap["industrialWood"].first = industrialWood;
    minHeap refineryCoal;
    refineryMap["refineryCoal"].first = refineryCoal;
    minHeap refineryFuelOil;
    refineryMap["refineryFuelOil"].first = refineryFuelOil;
    minHeap refineryNaturalGas;
    refineryMap["refineryNaturalGas"].first = refineryNaturalGas;
    minHeap residentialCoal;
    residentialMap["residentialCoal"].first = residentialCoal;
    minHeap residentialFuelOil;
    residentialMap["residentialFuelOil"].first = residentialFuelOil;
    minHeap residentialGeothermal;
    residentialMap["residentialGeothermal"].first = residentialGeothermal;
    minHeap residentialKerosene;
    residentialMap["residentialKerosene"].first = residentialKerosene;
    minHeap residentialPetroleum;
    residentialMap["residentialPetroleum"].first = residentialPetroleum;
    minHeap residentialNaturalGas;
    residentialMap["residentialNaturalGas"].first = residentialNaturalGas;
    minHeap residentialWood;
    residentialMap["residentialWood"].first = residentialWood;
    minHeap transportationCoal;
    transportationMap["transportationCoal"].first = transportationCoal;
    minHeap transportationFuelOil;
    transportationMap["transportationFuelOil"].first = transportationFuelOil;
    minHeap transportationPetroleum;
    transportationMap["transportationPetroleum"].first = transportationPetroleum;
    minHeap transportationNaturalGas;
    transportationMap["transportationNaturalGas"].first = transportationNaturalGas;
    //Hashtable
    Hashtable commercialCoalHash;
    commercialMap["commercialCoal"].second = commercialCoalHash;
    Hashtable commercialFuelOilHash;
    commercialMap["commercialFuelOil"].second = commercialFuelOilHash;
    Hashtable commercialGeothermalHash;
    commercialMap["commercialGeothermal"].second = commercialGeothermalHash;
    Hashtable commercialHydroPowerHash;
    commercialMap["commercialHydroPower"].second = commercialHydroPowerHash;
    Hashtable commercialKeroseneHash;
    commercialMap["commercialKerosene"].second = commercialKeroseneHash;
    Hashtable commercialPetroleumHash;
    commercialMap["commercialPetroleum"].second = commercialPetroleumHash;
    Hashtable commercialNaturalGasHash;
    commercialMap["commercialNaturalGas"].second = commercialNaturalGasHash;
    Hashtable commercialSolarHash;
    commercialMap["commercialSolar"].second = commercialSolarHash;
    Hashtable commercialWindHash;
    commercialMap["commercialWind"].second = commercialWindHash;
    Hashtable commercialWoodHash;
    commercialMap["commercialWood"].second = commercialWoodHash;
    Hashtable electricalCoalHash;
    electricalMap["electricalCoal"].second = electricalCoalHash;
    Hashtable electricalFuelOilHash;
    electricalMap["electricalFuelOil"].second = electricalFuelOilHash;
    Hashtable electricalNaturalGasHash;
    electricalMap["electricalNaturalGas"].second = electricalNaturalGasHash;
    Hashtable electricalSolarHash;
    electricalMap["electricalSolar"].second = electricalSolarHash;
    Hashtable electricalWoodHash;
    electricalMap["electricalWood"].second = electricalWoodHash;
    Hashtable industrialCoalHash;
    industrialMap["industrialCoal"].second = industrialCoalHash;
    Hashtable industrialFuelOilHash;
    industrialMap["industrialFuelOil"].second = industrialFuelOilHash;
    Hashtable industrialGeothermalHash;
    industrialMap["industrialGeothermal"].second = industrialGeothermalHash;
    Hashtable industrialHydroPowerHash;
    industrialMap["industrialHydroPower"].second = industrialHydroPowerHash;
    Hashtable industrialKeroseneHash;
    industrialMap["industrialKerosene"].second = industrialKeroseneHash;
    Hashtable industrialPetroleumHash;
    industrialMap["industrialPetroleum"].second = industrialPetroleumHash;
    Hashtable industrialNaturalGasHash;
    industrialMap["industrialNaturalGas"].second = industrialNaturalGasHash;
    Hashtable industrialOtherPetroleumHash;
    industrialMap["industrialOtherPetroleum"].second = industrialOtherPetroleumHash;
    Hashtable industrialSolarHash;
    industrialMap["industrialSolar"].second = industrialSolarHash;
    Hashtable industrialWindHash;
    industrialMap["industrialWind"].second = industrialWindHash;
    Hashtable industrialWoodHash;
    industrialMap["industrialWood"].second = industrialWoodHash;
    Hashtable refineryCoalHash;
    refineryMap["refineryCoal"].second = refineryCoalHash;
    Hashtable refineryFuelOilHash;
    refineryMap["refineryFuelOil"].second = refineryFuelOilHash;
    Hashtable refineryNaturalGasHash;
    refineryMap["refineryNaturalGas"].second = refineryNaturalGasHash;
    Hashtable residentialCoalHash;
    residentialMap["residentialCoal"].second = residentialCoalHash;
    Hashtable residentialFuelOilHash;
    refineryMap["refineryFuelOil"].second = refineryFuelOilHash;
    Hashtable residentialGeothermalHash;
    residentialMap["residentialGeothermal"].second = residentialGeothermalHash;
    Hashtable residentialKeroseneHash;
    residentialMap["residentialKerosene"].second = residentialKeroseneHash;
    Hashtable residentialPetroleumHash;
    residentialMap["residentialPetroleum"].second = residentialPetroleumHash;
    Hashtable residentialNaturalGasHash;
    residentialMap["residentialNaturalGas"].second = residentialNaturalGasHash;
    Hashtable residentialWoodHash;
    residentialMap["residentialWood"].second = residentialWoodHash;
    Hashtable transportationCoalHash;
    transportationMap["transportationCoal"].second = transportationCoalHash;
    Hashtable transportationFuelOilHash;
    transportationMap["transportationFuelOil"].second = transportationFuelOilHash;
    Hashtable transportationPetroleumHash;
    transportationMap["transportationPetroleum"].second = transportationPetroleumHash;
    Hashtable transportationNaturalGasHash;
    transportationMap["transportationNaturalGas"].second = transportationNaturalGasHash;

    string stateName;
    string yearString;
    string ignoreCell;
    int year;
    string usageString;
    int usage;
    ifstream inFile;
    inFile.open("energy.csv");
    if (inFile.is_open()) {
        string fileLine;
        getline(inFile, fileLine);
        while (getline(inFile, fileLine)) {
            istringstream stream(fileLine);
            getline(stream, stateName, ',');
            stateName = removeQuotes(stateName);
            getline(stream, yearString, ',');
            yearString = removeQuotes(yearString);
            year = stoi(yearString);
            string forHash = stateName + "-" + yearString;
            getline(stream, ignoreCell, ',');
            for (unsigned int i = 0; i < 39; i++) {
                getline(stream, usageString, ',');
                usageString = removeQuotes(usageString);
                usage = stoi(usageString);
                state currentState(stateName, year, usage);
                if (i == 0) {
                    commercialCoal.insertState(currentState);
                    commercialCoalHash.insert(forHash,currentState);
                }
                else if (i == 1) {
                    commercialFuelOil.insertState(currentState);
                    commercialFuelOilHash.insert(forHash,currentState);
                }
                else if (i == 2) {
                    commercialGeothermal.insertState(currentState);
                    commercialGeothermalHash.insert(forHash,currentState);
                }
                else if (i == 3) {
                    commercialHydroPower.insertState(currentState);
                    commercialHydroPowerHash.insert(forHash,currentState);
                }
                else if (i == 4) {
                    commercialKerosene.insertState(currentState);
                    commercialKeroseneHash.insert(forHash,currentState);
                }
                else if (i == 5) {
                    commercialPetroleum.insertState(currentState);
                    commercialPetroleumHash.insert(forHash,currentState);
                }
                else if (i == 6) {
                    commercialNaturalGas.insertState(currentState);
                    commercialNaturalGasHash.insert(forHash,currentState);
                }
                else if (i == 7) {
                    commercialSolar.insertState(currentState);
                    commercialSolarHash.insert(forHash,currentState);
                }
                else if (i == 8) {
                    commercialWind.insertState(currentState);
                    commercialWindHash.insert(forHash,currentState);
                }
                else if (i == 9) {
                    commercialWood.insertState(currentState);
                    commercialWoodHash.insert(forHash,currentState);
                }
                else if (i == 10) {
                    electricalCoal.insertState(currentState);
                    electricalCoalHash.insert(forHash,currentState);
                }
                else if (i == 11) {
                    electricalFuelOil.insertState(currentState);
                    electricalFuelOilHash.insert(forHash,currentState);
                }
                else if (i == 12) {
                    electricalNaturalGas.insertState(currentState);
                    electricalNaturalGasHash.insert(forHash,currentState);
                }
                else if (i == 13) {
                    electricalWood.insertState(currentState);
                    electricalWoodHash.insert(forHash,currentState);
                }
                else if (i == 14) {
                    industrialCoal.insertState(currentState);
                    industrialCoalHash.insert(forHash,currentState);
                }
                else if (i == 15) {
                    industrialFuelOil.insertState(currentState);
                    industrialFuelOilHash.insert(forHash,currentState);
                }
                else if (i == 16) {
                    industrialGeothermal.insertState(currentState);
                    industrialGeothermalHash.insert(forHash,currentState);
                }
                else if (i == 17) {
                    industrialHydroPower.insertState(currentState);
                    industrialHydroPowerHash.insert(forHash,currentState);
                }
                else if (i == 18) {
                    industrialKerosene.insertState(currentState);
                    industrialKeroseneHash.insert(forHash,currentState);
                }
                else if (i == 19) {
                    industrialPetroleum.insertState(currentState);
                    industrialPetroleumHash.insert(forHash,currentState);
                }
                else if (i == 20) {
                    industrialNaturalGas.insertState(currentState);
                    industrialNaturalGasHash.insert(forHash,currentState);
                }
                else if (i == 21) {
                    industrialOtherPetroleum.insertState(currentState);
                    industrialOtherPetroleumHash.insert(forHash,currentState);
                }
                else if (i == 22) {
                    industrialSolar.insertState(currentState);
                    industrialSolarHash.insert(forHash,currentState);
                }
                else if (i == 23) {
                    industrialWind.insertState(currentState);
                    industrialWindHash.insert(forHash,currentState);
                }
                else if (i == 24) {
                    industrialWood.insertState(currentState);
                    industrialWoodHash.insert(forHash,currentState);
                }
                else if (i == 25) {
                    refineryCoal.insertState(currentState);
                    refineryCoalHash.insert(forHash,currentState);
                }
                else if (i == 26) {
                    refineryFuelOil.insertState(currentState);
                    refineryFuelOilHash.insert(forHash,currentState);
                }
                else if (i == 27) {
                    refineryNaturalGas.insertState(currentState);
                    refineryNaturalGasHash.insert(forHash,currentState);
                }
                else if (i == 28) {
                    residentialCoal.insertState(currentState);
                    residentialCoalHash.insert(forHash,currentState);
                }
                else if (i == 29) {
                    residentialFuelOil.insertState(currentState);
                    residentialFuelOilHash.insert(forHash,currentState);
                }
                else if (i == 30) {
                    residentialGeothermal.insertState(currentState);
                    residentialGeothermalHash.insert(forHash,currentState);
                }
                else if (i == 31) {
                    residentialKerosene.insertState(currentState);
                    residentialKeroseneHash.insert(forHash,currentState);
                }
                else if (i == 32) {
                    residentialPetroleum.insertState(currentState);
                    residentialPetroleumHash.insert(forHash,currentState);
                }
                else if (i == 33) {
                    residentialNaturalGas.insertState(currentState);
                    residentialNaturalGasHash.insert(forHash,currentState);
                }
                else if (i == 34) {
                    residentialWood.insertState(currentState);
                    residentialWoodHash.insert(forHash,currentState);
                }
                else if (i == 35) {
                    transportationCoal.insertState(currentState);
                    transportationCoalHash.insert(forHash,currentState);
                }
                else if (i == 36) {
                    transportationFuelOil.insertState(currentState);
                    transportationFuelOilHash.insert(forHash,currentState);
                }
                else if (i == 37) {
                    transportationPetroleum.insertState(currentState);
                    transportationPetroleumHash.insert(forHash,currentState);
                }
                else if (i == 38) {
                    transportationNaturalGas.insertState(currentState);
                    transportationNaturalGasHash.insert(forHash,currentState);
                }
            }
        }
    }
    else {
        cout << "file did not open";
    }
}

void checkQuiz(string guess, string correct) {
    cout << "Heap: ";
    if (guess.compare(correct) == 0) {
        cout << "YAY! " << guess << " was Correct! .*･ﾟ☆ヾ(*∇*)ﾉ☆ﾟ･*.*" << endl;
    }
    else {
        cout << "Awww, not quite Σ(ＴωＴ*), it was (" << correct << ")" << endl;
    }
}