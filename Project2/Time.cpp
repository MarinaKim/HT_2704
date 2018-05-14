#include "Time.h"

Time::Time(int HH, int MM, int SS)
{
	this->HH = HH;
	this->MM = MM;
	this->SS = SS;
}

bool Time::operator==(Time obj)
{
	return ((this->HH = HH) && (this->MM = MM) && (this->SS = SS));
}

Time Time::operator++()
{
	this->SS++;
	if (this->SS > 60)
	{
		this->SS -= 60;
		this->MM++;
		if (this->MM > 60)
		{
			this->MM -= 60;
			this->HH++;
			if (this->HH > 24)
				this->HH -= 24;
			else if (this->HH == 24)
				this->HH = 0;
		}
		else if (this->MM == 60) {
			this->MM = 0;
			this->HH++;
			if (this->HH > 24)
				this->HH -= 24;
			else if (this->HH == 24)
				this->HH = 0;
		}
	}
	else if (this->SS == 60) {
		this->SS = 0;
		this->MM++;
		if (this->MM > 60)
		{
			this->MM -= 60;
			this->HH++;
			if (this->HH > 24)
				this->HH -= 24;
			else if (this->HH == 24)
				this->HH = 0;
		}
		else if (this->MM == 60) {
			this->MM = 0;
			this->HH++;
			if (this->HH > 24)
				this->HH -= 24;
			else if (this->HH == 24)
				this->HH = 0;
		}
	}

	return *this;
}

ostream& operator<<(ostream & os, Time & t)
{
	os << t.getHH() << ":" << t.getnMM() << ":" << t.getSS << endl;
	return os;
}
