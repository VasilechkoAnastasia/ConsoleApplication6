#include <iostream>
using namespace std;

int main()
{
	int arr[5]{ 10,5,3,6,20 };
	cout << arr[0] << endl; //10
	cout << &arr[0] << endl; //adress
	cout << arr << endl; //adress

	int* ptr = arr;
	cout << ptr << endl;
	cout << *ptr << endl; //10
	ptr++;
	cout << ptr << endl;
	cout << *ptr << endl; //5
	ptr = ptr + 3; //ptr += 3 
	cout << *ptr << endl; //20

}
