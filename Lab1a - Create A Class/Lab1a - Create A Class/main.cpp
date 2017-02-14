#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

int main() {
	auto finn = Character("Finn", 14);
	auto jake = Character("Jake", 28);

	cout
		<< finn.Greet() << endl
		<< jake.Greet() << endl;

	getchar();
	return 0;
}

