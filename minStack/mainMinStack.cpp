#include<iostream>

#include "minStack.hpp"

int main()
{
   Stack<int> s;
   s.push(55);
   s.push(66);
   s.push(100);
   
   std::cout<<s.minStack();
    
}