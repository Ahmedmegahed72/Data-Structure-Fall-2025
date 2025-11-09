
#include <iostream>
using namespace std;

int main()
{
	/*
	//create array and calc sum
	int subjects[6];
	int sum = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> subjects[i];
		sum += subjects[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout<<  subjects[i] <<"  ";
	}
	cout << "Sum = " << sum;
	*/
	/*
	//copy array
	int a[5] = { 1,2,3,4,5 };
	int b[5];
	
	for (int i = 0; i < 5; i++)
	{
		b[i] = a[i];

	}
	for (int j = 0; j < 5; j++)
	{
		cout << " tha value of j = " << b[j]<<" "<<"\n";

	}


	cout << size(b)<<"\n"; //return number of elements

	cout << sizeof(b);	// return total size (bytes)
	*/
	/* 
	* use pointer for first time
	int i = 5;
	int *ptr = &i;
	cout << ptr<<"\n";
	cout << *ptr << "\n";
	cout << i << "\n";
	cout << &i;
	*/
	 
	/*
	// array as pointer
	int a[2] = { 1,2 };
	cout << a << "\n";;
	cout << a + 1 << "\n";;
	cout << *a << "\n";;
	cout << *(a + 1);
	*/
	 // dynamic memory allocation
	int n;
	cout << "Enter number of elements: ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// output elements
	cout << "You entered: ";
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}

	delete[] arr;

	cout << "\nMemory freed successfully!\n";



	return 0;
}
