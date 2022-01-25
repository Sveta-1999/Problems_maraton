#ifndef THREESTACK_H
#define THREESTACK_H

#include <iostream>
#include <vector>

template <class T>
class Stack {
public:
    Stack();
    ~Stack();
    void pushStack1(T);
    void popStack1();
    bool isEmptyStack(); 
    T peekStack1();
public:
    void pushStack2(T);
    void popStack2();
    T peekStack2();
public:
    void pushStack3(T);
    void popStack3();
    T peekStack3();

private:
    int m_sp;
    int m_max = 60;
    std::vector <T> m_vec;
    int sizeStack1;
    int sizeStack2;
    int sizeStack3;
    int m_peekStack2;
    int m_peekStack3;

};

#endif //THREESTACK_H
