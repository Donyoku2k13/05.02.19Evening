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


	//1.������� ��������� InvertDigits(K), �������� ������� ���������� ���� ������ �������������� ����� K �� �������� (K � �������� ������ ����, ���������� ������������ ������� � ��������). � ������� ���� ��������� �������� ������� ���������� ���� �� �������� ��� ������� �� ���� ������ ����� �����. 
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
	//2.������� ��������� AddRightDigit(D, K), ����������� � ������ �������������� ����� K ������ ����� D (D � ������� �������� ������ ����, ������� � ��������� 0�9, K � �������� ������ ����, ���������� ������������ ������� � ��������). � ������� ���� ��������� ��������������� �������� � ������� ����� K ������ ������ ����� D1 � D2, ������ ��������� ������� ����������. 
	/*int a, b;
	cout << "k:" << endl;
	cin >> a;
	cout << "d:" << endl;
	cin >> b;
	Addrightdigit(b, a);
	cout << Addrightdigit(b, a) << endl;*/
	//3.������� ��������� AddLeftDigit(D, K), ����������� � ������ �������������� ����� K ����� ����� D (D � ������� �������� ������ ����, ������� � ��������� 1�9, K � �������� ������ ����, ���������� ������������ ������� � ��������). � ������� ���� ��������� ��������������� �������� � ������� ����� K ����� ������ ����� D1 � D2, ������ ��������� ������� ����������.
	/*int a, b;
	cout << "k:" << endl;
	cin >> a;
	cout << "d:" << endl;
	cin >> b;
	Addleftdigit(b, a);
	cout << Addleftdigit(b, a) << endl;*/ 


	system("pause");
}