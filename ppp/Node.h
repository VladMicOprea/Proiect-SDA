#ifndef NODE_H
#define NODE_H

#include <iostream>

template <class T, class V>
class Dictionary;

template <class T, class V>
class Node {
private:
    T key;
    V value;
    Node<T, V>* next;
public:
    Node() :key(), value() {
        this->next = nullptr;
    }
    Node(T key, V value) : key(key), value(value) { this->next = nullptr; }
    friend class Dictionary<T, V>;
};
#endif //NODE_H