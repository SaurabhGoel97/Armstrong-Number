//Kimberly White
//Example to check whether an integer is an Armstrong number or not

#include <iostream>
using namespace std;

int main()
{
	int origNum, num, rem, digit, sum = 0;

	cout << "Enter a positive integer: ";
	cin >> origNum;

	num = origNum;

	while (num != 0)
	{
		digit = num % 10;
		sum += digit * digit * digit;
		num /= 10;
	}
	if (sum == origNum)
		cout << origNum << " is an Armstrong number.";
	else
		cout << origNum << " is not an Armstrong number.";


	system("pause");
	return 0;
}
