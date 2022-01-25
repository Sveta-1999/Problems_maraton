#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>
#include <stack>

template <class T>
class Stack {
public:
    Stack(){m_sp = -1;}
    ~Stack(){};
    void push(T);
    void pop();
    bool isEmpty(); 
    T peek();


private:
    int m_sp;
    std::vector <T> m_vec;
    std::stack<T> stack;
};

#endif //STACK_H