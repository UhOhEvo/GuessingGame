// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
#include <cstdlib> // for genrating random numbers
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	int random; // holds random number
	int guess; // holds user input
	int count = 1; // keeps track of guesses
	srand(time(0)); // seed for RNG, unique each time
	random = rand() % 101; // random number generator

	// Inform user what program does
	cout << "This program will play a integer guessing game with you.\n";

	// Prompt user to enter data needed by the program
	cout << "I'm thinking of a number between 1-100. Can you guess what it is?\n";
	cin >> guess;

	// A software algorithm would typically be executed after all data has been input
	while (guess != random) // input validation, while choice isnt the same as random
	{
		
		if (random > guess)
		{
			cout << "Too low, guess again.\n"; // if random number is greater than the number the user put in it will print this line
		}
		else
		{
			cout << "Too high, guess again.\n"; // else it will print this line
		}
		cin >> guess; // ask for second input
		guess++; // increment number of guesses
	}

	// Program output done at end of program
	cout << "You guessed right in " << guess << " tries.\n"; // prints number of tries


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
This program will play a integer guessing game with you.
I'm thinking of a number between 1-100. Can you guess what it is?
13
Too low, guess again.
90
Too high, guess again.
65
Too high, guess again.
40
Too low, guess again.
45
Too low, guess again.
50
Too low, guess again.
55
Too low, guess again.
58
Too low, guess again.
60
Too low, guess again.
62
Too low, guess again.
64
Too high, guess again.
63
You guessed right in 12 tries.
Press any key to continue . . .
*/