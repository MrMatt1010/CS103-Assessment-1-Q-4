// CS103 Assessment 1 Q 4
// Student Name: Matt Taylor
// This program allows the user to play hangman as outlined in the brief

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function required to draw a line
void drawLine(int length) {
	for (int i = 0; i < length; i++) {
		cout << "-";
	}
	cout << endl;
}

//Function to draw the Hangman
void drawHangman(int incorrectGuesses) {
	cout << "______________";
	cout << "|           |";

	if (incorrectGuesses >= 1) {
		cout << "   |   0";
	}

	if (incorrectGuesses >= 2) {
		cout << "   |   /";
	}

	if (incorrectGuesses == 3) {
		cout << "  |   /";
	}
	else if (incorrectGuesses >= 2) {
		cout << "  |";
	}

	cout << endl;

	if (incorrectGuesses >= 2) {
		cout << "  |";
	}

	if (incorrectGuesses >= 4) {
		cout << " \\";
	}

	if (incorrectGuesses >= 3) {
		cout << "   /";
	}

	cout << endl;
	cout << "  |" << endl;
	cout << "---------" << endl;
}

// Function to draw a Walkman
void drawWalkman() {
	cout << "  ( )   ( ) " << endl;
	cout << "   |     |  " << endl;
	cout << "   |     |  " << endl;
	cout << "  /       \\ " << endl;
}


//Function to invert the Hangman
void invertHangman() {
	cout << "  ________" << endl;
	cout << "  |     |" << endl;
	cout << "  |     O" << endl;
	cout << "  |    /|\\ " << endl;
	cout << "  |    / \\ " << endl;
	cout << "  |" << endl;
	cout << "---------" << endl;
}

// Function to play Hangman



int main()
{
   


	return 0;
}

