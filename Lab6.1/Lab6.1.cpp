// Lab6.1.cpp
// Михайлов Олександр
//  Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 24

#include <iostream>
#include <cmath>
#include <time.h>
#include <Windows.h>

using namespace std;

void AmountIter(int mas[], const int n)
{
	int amount = 0;

	for (int i = 0; i < n; i++) {
		if (mas[i] <= 0)
			amount++;
	}

	cout << "Amount = " << amount << endl;
}

void SumIter(int mas[], const int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++) {
		if (mas[i] <= 0)
			sum += mas[i];
	}

	cout << "Sum = " << sum << endl;
}

void ChangeIter(int mas[], const int n)
{
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0) {
			cout << 0 << "  ";
		}
		else
			cout << mas[i] << "  ";
	}
}

int AmountRekurs(int mas[], const int i) {
	if (i < 0)
		return 0;
	else
		if (mas[i] <= 0)
			return 1 + AmountRekurs(mas, i - 1);
		else AmountRekurs(mas, i - 1);
}

int SumRekurs(int mas[], const int i) {
	if (i < 0)
		return 0;
	else {
		if (mas[i] <= 0)
			return mas[i] + SumRekurs(mas, i - 1);
		else
			SumRekurs(mas, i - 1);
	}
}

void ChangeRekurs(int mas[], const int i) {
	if (mas[i] < 0)
		cout << 0 << "  ";
	else
		cout << mas[i] << "  ";
	if (i < 21)
		ChangeRekurs(mas, i + 1);
}


int main()
{
	srand((unsigned)time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 22;
	int t[n];

	for (int i = 0; i < n; i++) {
		t[i] = -20 + rand() % (37 - (-20) + 1);
		cout << t[i] << " ";
	}
	cout << endl; cout << endl;

	// Критерій — всі, крім: додатних або кратних 5
	// 1) кількість 2) сума 3) замінити нулями

	// Ітераційний
	cout << "Ітераційний спосіб:" << endl;
	AmountIter(t, n);
	SumIter(t, n);
	ChangeIter(t, n);
	cout << endl; cout << endl;

	// Рекурсивний
	cout << "Рекурсивний спосіб:" << endl;
	cout << "Amount = " << AmountRekurs(t, n - 1) << endl;
	cout << "Sum = " << SumRekurs(t, n - 1) << endl;
	ChangeRekurs(t, 0);
	cout << endl; cout << endl;


	return 0;
}
