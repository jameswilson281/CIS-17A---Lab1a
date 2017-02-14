#include <iostream>
#include <string>

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
	cout 
		<< GetFinnGreeting() << endl
		<< GetJakeGreeting() << endl;

	getchar();
	return 0;
}

