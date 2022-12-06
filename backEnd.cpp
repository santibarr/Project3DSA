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
    else if (choice == 2) {

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
    cout << "2. Top 10 States with Lowest Usage of...\n";
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

void readEnergyFile() {
    unordered_map<string, pair<minHeap,Hashtable>> commercialMap;
    unordered_map<string, pair<minHeap,Hashtable>> electricalMap;
    unordered_map<string, pair<minHeap,Hashtable>> industrialMap;
    unordered_map<string, pair<minHeap,Hashtable>> refineryMap;
    unordered_map<string, pair<minHeap,Hashtable>> residentialMap;
    unordered_map<string, pair<minHeap,Hashtable>> transportationMap;
    minHeap commercialCoal;
    commercialMap["commercialCoal"].first = commercialCoal;
    minHeap commercialFuelOil;
    commercialMap["commercialFuelOil"].first = commercialFuelOil;
    minHeap commercialGeothermal;
    commercialMap["commercialGeothermal"].first = commercialGeothermal;
    minHeap commercialHydroPower;
    commercialMap["commercialHydroPower"] = commercialHydroPower;
    minHeap commercialKerosene;
    commercialMap["commercialKerosene"] = commercialKerosene;
    minHeap commercialPetroleum;
    commercialMap["commercialPetroleum"] = commercialPetroleum;
    minHeap commercialNaturalGas;
    commercialMap["commercialNaturalGas"] = commercialNaturalGas;
    minHeap commercialSolar;
    commercialMap["commercialSolar"] = commercialSolar;
    minHeap commercialWind;
    commercialMap["commercialWind"] = commercialWind;
    minHeap commercialWood;
    commercialMap["commercialWood"] = commercialWood;
    minHeap electricalCoal;
    electricalMap["electricalCoal"] = electricalCoal;
    minHeap electricalFuelOil;
    electricalMap["electricalFuelOil"] = electricalFuelOil;
    minHeap electricalNaturalGas;
    electricalMap["electricalNaturalGas"] = electricalNaturalGas;
    minHeap electricalWood;
    electricalMap["electricalWood"] = electricalWood;
    minHeap industrialCoal;
    industrialMap["industrialCoal"] = industrialCoal;
    minHeap industrialFuelOil;
    industrialMap["industrialFuelOil"] = industrialFuelOil;
    minHeap industrialGeothermal;
    industrialMap["industrialGeothermal"] = industrialGeothermal;
    minHeap industrialHydroPower;
    industrialMap["industrialHydroPower"] = industrialHydroPower;
    minHeap industrialKerosene;
    industrialMap["industrialKerosene"] = industrialKerosene;
    minHeap industrialPetroleum;
    industrialMap["industrialPetroleum"] = industrialPetroleum;
    minHeap industrialNaturalGas;
    industrialMap["industrialNaturalGas"] = industrialNaturalGas;
    minHeap industrialOtherPetroleum;
    industrialMap["industrialOtherPetroleum"] = industrialOtherPetroleum;
    minHeap industrialSolar;
    industrialMap["industrialSolar"] = industrialSolar;
    minHeap industrialWind;
    industrialMap["industrialWind"] = industrialWind;
    minHeap industrialWood;
    industrialMap["industrialWood"] = industrialWood;
    minHeap refineryCoal;
    refineryMap["refineryCoal"] = refineryCoal;
    minHeap refineryFuelOil;
    refineryMap["refineryFuelOil"] = refineryFuelOil;
    minHeap refineryNaturalGas;
    refineryMap["refineryNaturalGas"] = refineryNaturalGas;
    minHeap residentialCoal;
    residentialMap["residentialCoal"] = residentialCoal;
    minHeap residentialFuelOil;
    residentialMap["residentialFuelOil"] = residentialFuelOil;
    minHeap residentialGeothermal;
    residentialMap["residentialGeothermal"] = residentialGeothermal;
    minHeap residentialKerosene;
    residentialMap["residentialKerosene"] = residentialKerosene;
    minHeap residentialPetroleum;
    residentialMap["residentialPetroleum"] = residentialPetroleum;
    minHeap residentialNaturalGas;
    residentialMap["residentialNaturalGas"] = residentialNaturalGas;
    minHeap residentialWood;
    residentialMap["residentialWood"] = residentialWood;
    minHeap transportationCoal;
    transportationMap["transportationCoal"] = transportationCoal;
    minHeap transportationFuelOil;
    transportationMap["transportationFuelOil"] = transportationFuelOil;
    minHeap transportationPetroleum;
    transportationMap["transportationPetroleum"] = transportationPetroleum;
    minHeap transportationNaturalGas;
    transportationMap["transportationNaturalGas"] = transportationNaturalGas;
    Hashtable commercialCoalHash;
    Hashtable commercialFuelOilHash;
    Hashtable commercialGeothermalHash;
    Hashtable commercialHydroPowerHash;
    Hashtable commercialKeroseneHash;
    Hashtable commercialPetroleumHash;
    Hashtable commercialNaturalGasHash;
    Hashtable commercialSolarHash;
    Hashtable commercialWindHash;
    Hashtable commercialWoodHash;
    Hashtable electricalCoalHash;
    Hashtable electricalFuelOilHash;
    Hashtable electricalNaturalGasHash;
    Hashtable electricalWoodHash;
    Hashtable industrialCoalHash;
    Hashtable industrialFuelOilHash;
    Hashtable industrialGeothermalHash;
    Hashtable industrialHydroPowerHash;
    Hashtable industrialKeroseneHash;
    Hashtable industrialPetroleumHash;
    Hashtable industrialNaturalGasHash;
    Hashtable industrialOtherPetroleumHash;
    Hashtable industrialSolarHash;
    Hashtable industrialWindHash;
    Hashtable industrialWoodHash;
    Hashtable refineryCoalHash;
    Hashtable refineryFuelOilHash;
    Hashtable refineryNaturalGasHash;
    Hashtable residentialCoalHash;
    Hashtable residentialFuelOilHash;
    Hashtable residentialGeothermalHash;
    Hashtable residentialKeroseneHash;
    Hashtable residentialPetroleumHash;
    Hashtable residentialNaturalGasHash;
    Hashtable residentialWoodHash;
    Hashtable transportationCoalHash;
    Hashtable transportationFuelOilHash;
    Hashtable transportationPetroleumHash;
    Hashtable transportationNaturalGasHash;
    string stateName;
    string yearString;
    string ignoreCell;
    Hashtable table;
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