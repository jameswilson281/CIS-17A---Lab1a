#pragma once
#include<string>
using namespace std;

class Character
{
private:
	int age;
	string name;
public:	

	Character(string,int);
	Character(string);
	~Character();

	int GetAge();
	bool SetAge(int);
	string Greet();
};

