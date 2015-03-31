#include"bmi.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	float h,m;
	float b;
	int i ;
	bbmi lala[5];
 	
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	for( i = 0 ; i <5 ;i ++)
	{
	inFile>>h>>m;
	lala[i].setheight(h);
	lala[i].setmass(m);
	}	
	
	ofstream outFile("outfile",ios::out);
	if(!outFile)
        {
                cerr<<"Failed opening"<<endl;
                exit(1);
        
	}

	for(i = 0;i < 5;i ++)
	{
		m=lala[i].getmass();
		h=lala[i].getheight();
		b=lala[i].bmi(m,h);
		outFile<<b<<'\t'<<lala[i].point(b)<<endl;
	}	


	return 0 ;
}
