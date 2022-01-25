#include <iostream>
#include <vector>

#include "minStack.h"

template<typename T>
void Stack<T>::push(T obj)
{   
    m_vec.push_back(obj);
    m_sp++;

    if(minElement > obj)
    {
        minElement = obj;
    }
}

template<typename T>
T Stack<T>::minStack()
{
    return minElement ;
}


template<typename T>
void Stack<T>::pop()
{
    m_sp--;
                            
}

template<typename T>
bool Stack<T>::isEmpty()
{
    if(m_sp == -1)
    {
        return true;
    }
    return false;
}

template<typename T>
T Stack<T>::peek()
{
    return m_vec[m_sp];
}

