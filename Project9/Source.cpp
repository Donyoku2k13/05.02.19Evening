#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void invertdigits(int *k) {
	int temp = *k;
	*k = 0;
	while (temp != 0) {
		*k = *k * 10 + (temp % 10);
		temp /= 10;
	}
}
int Addrightdigit(int d, int k) {
	k = 10 * k + d;
	return k;
}
int Addleftdigit(int d, int k) {
	d = 10 * d + k;
	return d;
}

int main() 
{


	//1.ќписать процедуру InvertDigits(K), мен€ющую пор€док следовани€ цифр целого положительного числа K на обратный (K Ч параметр целого типа, €вл€ющийс€ одновременно входным и выходным). — помощью этой процедуры помен€ть пор€док следовани€ цифр на обратный дл€ каждого из п€ти данных целых чисел. 
	/*int i=0;
	for (int i = 1; i < 5; i++)
	{
		int k;
		printf("K:");
		scanf_s("%i", &k);
		invertdigits(&k);
		printf("K: %i\n", k);
	}
	return 0;*/
	//2.ќписать процедуру AddRightDigit(D, K), добавл€ющую к целому положительному числу K справа цифру D (D Ч входной параметр целого типа, лежащий в диапазоне 0Ц9, K Ч параметр целого типа, €вл€ющийс€ одновременно входным и выходным). — помощью этой процедуры последовательно добавить к данному числу K справа данные цифры D1 и D2, вывод€ результат каждого добавлени€. 
	/*int a, b;
	cout << "k:" << endl;
	cin >> a;
	cout << "d:" << endl;
	cin >> b;
	Addrightdigit(b, a);
	cout << Addrightdigit(b, a) << endl;*/
	//3.ќписать процедуру AddLeftDigit(D, K), добавл€ющую к целому положительному числу K слева цифру D (D Ч входной параметр целого типа, лежащий в диапазоне 1Ц9, K Ч параметр целого типа, €вл€ющийс€ одновременно входным и выходным). — помощью этой процедуры последовательно добавить к данному числу K слева данные цифры D1 и D2, вывод€ результат каждого добавлени€.
	/*int a, b;
	cout << "k:" << endl;
	cin >> a;
	cout << "d:" << endl;
	cin >> b;
	Addleftdigit(b, a);
	cout << Addleftdigit(b, a) << endl;*/ 


	system("pause");
}