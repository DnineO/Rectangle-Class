// newClassRectangle.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Rectangle.h"
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	const int mass =3 ;
	vector<Rectangle*> a(mass);
	for (int i = 0;i < mass; i++) {
		a[i] = new Rectangle(1 , 2 , 3 , 4 , 5 , 6);
	}	
	ofstream input("file.txt");
	for (int i = 0;i < mass;i++) {
		input << a[i]->toStrFil1() << endl;
	}
	input.close();

	ifstream output("file.txt");
	char str;
	typeOfFloat num1,num2,num3,num4,num5,num6;

	for (int i = 0; i < mass; i++) {
			output >> num1;
			output >> num2;
			output >> num3;
			output >> num4;
			output >> num5;
			output >> num6;
			a[i]->setAllPoints(num1, num2, num3, num4, num5, num6);
			cout << a[i]->toStrFil1() << endl;
	}
	output.close();

	for (int i = 0; i < mass; i++) {
		delete a[i];
	}
	output.close();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
