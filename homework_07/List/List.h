//
// Created by isaac on 01.08.2020.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H

#include <iostream>
#include <exception>

using std::cout;
using std::endl;
using std::exception;

template<class T>
class List {


    class Node {
    public:
        Node(T data, Node *pointer = nullptr) : data(data) { p_next = pointer; };
        T data;
        Node *p_next;

    };

    int size;
    Node *head;
    Node *prime;

public:

    List() {
        head = nullptr;
        size = 0;
        prime = nullptr;
    }

    ~List();

    void push_back(T value);
    void push_front(T value);
    void insert(int value, int index);

    int get_size() const { return size; };
    void show_list() const;

    int pop();
    int pop_front();
    void clear();

    void begin();
    void end();


    T &operator[](const int index) const;
    T &operator[](int index);

    T &operator*();

    T& operator++();
    T& operator--();

    T operator++(int);
    T operator--(int);

    const bool operator == (const List& obj);
    const bool operator != (const List& obj);

    T operator + (const int value);


};


template<typename T>
void List<T>::push_back(T value) {
    if (head == nullptr) {
        head = new Node(value);
        prime = head;
        size++;
    } else {
        Node *temporary = this->head;
        while (temporary->p_next != nullptr) {
            temporary = temporary->p_next;
        }
        temporary->p_next = new Node(value);
        size++;
    }


}

template<typename T>
void List<T>::show_list() const {
    Node *temporary = this->head;
    for (int i = 0; i < size; i++) {
        cout << temporary->data << endl;
        temporary = temporary->p_next;
    }
}

template<typename T>
void List<T>::insert(int value, int index) {
    Node *temporary = this->head;
    Node *next_temporary = nullptr;

    if (index < size) {
        for (int i = 0; i < index; i++) {
            if (i < index - 1)
                temporary = temporary->p_next;
            next_temporary = temporary->p_next;
        }

        Node *new_node = new Node(value, next_temporary);
        temporary->p_next = new_node;
        size++;
    } else
        cout << "ошибка, выход за предел списка." << endl;
}

template<typename T>
int List<T>::pop() {
    Node *temporary = this->head;
    int result = 0;

    for (int i = 0; i < size - 1; i++) {
        temporary = temporary->p_next;
    }

    result = temporary->data;
    delete[] temporary;
    temporary = nullptr;
    size--;

    return result;
}

template<class T>
T &List<T>::operator[](const int index) const {
    Node *temporary = this->head;
    for (int i = 0; i < index; i++)
        temporary = temporary->p_next;
    return temporary->data;
}


template<class T>
T &List<T>::operator[](int index) {
    Node *temporary = this->head;
    for (int i = 0; i < index; i++)
        temporary = temporary->p_next;
    return temporary->data;
}

//template<class T>
//T &List<T>::operator++() {
//    Node* temporary = this->head;
//    temporary = temporary->p_next;
//    return temporary->data;
//}

template<class T>
List<T>::~List() {
    clear();
}

template<class T>
int List<T>::pop_front() {
    Node *temporary = this->head;
    int result = head->data;
    head = head->p_next;

    delete temporary;
    size--;

    return result;

}

template<class T>
void List<T>::clear() {
    while (size) {
        pop_front();
    }
}

template<class T>
void List<T>::push_front(T value) {
    head = new Node(value, head);
    size++;
}

template<class T>
void List<T>::begin() {
    prime = head;
}

template<class T>
void List<T>::end() {
    while (prime->p_next != nullptr)
        prime = prime->p_next;
}

template<class T>
T &List<T>::operator*() {
    return prime->data;
}

template<class T>
T &List<T>::operator++() {
    prime = prime->p_next;
    try {
        if (!prime) {
            throw std::runtime_error("Выход за пределы списка");
        }
    }
    catch (std::exception &exception) {
        std::cerr << "Ошибка: " << exception.what() << endl;
    }
    return prime->data;
}

template<class T>
T &List<T>::operator--() {
    Node* temporary = head;

    while (temporary->p_next != prime)
        temporary = temporary->p_next;
    prime = temporary;
    try {
        if (!prime) {
            throw std::runtime_error("Выход за пределы списка");
        }
    }
    catch (std::exception &exception) {
        std::cerr << "Ошибка: " << exception.what() << endl;
    }

    return prime->data;
}

template<class T>
T List<T>::operator++(int) {
    Node temp(prime->data);

    ++(*this);
    return temp.data;
}

template<class T>
T List<T>::operator--(int) {
    Node temp(prime->data);

    --(*this);
    return temp.data;
}

template<class T>
const bool List<T>::operator==(const List &obj) {
    if(this->prime == obj.prime)
        return true;
    return false;
}

template<class T>
const bool List<T>::operator!=(const List &obj) {
    return this->prime != obj.prime;
}

template<class T>
T List<T>::operator+(const int value) {

    for(int i = 0; i < value; i ++)
        prime = prime->p_next;
    try {
        if (!prime) {
            throw std::runtime_error("Выход за пределы списка");
        }
    }
    catch (std::exception &exception) {
        std::cerr << "Ошибка: " << exception.what() << endl;
    }
    return prime->data;
}

#endif //LIST_LIST_H
