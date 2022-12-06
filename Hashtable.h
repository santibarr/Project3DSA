//
// Created by Santiago on 12/5/22.
//
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;
#ifndef HASHMAP_FUNCTION_HASHTABLE_H
#define HASHMAP_FUNCTION_HASHTABLE_H

#endif //HASHMAP_FUNCTION_HASHTABLE_H


struct EnergyProject {

    string stateYear;

private:

    void ReadFile();

    EnergyProject();


};

//all we really need is insert and find, we can skip deletion - hash Size will be constant(to avoid re-hashing)
class Hashtable{

    const int SIZE = 75000;
    vector<EnergyProject> array;

    int hashFunc(string& StateYear);
    bool balanceFactor();


public:

    void insert(string& StateYear, EnergyProject& obj);
    void find(string& StateYear);
    Hashtable();

};

//parameter: declare at the beginning
Hashtable::Hashtable() {

    array = vector<EnergyProject>(SIZE);

}

//hash function: uses prime 29 at the end
int Hashtable::hashFunc(string &StateYear) {

    int hashCode = 0;

    for(int i = 0; i < StateYear.length(); i++){

        hashCode += StateYear[i];
    }

    hashCode = hashCode * 29; //bigger number - prime
    return hashCode;
}

//inserting the element
void Hashtable::insert(string &StateYear, EnergyProject &obj) {

    int hashCode = hashFunc(StateYear);

    if(array.at(hashCode).stateYear == ""){

        array.at(hashCode) = obj;
    }
    //collision checking - linear probing
    else{

        int offset = 0;

        while(array.at(hashCode).stateYear != ""){
            offset++;
            hashCode += offset;
        }

        array.at(hashCode) = obj;
    }

}

//finding the item in question
void Hashtable::find(string &StateYear) {

    int hashCode = hashFunc(StateYear);

    if(StateYear == array.at(hashCode).stateYear){

        cout << array.at(hashCode).stateYear << endl;
    }
    else{

        int offset = 0;
        while(StateYear != array.at(hashCode).stateYear){
            offset++;
            hashCode += offset;
        }

        cout << array.at(hashCode).stateYear << endl;
    }

}