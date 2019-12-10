#include <iostream>
#include <math.h>
#include <string.h>
#include <sstream>
#include "Rectangle.h"

using namespace std;
	
	Rectangle::Rectangle()
	{
		_x1 =0 ; _y1 =0 ;
		_x2 = 0; _y2 = 0;
		_x3 = 0; _y3 = 0;
	}
	
	Rectangle::Rectangle(typeOfFloat x1, typeOfFloat x2, typeOfFloat x3, typeOfFloat y1, typeOfFloat y2, typeOfFloat y3) {
		setAllPoints(x1, x2, x3, y1, y2, y3);
	}

	typeOfFloat Rectangle::sideA() {
		return sqrt(pow((_x2 - _x1), 2) + pow((_y2 - _y1), 2));
	}

	typeOfFloat Rectangle::sideB() {
		return sqrt(pow((_x3 - _x2), 2) + pow((_y3 - _y2), 2));
	}

	typeOfFloat Rectangle::Perimetr() {
		if ((sideA() < sideB()) || (sideA() > sideB())) {
			return (2 * (sideA() + sideB()));
		}
		else return InvalidValue;
	}
	
	typeOfFloat Rectangle::Area() {
		if ((sideA() < sideB()) || (sideA() > sideB())) {
			return (sideA() * sideB());
		}
		else return InvalidValue;
	}

	void Rectangle::setFirstPoint(typeOfFloat x1, typeOfFloat y1) {
		_x1 = x1; _y1 = y1;
	}

	void Rectangle::setSecondPoint(typeOfFloat x2, typeOfFloat y2) {
		_x2 = x2; _y2 = y2;
	}

	void Rectangle::setTheirdPoint(typeOfFloat x3, typeOfFloat y3) {
		_x3 = x3; _y3 = y3;
	}

	void Rectangle::setAllPoints(typeOfFloat x1, typeOfFloat x2, typeOfFloat x3, typeOfFloat y1, typeOfFloat y2, typeOfFloat y3) {
		setFirstPoint(x1, y1);
		setSecondPoint(x2, y2);
		setTheirdPoint(x3, y3);
	}

	string Rectangle::toStrFil1() const {
		ostringstream ostr;
		string str = "";
	//	ostr << " x1 = " << _x1 << " y1 =  " << _y1;
	//	ostr << " x2 = " << _x2 << " y2 =  " << _y2;
	//	ostr << " x3 = " << _x3 << " y3 =  " << _y3;
		ostr << _x1 << " ";
		ostr << _x2 << " ";
		ostr << _x3 << " ";
		ostr << _y1 << " ";
		ostr << _y2 << " ";
		ostr << _y3 << " ";
		//ostr << endl;
		str += ostr.str();
		return str;
	}

