#include "Character.h"

string Character::Greet()
{
	return "Hi!  My name is " + name + " and I am " + HowOld() + " years old!";
}

int Character::GetAge()
{	
	return age;
}

string Character::HowOld()
{
	if (age == -1) { //yoda assignment?
		return "some unknown number of years old!";
	}
	return to_string(age) + " years old!";
}

bool Character::SetAge(int newAge)
{
	if (newAge < 0) {
		return false;
	}
	age = newAge;
	return true;
}



Character::Character(string name, int age) : name(name), age(age)
{
}

Character::Character(string name) : name(name), age(-1)
{
}


Character::~Character()
{
}
