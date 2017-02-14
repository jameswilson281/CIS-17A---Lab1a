#include <iostream>
#include <string>

using namespace std;

string GetGreeting() {
	return "Hello, World!";
}

int main() {
	cout << GetGreeting() << endl;

	getchar();
	return 0;
}

