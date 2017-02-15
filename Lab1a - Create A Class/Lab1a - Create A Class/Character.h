#pragma once
#include<string>
using namespace std;

class Character
{
private:
	int age;
	string name;
	string race;
public:	

	Character(string, int, string);
	Character(string,int);
	Character(string);
	~Character();

	int GetAge();
	string HowOld();
	bool SetAge(int);
	string Greet();
};

