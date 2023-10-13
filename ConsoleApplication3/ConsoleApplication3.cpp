#include <iostream>
using namespace std;
int main()
{
	int decade = 1488;
	int *arr = new int[11];
	int i = 1;
	while (decade > 0)
	{
		arr[i] = decade % 2;
		decade /= 2;
		i++;
	}
	//arr[] = new int[i]
	for (int i = 0; i < sizeof(arr); i++)
	{
			int temp = 0;
			temp = arr[i];
			arr[i] = arr[sizeof(arr) - 1 - i];
			arr[sizeof(arr) - 1 - i] = temp;
	}
	for (int i = 0; i < sizeof(arr); i++)
	{
		cout << arr[i];
	}

}