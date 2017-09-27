// Native IO Board Header
#include "Headers\Native IO Board\Mainstream IO\Native MainInput\IO Board.h"

IOBoard::IOBoard()
{

}

IOBoard::IOBoard(string passedUserInput, string passedNativeWelcome)
{
	userInput = passedUserInput;
	nativeWelcomeVarible = passedNativeWelcome;
}

IOBoard::~IOBoard() {

}

string IOBoard::nativeWelcome() const {
	return nativeWelcomeVarible;
}