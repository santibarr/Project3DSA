
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

    const int SIZE = 75000;
    vector<state> array;

    int hashFunc(string& StateYear);
    bool balanceFactor();


public:

    void insert(string& StateYear, state& obj);
    void find(string& StateYear);
    Hashtable();

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

    hashCode = hashCode * 29; //bigger number - prime
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
void Hashtable::find(string &StateYear) {

    int hashCode = hashFunc(StateYear);

    if(StateYear == array.at(hashCode).name){

        cout << array.at(hashCode).name << endl;
    }
    else{

        int offset = 0;
        while(StateYear != array.at(hashCode).name){
            offset++;
            hashCode += offset;
        }

        cout << array.at(hashCode).name << endl;
    }

}