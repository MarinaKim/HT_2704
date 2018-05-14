/*3. Создайте класс с именем Time для хранения времени. В классе должна быть функция-член,
которая даёт приращение времени, хранящееся в объекте Time, равное 1 секунде. 
Напишите соответствующие конструкторы и функции-члены. В классе должны быть перегружены 
операции ++ , -- , !=, ==, >, <, >>, <<, =, +=, -=, ().*/
#pragma once

#include"Library.h"

class Time {
private:
	int HH;
	int MM;
	int SS;

public:
	Time() = default;
	Time(int HH, int MM, int SS);

	int getHH() { return HH; }
	int getnMM() { return MM; }
	int getSS() { return SS; };

	bool operator==(Time obj);
	Time operator++();

	friend ostream& operator<<(ostream& os, Time& t);
};