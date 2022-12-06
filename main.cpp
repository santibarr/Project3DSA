#include <iostream>
#include "backEnd.cpp"
#include <set>
using namespace std;

int main()
{
    {
        set<string> stateList;
        insertStateNames(stateList);
        string optionString;
        int choice;
        string energyChoiceString;
        int energyChoice;
        printMenu();
        // call functions
        getline(cin, optionString);
        while (!isInputValid(optionString) || (stoi(optionString) < 1 || stoi(optionString) > 3)) {
            invalidMenuPrint();
            getline(cin, optionString);
        }
        choice = stoi(optionString);
        readEnergyFile();
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
                if (commChoice == 1) {
                    string guessState;
                    cout << "Guess the State: ";
                    getline(cin, guessState);

                }
                else if (commChoice == 2) {

                }
                else if (commChoice == 3) {

                }
                else if (commChoice == 4) {

                }
                else if (commChoice == 5) {

                }
                else if (commChoice == 6) {

                }
                else if (commChoice == 7) {

                }
                else if (commChoice == 8) {

                }
                else if (commChoice == 9) {

                }
                else if (commChoice == 10) {

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
            }
            else if (energyChoice == 3) {
                string energyIndustrialString;
                printEnergyOptionsIndustrial();
                getline(cin, energyIndustrialString);
                while (!isInputValid(energyIndustrialString) || (stoi(energyIndustrialString) < 1 || stoi(energyIndustrialString) > 11)) {
                    invalidIndustrialPrint();
                    getline(cin, energyIndustrialString);
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

            }
            else if (energyChoice == 5) {
                string energyResidentialString;
                printEnergyOptionsResidential();
                getline(cin, energyResidentialString);
                while (!isInputValid(energyResidentialString) || (stoi(energyResidentialString) < 1 || stoi(energyResidentialString) > 7)) {
                    invalidResidentialPrint();
                    getline(cin, energyResidentialString);
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

            }
        }
        else if (choice == 2) {
            printEnergyMenu();
            getline(cin, energyChoiceString);
            while (!isInputValid(energyChoiceString) || (stoi(energyChoiceString) < 1 || stoi(energyChoiceString) > 6)) {
                invalidCategoryPrint();
                getline(cin, energyChoiceString);
            }
            energyChoice = stoi(energyChoiceString);
            if (energyChoice == 1) {
                printStateInput(choice, stateList);
            }
            else if (energyChoice == 2) {
                printStateInput(choice, stateList);
            }
            else if (energyChoice == 3) {
                printStateInput(choice, stateList);
            }
            else if (energyChoice == 4) {
                printStateInput(choice, stateList);
            }
            else if (energyChoice == 5) {
                printStateInput(choice, stateList);
            }
            else if (energyChoice == 6) {
                printStateInput(choice, stateList);
            }
        }
        else if (choice == 3) {
            cout << "Thank you so much for playing and learning. GoodBye! (´^ω^)ノ";
        }
    }
}