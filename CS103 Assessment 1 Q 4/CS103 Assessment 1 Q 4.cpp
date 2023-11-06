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
bool playHangman(string word) {
	int incorrectGuesses = 0;
	string guessedWord(word.length(), '_');

	while (incorrectGuesses < 3) {
		cout << "Word: " << guessedWord << endl;
		char guess;
		cout << "Guess a letter (lowercase only): ";
		cin >> guess;

		// Convert the guess to lowercase
		guess = tolower(guess);

		bool found = false;
		for (int i = 0; i < word.length(); i++) {
			if (word[i] == guess) {
				guessedWord[i] = guess;
				found = true;
			}
		}

		if (!found) {
			incorrectGuesses++;
		}

		if (word == guessedWord) {
			cout << "You win! The word is: " << word << endl;
			return true;
		}

		drawHangman(incorrectGuesses);
	}

	cout << "You lose! The word was: " << word << endl;
	invertHangman();
	return false;
}

int main() {
	srand(time(0));

	string words[] = { "yoobee", "home", "computer", "programming", "developer" };
	int wordIndex = rand() % 5;
	string wordToGuess = words[wordIndex];

	cout << "Welcome to Hangman!" << endl;
	cout << "You have 3 chances to guess the word." << endl;

	bool win = playHangman(wordToGuess);

	if (win) {
		cout << "Congratulations! You won the game." << endl;
	}
	else {
		cout << "Better luck next time." << endl;
	}

	return 0;
}

