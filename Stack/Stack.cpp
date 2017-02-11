#include "Stack.h"
#include <iostream>
#include <math.h>
using namespace std;

Stack::Stack(){
    data = new int[sizes];
    sizes = 2;
    index = -1;
}

Stack::~Stack(){
}

void Stack::push(int element){
    //Create new array to populate with old array
    int* newData;
    //Check if the index is less than the size
    //Yes -> store element in the position of index, increment index
    ++index;
    if(index == sizes){
        sizes *= 2;
        cout << "Stack full\nDoubling size, new size equal = " << sizes << endl;
        //Initialize new array with new size that is doubled
        newData = new int[sizes];
        //Loop through and copy elements from old array to new one
        for(int i = 0; i < sizes; i++){
            newData[i] = data[i];
        }
        //put the element inside the array at index
        newData[index] = element;
    }

    data[index] = element;
    cout << "PUSH(" << element << ")" << endl;

}

void Stack::pop(){
    int removed;
    int* oldData;
    int newSize = sizes;
    //Check the index of the stack if the index represent the quarter of the stack
    int result = ceil(sizes / 4);
    if(index < 0){
        cout << "Stack is empty, nothing to POP()" << endl;
    }else if(index == result){
        newSize /= 2;
        cout << "Stack reduced by half\nNew size = " << newSize << endl;
        oldData = new int[newSize];
        for(int i = 0; i < newSize; i++){
            oldData[i] = data[i];
        }
        removed = oldData[index];
        cout << "POP(" << removed << ")" << endl;
    }else{
        removed = data[index];
        cout << "POP(" << removed << ")" << endl;
    }
    --index;
}

int Stack::top(){
    int result;
    result = data[index];
    return result;
}
