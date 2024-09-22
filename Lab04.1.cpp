#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double P;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	P = 1;
	i = k;
	while (i <= N)
	{
		P *= 1.0 / (i * i) ;
		i++;
	}
	cout << P << endl;
	P = 1;
	i = k;
	do {
		P *= 1.0 / (i * i);
		i++;
	} while (i <= N);
	cout << P << endl;
	P = 1;
	for (i = k; i <= N; i++)
	{
		P *= 1.0 / (i * i);
	}
	cout << P << endl;
	P = 1;
	for (i = N; i >= k; i--)
	{
		P *= 1.0 / (i * i);
	}
	cout << P << endl;
	return 0;
}