#pragma once
#include<string>
using namespace std;

class Character
{
public:
	int age;
	string name;

	Character(string,int);
	~Character();

	string Greet();

};

