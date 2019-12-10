#pragma once
#include <string.h>
#include <sstream>

typedef float typeOfFloat;

enum alert {InvalidValue = -1 };

class Rectangle
{
private:
	typeOfFloat _x1, _x2, _x3, _y1, _y2, _y3;
public:
	//�����������
	Rectangle();
	//���������� � ����������(-���)
	Rectangle(typeOfFloat x1, typeOfFloat x2, typeOfFloat x3, typeOfFloat y1, typeOfFloat y2, typeOfFloat y3);
	//����� ����� ���� �����, ��������� �����(1-3)
	void setAllPoints(typeOfFloat x1, typeOfFloat x2, typeOfFloat x3, typeOfFloat y1, typeOfFloat y2, typeOfFloat y3);
	void setFirstPoint(typeOfFloat x1, typeOfFloat y1);
	void setSecondPoint(typeOfFloat x2, typeOfFloat y2);
	void setTheirdPoint(typeOfFloat x3, typeOfFloat y3);
	//��������, �������, ������ ������� � , ������ ������� B
	typeOfFloat Perimetr();
	typeOfFloat Area();
	typeOfFloat sideA();
	typeOfFloat sideB();
	std::string toStrFil1() const ;	
};

