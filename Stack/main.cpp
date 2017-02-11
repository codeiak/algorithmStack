#include <iostream>
#include "Stack.h"

using namespace std;

int main(){

    Stack* s = new Stack();

    cout << "This is were we add elements to the stack" << endl;
    for(int i = 1; i <= 20; i++){
        s->push(i);
    }


    cout << "This is were we remove elements from stack" << endl;
    for(int i = 1; i <= 20; i++){
        s->pop();
    }
    return 0;
}
