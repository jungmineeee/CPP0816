#include <iostream>

using namespace std;

bool IsPositive(int num)
{
	if (num <= 0)
		return false;
	else
		return true;
}

int main(void)
{
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos)
	{
		cout << "Positive number" << endl;
	}
	else
	{
		cout << "Negative number or zero" << endl;
	}

	system("pause");  // VC++ 에서만 필요
	return 0;
}
