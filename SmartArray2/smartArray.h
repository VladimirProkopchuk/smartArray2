#pragma once
#include <iostream>
class smartArray
{
private:
    int size;
    int capacity;
    int* arr;
public:
    smartArray(int _capacity);
    ~smartArray();
    void addElement(int element);
    int getElement(int index);
    void copyArray(smartArray& newArr);

};




