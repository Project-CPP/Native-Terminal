
// Standard C++ Headers
#include <iostream>
#include <string>

// Native Headers
#include "Headers\Native IO Board\MainStream IO\Native MainInput\IO Board.h"

// C++ Namespaces
using namespace std;


int main()
{
	// Native Output Controls
	string passedNativeWelcome = "Native OOP, Version 0.1\n\nI/O Board Version 0.1\n\n---> ";


    // User Input Controls
	string passedUserInput;
	
	
	// OOP Intializers 
	IOBoard User(passedUserInput, passedNativeWelcome);

	// Program Runtime
	cout << User.nativeWelcome();
	cin.get();
	
	





}