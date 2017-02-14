#include "Character.h"

string Character::Greet()
{
	return "Hi!  My name is " + name + " and I am " + to_string(age) + " years old!";
}

Character::Character(string iName, int iAge)
{
	name = iName;
	age = iAge;
}


Character::~Character()
{
}
