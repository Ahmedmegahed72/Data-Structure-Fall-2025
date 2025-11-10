// Stack_Implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stack.h"
#include <iostream>
using namespace std;
int main()
{
	MyStack s;
	s.push(6);
	s.push(3);
	s.push(100);
	s.print_items();
	s.pop();
	s.pop();
	s.print_items();
	system("pause");
}

