
//
// Created by Santiago on 12/5/22.
//
#include <vector>
#include <string>
#include <iostream>
#include "backEnd.h"

using namespace std;
//#ifndef HASHMAP_FUNCTION_HASHTABLE_H
//#define HASHMAP_FUNCTION_HASHTABLE_H
//
//#endif //HASHMAP_FUNCTION_HASHTABLE_H




//all we really need is insert and find, we can skip deletion - hash Size will be constant(to avoid re-hashing)
class Hashtable{

    int SIZE = 10000;


    int hashFunc(string& StateYear);

public:

    void insert(string& StateYear, state& obj);
    void find(string& StateYear,string correctName);
    Hashtable();
    vector<state> array;
};

//parameter: declare at the beginning
Hashtable::Hashtable() {

    array = vector<state>(SIZE);

}

//hash function: uses prime 29 at the end
int Hashtable::hashFunc(string &StateYear) {

    int hashCode = 0;

    for(int i = 0; i < StateYear.length(); i++){

        hashCode += StateYear[i];
    }

    return hashCode;
}

//inserting the element
void Hashtable::insert(string &StateYear, state &obj) {

    int hashCode = hashFunc(StateYear);

    if(array.at(hashCode).name == ""){

        array.at(hashCode) = obj;
    }
        //collision checking - linear probing
    else{

        int offset = 0;

        while(array.at(hashCode).name != ""){
            offset++;
            hashCode += offset;
        }

        array.at(hashCode) = obj;
    }

}

//finding the item in question
void Hashtable::find(string &StateYear,string correctName) {

    int hashCode = hashFunc(StateYear);
    string StateYearLoc = array.at(hashCode).name + "-" + to_string(array.at(hashCode).year);
    if(StateYear == StateYearLoc){

        cout << array.at(hashCode).name << endl;
    }
    //linear probing
    else{

        StateYearLoc = array.at(hashCode).name + "-" + to_string(array.at(hashCode).year);

        while(StateYear != StateYearLoc){
            hashCode += 1; //offset
            StateYearLoc = array.at(hashCode).name + "-" + to_string(array.at(hashCode).year);
            break;
        }


    }
    int loc = StateYear.find("-");
    string guessState = StateYear.substr(0,loc);
    //new hashcode
    cout << "HashTable Implementation: ";
    if( correctName == guessState){

        cout << "you guessed correctly!!!" << endl;
    }
    else{

        cout << "You didn't guess right... saawwwyyyy" << endl;
    }

}