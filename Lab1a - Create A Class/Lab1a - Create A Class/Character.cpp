#include "Character.h"

string Character::Greet()
{
	return "Hi!  My name is " + name + " and I am " + to_string(age) + " years old!";
}

int Character::GetAge()
{
	return age;
}

Character::Character(string name, int age) : name(name), age(age)
{
}


Character::~Character()
{
}
