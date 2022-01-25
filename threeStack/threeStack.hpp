#include <iostream>
#include <vector>

#include "threeStack.h"

template <typename T>
Stack<T>::Stack()
{
	sizeStack1 = (m_max / 3);
	sizeStack2 = (m_max * 2 / 3);
    sizeStack3 = (m_max);
    m_vec.reserve(m_max);
}

template <typename T>
Stack<T>::~Stack()
{

}

template<typename T>
void Stack<T>::pushStack1(T obj)
{
    if(sizeStack1 > 0 && sizeStack1 <= m_max / 3)
    {
        m_vec.push_back(obj);
        m_sp++;
    }
    
}

template<typename T>
void Stack<T>::pushStack2(T obj)
{
    if(sizeStack2 > m_max / 3 && sizeStack1 <= m_max )
    {
        m_vec.push_back(obj);
        m_sp++;
    }
    
}

template<typename T>
void Stack<T>::pushStack3(T obj)
{
    if(sizeStack2 > m_max * 2 / 3 && sizeStack1 <= m_max * 2 / 3)
    {
        m_vec.push_back(obj);
        m_sp++;
    }
    
}

template<typename T>
void Stack<T>::popStack1()
{
    if(sizeStack1 > 0 && sizeStack1 <= m_max / 3)
    {
        m_sp--;
    }
    
}

template<typename T>
void Stack<T>::popStack2()
{
    if(sizeStack2 > m_max / 3 && sizeStack1 <= m_max )
    {
        m_peekStack2--;
    }
    
}

template<typename T>
void Stack<T>::popStack3()
{
    if(sizeStack2 > m_max * 2 / 3 && sizeStack1 <= m_max * 2 / 3)
    {
        m_peekStack3--;
    }
    
}

template<typename T>
bool Stack<T>::isEmptyStack()
{
    if(m_sp == -1)
    {
        return true;
    }
    return false;
}

template<typename T>
T Stack<T>::peekStack1()
{
    return m_vec[m_sp];
}

template<typename T>
T Stack<T>::peekStack2()
{
    return m_peekStack2 = m_max / 3 - 1;
}

template<typename T>
T Stack<T>::peekStack3()
{
    return m_peekStack3 = m_max * 2 / 3 - 1;
}

