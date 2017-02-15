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
	~Character();

	int GetAge();
	void SetAge(int);
	string Greet();
};

