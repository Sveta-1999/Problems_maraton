#include <iostream>
#include <vector>

#include "sortStack.h"

template<typename T>
void Stack<T>::push(T obj)
{
    if(stack.empty())
    {
        m_vec.push_back(obj);
        m_sp++;
    }
    else if(obj < stack.top())
    {
        stack.push(obj);
    }
    else
	{
		std::stack<T> tmp;
		while ((!sorted.empty()) && (obj >= sorted.top()))
		{
			tmp.push(sorted.top());
			sorted.pop();
		}
		tmp.push(obj);
		while (!tmp.empty())
		{
			sorted.push(tmp.top());
			tmp.pop();
		}
	}
    
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

