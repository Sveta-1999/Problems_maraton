#ifndef THREESTACK_H
#define THREESTACK_H

#include <iostream>
#include <vector>

template <class T>
class Stack {
public:
    Stack(){m_sp = -1;}
    ~Stack(){};
    void push(T);
    void pop();
    bool isEmpty(); 
    T peek();
    T minStack();

private:
    int m_sp;
    T minElement;
    std::vector <T> m_vec;
    
};

#endif //THREESTACK_H
