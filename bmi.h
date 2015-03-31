#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

class bbmi
{
public:
	float getheight();
	float getmass();
	void setmass(float m);
	void setheight(float h);
	float bmi(float m,float h);
	string point(float);	
private:
	float mass,height;
};
