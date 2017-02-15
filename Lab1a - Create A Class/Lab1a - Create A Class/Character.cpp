#include "Character.h"
#include <iostream>
using namespace std;

string Character::Greet()
{
	return "Hi!  My name is " + name + " and I am " + HowOld();
}

int Character::GetAge()
{
	return age;
}

string Character::HowOld()
{
	switch (age) {
		case -1: return "some unknown number of years old!";
		case 1: return "a year old!";
		default: return to_string(age) + " years old!";
	}

}

bool Character::SetAge(int newAge)
{
	if (newAge < 0) {
		return false;
	}
	age = newAge;
	return true;
}



Character::Character(string name, int age, string race) : Character(name,age)
{
	race = race;
}

Character::Character(string name, int age) : name(name), age(age)
{
}

Character::Character(string name) : name(name), age(-1)
{
}


Character::~Character()
{
	cout << "Oh no " << name << " is dead" << endl;
}
