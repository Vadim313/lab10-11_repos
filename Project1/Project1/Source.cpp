#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CreateTXT(char* fname) // створення файлу з введених рядків
{
	ofstream fout(fname); // відкрили файл для запису
	char ch; // відповідь користувача – чи продовжувати введення
	string s; // введений користувачем рядок
	do
	{
		cin.get(); // очищуємо буфер клавіатури – щоб не було символу
		cin.sync(); // "кінець рядка", який залишився після вводу числа
		cout << "enter line: "; getline(cin, s); // ввели рядок
		fout << s << endl; // записали його у файл
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}
void PrintTXT(char* fname) // виведення файлу на екран
{
	ifstream fin(fname); // відкрили файл для зчитування
	string s; // прочитаний рядок
	while (getline(fin, s)) // поки можна прочитати рядок
	{
		cout << s << endl; // виводимо його на екран
	}
	cout << endl;
}
int ProcessTXT1(char* fname) // обчислення загальної кількості символів + - =
{
	ifstream fin(fname); // відкрили файл для зчитування
	string s; // прочитаний рядок
	int k = 0; // загальна кількість символів + - =
	while (getline(fin, s)) // поки можна прочитати рядок
	{ // скануємо його і обчислюємо кількість + - =
		for (unsigned i = 0; i < s.length(); i++)
			if (s[i] == '+' || s[i] == '-' || s[i] == '=')
				k++;
	}
	return k;
}
int ProcessTXT2(char* fname) // обчислення кількості слів,
{ // відокремлених пробілами
	ifstream fin(fname); // відкрили файл для зчитування
	string s; // прочитане слово
	int k = 0; // кількість слів
		while (fin >> s) // поки можна прочитати слово
		{
			k++; // збільшили кількість і вивели його на екран
			cout << k << ": " << s << endl;
		}
	return k;
}

int main()
{
	// text files
	char fname[100]; // ім'я першого файлу
	cout << "enter file name 1: "; cin >> fname;
	CreateTXT(fname); // ввели рядки файлу з клавіатури
	PrintTXT(fname); // вивели вміст першого файлу на екран
	cout << "k(+-=) = " << ProcessTXT1(fname) << endl;
	cout << "k(word1) = " << ProcessTXT2(fname) << endl;
	return 0;
}