#ifndef STACK_H
#define STACK_H

#define MAX  2

class Stack{
    private:
        int* data; //Array that we are going to use for the stack
        int sizes;      //size of the stack
        int index;      //number of elements in the stack

    public:
        Stack();
        ~Stack();
        void push(int);     //Push elements into the stack
        void pop();         //Pop element out of the stack
        int top();          //Returns the top element of the stack
};
#endif // STACK_H


