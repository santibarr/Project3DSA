#include <iostream>
#include "backEnd.cpp"
#include <set>
using namespace std;

int main()
{
    {
        unordered_map<string, pair<minHeap,Hashtable>> commercialMap;
        unordered_map<string, pair<minHeap,Hashtable>> electricalMap;
        unordered_map<string, pair<minHeap,Hashtable>> industrialMap;
        unordered_map<string, pair<minHeap,Hashtable>> refineryMap;
        unordered_map<string, pair<minHeap,Hashtable>> residentialMap;
        unordered_map<string, pair<minHeap,Hashtable>> transportationMap;
        set<string> stateList;
        insertStateNames(stateList);
        string optionString;
        int choice;
        string energyChoiceString;
        int energyChoice;
        printMenu();
        // call functions
        getline(cin, optionString);
        while (!isInputValid(optionString) || (stoi(optionString) < 1 || stoi(optionString) > 3) || (stoi(optionString) == 2)) {
            if ((stoi(optionString) == 2)) {
                cout << "To Play The Energy Guessing Game, You Must Choose Which State Consumed The Lowest Type of Energy of Your Choosing.\n";
                printMenu();
                getline(cin, optionString);
            }
            else {
                invalidMenuPrint();
                getline(cin, optionString);
            }
        }
        choice = stoi(optionString);
        readEnergyFile(commercialMap, electricalMap, industrialMap, refineryMap, residentialMap, transportationMap);
        if (choice == 1) {
            printEnergyMenu();
            getline(cin, energyChoiceString);
            while (!isInputValid(energyChoiceString) || (stoi(energyChoiceString) < 1 || stoi(energyChoiceString) > 6)) {
                invalidCategoryPrint();
                getline(cin, energyChoiceString);
            }
            energyChoice = stoi(energyChoiceString);
            if (energyChoice == 1) {
                string energyCommercialString;
                printEnergyOptionsCommercial();
                getline(cin, energyCommercialString);
                while (!isInputValid(energyCommercialString) || (stoi(energyCommercialString) < 1 || stoi(energyCommercialString) > 10)) {
                    invalidCommercialPrint();
                    getline(cin, energyCommercialString);
                }
                int commChoice = stoi(energyCommercialString);
                string guessState;
                string year;
                cout << "Guess the State: ";
                getline(cin, guessState);
                cout << "Guess the year (1960-2009): ";
                getline(cin,year);
                string stateYear = guessState + "-" + year;
                if (commChoice == 1) {
                    // call to compare minHeap of Commercial Coal
                    string correct = commercialMap["commercialCoal"].first.getMin();
                    checkQuiz(guessState, correct);

                    commercialMap["commercialCoal"].second.find(stateYear,correct);
                }
                else if (commChoice == 2) {
                    // call to compare minHeap of Commercial fuel oil
                    string correct = commercialMap["commercialFuelOil"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialFuelOil"].second.find(stateYear,correct);
                }
                else if (commChoice == 3) {
                    // call to compare minHeap of Commercial Geothermal
                    string correct = commercialMap["commercialGeothermal"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialGeothermal"].second.find(stateYear,correct);
                }
                else if (commChoice == 4) {
                    // call to compare minHeap of Commercial Hydropower
                    string correct = commercialMap["commercialHydroPower"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialHydroPower"].second.find(stateYear,correct);
                }
                else if (commChoice == 5) {
                    // call to compare minHeap of Commercial Kerosene
                    string correct = commercialMap["commercialKerosene"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialKerosene"].second.find(stateYear,correct);
                }
                else if (commChoice == 6) {
                    // call to compare minHeap of Commercial Petroleum
                    string correct = commercialMap["commercialPetroleum"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialPetroleum"].second.find(stateYear,correct);
                }
                else if (commChoice == 7) {
                    // call to compare minHeap of Commercial Natural Gas
                    string correct = commercialMap["commercialNaturalGas"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialNaturalGas"].second.find(stateYear,correct);
                }
                else if (commChoice == 8) {
                    // call to compare minHeap of Commercial Solar
                    string correct = commercialMap["commercialSolar"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialSolar"].second.find(stateYear,correct);
                }
                else if (commChoice == 9) {
                    // call to compare minHeap of Commercial Wind
                    string correct = commercialMap["commercialWind"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialWind"].second.find(stateYear,correct);
                }
                else if (commChoice == 10) {
                    // call to compare minHeap of Commercial Wood
                    string correct = commercialMap["commercialWood"].first.getMin();
                    checkQuiz(guessState, correct);
                    commercialMap["commercialWood"].second.find(stateYear,correct);
                }
            }
            else if (energyChoice == 2) {
                string energyElectricalString;
                printEnergyOptionsElectrical();
                getline(cin, energyElectricalString);
                while (!isInputValid(energyElectricalString) || (stoi(energyElectricalString) < 1 || stoi(energyElectricalString) > 5)) {
                    invalidElectricPrint();
                    getline(cin, energyElectricalString);
                }
                int commChoice = stoi(energyElectricalString);
                string guessState;
                string year;
                cout << "Guess the State: ";
                getline(cin, guessState);
                cout << "Guess the year (1960-2009): ";
                getline(cin,year);
                string stateYear = guessState + "-" + year;
                if (commChoice == 1) {
                    // call to compare minHeap of Electrical Coal
                    string correct = electricalMap["electricalCoal"].first.getMin();
                    checkQuiz(guessState, correct);
                    electricalMap["electricalCoal"].second.find(stateYear,correct);
                }
                else if (commChoice == 2) {
                    // call to compare minHeap of Electrical fuel oil
                    string correct = electricalMap["electricalFuelOil"].first.getMin();
                    checkQuiz(guessState, correct);
                    electricalMap["electricalFuelOil"].second.find(stateYear,correct);
                }
                else if (commChoice == 3) {
                    // call to compare minHeap of Electrical Natural Gas
                    string correct = electricalMap["electricalNaturalGas"].first.getMin();
                    checkQuiz(guessState, correct);
                    electricalMap["electricalNaturalGas"].second.find(stateYear,correct);
                }
                else if (commChoice == 4) {
                    // call to compare minHeap of Electrical Solar
                    string correct = electricalMap["electricalSolar"].first.getMin();
                    checkQuiz(guessState, correct);
                    electricalMap["electricalSolar"].second.find(stateYear,correct);
                }
                else if (commChoice == 5) {
                    // call to compare minHeap of Electrical Wood
                    string correct = electricalMap["electricalWood"].first.getMin();
                    checkQuiz(guessState, correct);
                    electricalMap["electricalWood"].second.find(stateYear,correct);
                }
            }
            else if (energyChoice == 3) {
                string energyIndustrialString;
                printEnergyOptionsIndustrial();
                getline(cin, energyIndustrialString);
                while (!isInputValid(energyIndustrialString) || (stoi(energyIndustrialString) < 1 || stoi(energyIndustrialString) > 11)) {
                    invalidIndustrialPrint();
                    getline(cin, energyIndustrialString);
                }
                int commChoice = stoi(energyIndustrialString);
                string guessState;
                string year;
                cout << "Guess the State: ";
                cout << "Guess the year (1960-2009): ";
                getline(cin,year);
                string stateYear = guessState + "-" + year;
                getline(cin, guessState);
                if (commChoice == 1) {
                    // call to compare minHeap of Industrial Coal
                    string correct = industrialMap["industrialCoal"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialCoal"].second.find(stateYear,correct);
                }
                else if (commChoice == 2) {
                    // call to compare minHeap of Industrial fuel oil
                    string correct = industrialMap["industrialFuelOil"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialFuelOil"].second.find(stateYear,correct);
                }
                else if (commChoice == 3) {
                    // call to compare minHeap of Industrial Geothermal
                    string correct = industrialMap["industrialGeothermal"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialGeothermal"].second.find(stateYear,correct);
                }
                else if (commChoice == 4) {
                    // call to compare minHeap of Industrial Hydropower
                    string correct = industrialMap["industrialHydroPower"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialHydroPower"].second.find(stateYear,correct);
                }
                else if (commChoice == 5) {
                    // call to compare minHeap of Industrial Kerosene
                    string correct = industrialMap["industrialKerosene"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialKerosene"].second.find(stateYear,correct);
                }
                else if (commChoice == 6) {
                    // call to compare minHeap of Industrial Petroleum
                    string correct = industrialMap["industrialPetroleum"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialPetroleum"].second.find(stateYear,correct);
                }
                else if (commChoice == 7) {
                    // call to compare minHeap of Industrial Natural Gas
                    string correct = industrialMap["industrialNaturalGas"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialNaturalGas"].second.find(stateYear,correct);
                }
                else if (commChoice == 8) {
                    // call to compare minHeap of Industrial Other Petroleum
                    string correct = industrialMap["industrialOtherPetroleum"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialOtherPetroleum"].second.find(stateYear,correct);
                }
                else if (commChoice == 9) {
                    // call to compare minHeap of Industrial Solar
                    string correct = industrialMap["industrialSolar"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialSolar"].second.find(stateYear,correct);
                }
                else if (commChoice == 10) {
                    // call to compare minHeap of Industrial Wind
                    string correct = industrialMap["industrialWind"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialWind"].second.find(stateYear,correct);
                }
                else if (commChoice == 11) {
                    // call to compare minHeap of Industrial Wood
                    string correct = industrialMap["industrialWood"].first.getMin();
                    checkQuiz(guessState, correct);
                    industrialMap["industrialWood"].second.find(stateYear,correct);
                }
            }
            else if (energyChoice == 4) {
                string energyRefineryString;
                printEnergyOptionsRefinery();
                getline(cin, energyRefineryString);
                while (!isInputValid(energyRefineryString) || (stoi(energyRefineryString) < 1 || stoi(energyRefineryString) > 3)) {
                    invalidRefineryPrint();
                    getline(cin, energyRefineryString);
                }
                int commChoice = stoi(energyRefineryString);
                string guessState;
                string year;
                cout << "Guess the State: ";
                getline(cin, guessState);
                cout << "Guess the year (1960-2009): ";
                getline(cin,year);
                string stateYear = guessState + "-" + year;
                if (commChoice == 1) {
                    // call to compare minHeap of Refinery Coal
                    string correct = refineryMap["refineryCoal"].first.getMin();
                    checkQuiz(guessState, correct);
                    refineryMap["refineryCoal"].second.find(stateYear,correct);
                }
                else if (commChoice == 2) {
                    // call to compare minHeap of Refinery fuel oil
                    string correct = refineryMap["refineryFuelOil"].first.getMin();
                    checkQuiz(guessState, correct);
                    refineryMap["refineryFuelOil"].second.find(stateYear,correct);
                }
                else if (commChoice == 3) {
                    // call to compare minHeap of Refinery Geothermal
                    string correct = refineryMap["refineryNaturalGas"].first.getMin();
                    checkQuiz(guessState, correct);
                    refineryMap["refineryNaturalGas"].second.find(stateYear,correct);
                }
            }
            else if (energyChoice == 5) {
                string energyResidentialString;
                printEnergyOptionsResidential();
                getline(cin, energyResidentialString);
                while (!isInputValid(energyResidentialString) || (stoi(energyResidentialString) < 1 || stoi(energyResidentialString) > 7)) {
                    invalidResidentialPrint();
                    getline(cin, energyResidentialString);
                }
                int commChoice = stoi(energyResidentialString);
                string guessState;
                string year;
                cout << "Guess the State: ";
                cout << "Guess the year (1960-2009): ";
                getline(cin,year);
                string stateYear = guessState + "-" + year;
                getline(cin, guessState);
                if (commChoice == 1) {
                    // call to compare minHeap of Residential Coal
                    string correct = residentialMap["residentialCoal"].first.getMin();
                    checkQuiz(guessState, correct);
                    residentialMap["residentialCoal"].second.find(stateYear,correct);

                }
                else if (commChoice == 2) {
                    // call to compare minHeap of Residential fuel oil
                    string correct = residentialMap["residentialFuelOil"].first.getMin();
                    checkQuiz(guessState, correct);
                    residentialMap["residentialFuelOil"].second.find(stateYear,correct);
                }
                else if (commChoice == 3) {
                    // call to compare minHeap of Residential Geothermal
                    string correct = residentialMap["residentialGeothermal"].first.getMin();
                    checkQuiz(guessState, correct);
                    residentialMap["residentialGeothermal"].second.find(stateYear,correct);
                }
                else if (commChoice == 4) {
                    // call to compare minHeap of Residential Kerosene
                    string correct = residentialMap["residentialKerosene"].first.getMin();
                    checkQuiz(guessState, correct);
                    residentialMap["residentialKerosene"].second.find(stateYear,correct);
                }
                else if (commChoice == 5) {
                    // call to compare minHeap of Residential Petroleum
                    string correct = residentialMap["residentialPetroleum"].first.getMin();
                    checkQuiz(guessState, correct);
                    residentialMap["residentialPetroleum"].second.find(stateYear,correct);
                }
                else if (commChoice == 6) {
                    // call to compare minHeap of Residential Natural Gas
                    string correct = residentialMap["residentialNaturalGas"].first.getMin();
                    checkQuiz(guessState, correct);
                    residentialMap["residentialNaturalGas"].second.find(stateYear,correct);
                }
                else if (commChoice == 7) {
                    // call to compare minHeap of Residential Wood
                    string correct = residentialMap["residentialWood"].first.getMin();
                    checkQuiz(guessState, correct);
                    residentialMap["residentialWood"].second.find(stateYear,correct);
                }
            }
            else if (energyChoice == 6) {
                string energyTransportationString;
                printEnergyOptionsTransportation();
                getline(cin, energyTransportationString);
                while (!isInputValid(energyTransportationString) || (stoi(energyTransportationString) < 1 || stoi(energyTransportationString) > 4)) {
                    invalidTransportationPrint();
                    getline(cin, energyTransportationString);
                }
                int commChoice = stoi(energyTransportationString);
                string guessState;
                string year;
                cout << "Guess the State: ";
                cout << "Guess the year (1960-2009): ";
                getline(cin,year);
                string stateYear = guessState + "-" + year;
                getline(cin, guessState);
                if (commChoice == 1) {
                    // call to compare minHeap of Transportation Coal
                    string correct = transportationMap["transportationCoal"].first.getMin();
                    checkQuiz(guessState, correct);
                    transportationMap["transportationCoal"].second.find(stateYear,correct);
                }
                else if (commChoice == 2) {
                    // call to compare minHeap of Transportation fuel oil
                    string correct = transportationMap["transportationFuelOil"].first.getMin();
                    checkQuiz(guessState, correct);
                    transportationMap["transportationFuelOil"].second.find(stateYear,correct);
                }
                else if (commChoice == 3) {
                    // call to compare minHeap of Transportation Petroleum
                    string correct = transportationMap["transportationPetroleum"].first.getMin();
                    checkQuiz(guessState, correct);
                    transportationMap["transportationPetroleum"].second.find(stateYear,correct);
                }
                else if (commChoice == 4) {
                    // call to compare minHeap of Transportation Natural Gas
                    string correct = transportationMap["transportationNaturalGas"].first.getMin();
                    checkQuiz(guessState, correct);
                    transportationMap["transportationNaturalGas"].second.find(stateYear,correct);
                }
            }
        }
        else if (choice == 3) {
            cout << "Thank you so much for playing and learning. GoodBye! (´^ω^)ノ";
        }
    }
}