#include "smartArray.h"
class smartArray
{
private:
    int size;
    int capacity;
    int* arr;
public:
    smartArray(int _capacity) : size(0), capacity(_capacity) {
        arr = new int[capacity];
    }
    ~smartArray() {
        delete[] arr;
    }
    void addElement(int element) {
        if (size >= capacity) {
            int newCapacity = 2 * capacity;
            int* newArray = new int[newCapacity];
            for (int i = 0; i < size; i++) {
                newArray[i] = arr[i];
            }
            delete[] arr;
            arr = newArray;
            capacity = newCapacity;
        }
        arr[size] = element;
        size++;
    }
    int getElement(int index) {
        if (index < 0 || index >= size) {
            std::cerr << "Invalid index" << std::endl;
            return 0;
        }
        return arr[index];
    }
    void copyArray(smartArray& newArr) {
        delete[] arr;
        capacity = newArr.capacity;
        size - newArr.size;
        arr = new int[capacity];
        for (int i = 0; i < size; i++) {
            arr[i] = newArr.arr[i];
        }
    }

};