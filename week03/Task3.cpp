// Exercise3.cpp Да се напише програма, която въвежда число и извежда всички съвършени числа в интервала от 1 до числото 
// и техните прости делители (във формат perfect - divisor1, divisor2, ..., divisorN).
//

#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i < num; i++)
	{
		
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			cout << sum << "-";
			for (int k = 2; k <= sum; k++)
			{
				if (sum % k == 0)
				{
					bool isPrime = true;
					for (int h = 2; h < k && isPrime == true; h++)
					{
						if (k % h == 0)
						{
							isPrime = false;
						}

					}
					if (isPrime)
					{
						cout << k << ", ";
					}
				}
			}
			cout << endl;
		}
	}

	return 0;
}

