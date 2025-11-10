#include<iostream>
#include "stack.h"
using namespace std;
int max_size;
MyStack::MyStack()
{
	top = -1;
	cout << "enter stack size : ";
	cin >> max_size;
	items = new int[max_size];
}
MyStack::~MyStack()
{
	top = -1;
	delete[] items;

}
int MyStack::is_full()
{
	if (top == max_size - 1)
		return 1;
	else
		return 0;
}
int MyStack::if_empty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
void MyStack::push(int item)
{
	if (is_full())
	{
		cout << "stackoverflow";
		return;
	}
	top++; 
	items[top] = item;
}
int MyStack::pop()
{
	if (if_empty())
	{
		cout << "stackunderflow";
		return -1;
	}
	int item = items[top];
	top--;
	return item;

}
void MyStack::print_items()
{
	if (if_empty()) {
		cout << "Stack is empty.\n";
		return;
	}
	for (int i = 0; i <= top; i++)
	{
		cout << items[i] << "\n";
	}
	cout << endl;
}