#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

int main() {
	auto finn = Character("Finn", 14);
	auto jake = Character("Jake", 28);
	auto marceline = Character("Marceline");
	auto bmo = Character("BMO", 1);

	cout
		<< finn.Greet() << endl
		<< jake.Greet() << endl;

	cout << "Marceline is a vampire that is " << marceline.HowOld() << endl;

	auto result = marceline.SetAge(20);
	cout << "Marceline is a vampire that is " << marceline.HowOld() << endl;

	result = marceline.SetAge(-50);	
	cout << "Marceline is a vampire that is " << to_string(marceline.GetAge()) << " years old!" << endl;

	cout << bmo.Greet() << endl;

	getchar();
	return 0;
}

