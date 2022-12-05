// HashMapClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//citation: https://aozturk.medium.com/simple-hash-map-hash-table-implementation-in-c-931965904250
// Hash node class template
template <typename K, typename V>
class HashNode {
public:
    HashNode(const K& key, const V& value) :
        key(key), value(value), next(NULL) {
    }

    K getKey() const {
        return key;
    }

    V getValue() const {
        return value;
    }

    void setValue(V value) {
        HashNode::value = value;
    }

    HashNode* getNext() const {
        return next;
    }

    void setNext(HashNode* next) {
        HashNode::next = next;
    }

private:
    // key-value pair
    K key;
    V value;
    // next bucket with the same key
    HashNode* next;
};