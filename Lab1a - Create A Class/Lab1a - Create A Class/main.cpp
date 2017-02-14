#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

string GetFinnGreeting()
{
	return "Hi, my name is Finn and I'm 14!";
}

string GetJakeGreeting()
{
	return "Hi, my name is Jake and I'm 28!";
}



int main() {
	auto finn = Character("Finn", 14);
	auto jake = Character("Jake", 28);	

	finn.age = 10194823;
	finn.name = "Poopy Poop";

	cout
		<< finn.Greet() << endl
		<< jake.Greet() << endl;

	getchar();
	return 0;
}

