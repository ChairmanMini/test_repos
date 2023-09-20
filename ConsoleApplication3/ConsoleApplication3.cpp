#include <iostream>
using namespace std;
int main()
{
	int a = 3;
	int& pa = a;
	cout << "a = " << a << "\n" << "pa = " << pa << "\n";
	pa += 2;
	cout << "a = " << a << "\n" << "pa = " << pa << "\n";

}