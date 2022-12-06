#include <iostream>
#include "statePowerUse.h"
#include "minHeap.h"
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
        else if (choice == 2) {
            printEnergyMenu();
            getline(cin, energyChoiceString);
            while (!isInputValid(energyChoiceString) || (stoi(energyChoiceString) < 1 || stoi(energyChoiceString) > 6)) {
                invalidCategoryPrint();
                getline(cin, energyChoiceString);
            }
            energyChoice = stoi(energyChoiceString);
            if (energyChoice == 1) {

            }
            else if (energyChoice == 2) {

            }
            else if (energyChoice == 3) {

            }
            else if (energyChoice == 4) {

            }
            else if (energyChoice == 5) {

            }
            else if (energyChoice == 6) {

            }
        }
        else if (choice == 3) {
            cout << "Thank you so much for playing and learning. GoodBye! (´^ω^)ノ";
        }
    }
}