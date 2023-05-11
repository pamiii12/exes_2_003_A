#include <iostream>
using namespace std;

int fahmi[21];
int n;


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 21))
			break;
		else
			cout << "\nArray should have minimum 1 qand maximum 21 elements";

	}

}

void binearSearch()
{
	int lowerBound = 0;
	int upperBound = n - 1;
	int mid = lowerBound + upperBound / 2;

	while (true)
	if (fahmi[mid] = n)
	{
		cout << "Found" << endl;
		break;
	}
	if (n < fahmi[mid])
	{
		upperBound = mid - 1;
	}
	if (n > fahmi[mid]) 
	{
		lowerBound = mid + 1;
	}
	if (lowerBound <= upperBound)
	{
		mid = lowerBound + upperBound / 2; 
	}
	else cout << "Not Found" << endl;
	
}

int main()
{
	input();
	binearSearch();
}