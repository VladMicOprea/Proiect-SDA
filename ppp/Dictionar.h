#ifndef ARRAY_H_DICTIONARY_H
#define ARRAY_H_DICTIONARY_H

#include "array.h"
#include "Node.h"
#include "iostream"

template<class T, class V>
class Dictionary {
private:
    Node<T, V>* head;
    int size;
public:
    Dictionary() {
        this->head = nullptr;
        size = 0;
    }

    void add(T key, V value)
    {
        if (head == nullptr)
        {
            head = new Node<T, V>(key, value);
            this->size++;
        }
        else {
            Node<T, V>* p = head;
            while (p->next != nullptr && p->key != key)
            {
                p = p->next;
            }
            if (p->key == key) p->value = value;
            else p->next = new Node<T, V>(key, value), this->size++;
        }
    }

    void update(T key1, V value1, T key2, V value2)
    {
        Node<T, V>* p = head;
        while (p != nullptr) {
            if (p->key == key1) {
                p->key = key2;
                p->value = value2;
            }
            p = p->next;
        }
    }

    void deleting(T key, V value)
    {
        Node<T, V>* p = head;
        Node<T, V> t;
        if (p->key == key)
        {
            t = *head;
            head = p->next;
            this->size--;
        }
        else
            while (p->next != nullptr)
            {
                if (p->next->key == key)
                {
                    t = *p->next;
                    p->next = p->next->next;
                    this->size--;
                }
                else
                    p = p->next;
            }
    }

    V search(T key) {
        Node<T, V>* p = head;
        while (p != nullptr) {
            if (p->key == key)
                return p->value;
            p = p->next;
        }
        return {};
    }

    bool exist(T key) {
        Node<T, V>* p = head;
        while (p != nullptr) {
            if (p->key == key)
                return true;
            p = p->next;
        }
        return false;
    }

    int getSize() {
        return this->size;
    }

    Array<V> getAll()
    {
        Array<V> result;
        Node<T, V>* p = head;
        while (p != nullptr) {
            result.add(p->value);
            p = p->next;
        }
        return result;
    }
};


#endif //DICTIONARY_H