#include "bmi.h"

void bbmi::setmass(float m)
{
	mass=m;
}
void bbmi::setheight(float h)
{
	height=h/100;
	
}
float bbmi::getmass()
{
	return mass;
}
float bbmi::getheight()
{
	return height;
}
float bbmi::bmi(float m,float h)
{
	return (m/(h*h));
}
string bbmi::point(float bmi)
{
	if(bmi<15.0)
		return "Very severely underweight";
	else if(bmi<16.0&&bmi>=15.0)
		return "Severely uderweight";
	else if(bmi<18.5&&bmi>=16.0)
		return "Uderweight";
	else if(bmi<25.0&&bmi>=18.5)
		return "Normal";
	else if(bmi<30.0&&bmi>=25.0)
		return "Overweight";
	else if(bmi<35.0&&bmi>=30.0)
		return "Obese Class I(Moderately obese)";
	else if(bmi<40.0&&bmi>=35.0)
		return "Obese Class II(Severely obese)";
	else if(bmi>=40)
		return "Very severely obese";
}
