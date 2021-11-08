#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
template < typename T >
void Create(T* a, T size, T Low, T High)
{
	for (T i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
template < typename T >
void Print(T* a, T size)
{

	for (T i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
template < typename T >
T Sum(T* a, T size)
{
	T S = 0;
	for (T i = 0; i < size; i++)
			S += a[i];
	return S;
}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = ";
	cin >> n;
	int* a = new int[n];
	int Low;
	cout << "Low = "; cin >> Low;
	int High;
	cout << "High = "; cin >> High;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "S = " << Sum(a, n) << endl;
	delete[] a;
	return 0;
}