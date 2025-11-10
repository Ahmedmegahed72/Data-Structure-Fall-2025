#ifndef STACK_H
#define STACK_H

class MyStack
{
private:
	int* items;
	int top;
public:
	MyStack();
	~MyStack();
	void push(int item);
	int pop();
	int is_full();
	int if_empty();
	void print_items();


};





#endif // !STACK.H

