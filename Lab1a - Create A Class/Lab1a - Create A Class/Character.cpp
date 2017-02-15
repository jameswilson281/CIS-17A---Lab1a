#include "Character.h"

string Character::Greet()
{
	return "Hi!  My name is " + name + " and I am " + to_string(age) + " years old!";
}

int Character::GetAge()
{
	return age;
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

Character::Character(string name) : name(name)
{
}


Character::~Character()
{
}
