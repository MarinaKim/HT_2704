/*3. �������� ����� � ������ Time ��� �������� �������. � ������ ������ ���� �������-����,
������� ��� ���������� �������, ���������� � ������� Time, ������ 1 �������. 
�������� ��������������� ������������ � �������-�����. � ������ ������ ���� ����������� 
�������� ++ , -- , !=, ==, >, <, >>, <<, =, +=, -=, ().*/
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