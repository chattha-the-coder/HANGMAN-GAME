#include <iostream>
#include <conio.h> 
#include <string> 
#include <stdlib.h> 
#include <ctime>



using namespace std;



int main() {
	string wordList[5] = { "apple","peach","banana","strawberry","mango" };
	string word;
	string guessed;

	word = wordList[rand() % 5];

	int wordLength = word.length();
	//string dispWord(wordLength, '_');
	for (int i = 0;i < wordLength;i++)
	{
		cout << word;
		for (int w = 0;i == 3||i==6;w++)
		{

			string dispWord(wordLength, '_');
		}
	}




	int found = 0;
	char guess = '\0';
	int tries = 5; //No of wrong tries
	int flagFound = 0;
	int WRONGTRIES = 0;
	while (tries >= 0) {
		system("cls");
		cout << "Guess alphabet: " << endl << endl;

		for (int i = 0; i < wordLength; i++)
			cout << " " << dispWord[i] << " ";
		cout << endl << endl << endl;

		cout << "Remaining Wrong Attempts: " << tries << endl;
		cout << "Guessed Letters: " << guessed << endl;



		if (found == wordLength) {
			cout << endl;

			cout << "*    You Win    *" << endl;

			break;
		}

		if (tries == 0)
			break;

		cout << "Pick a Letter:";
		cin >> guess;

		guessed = guessed + " " + guess;

		if (dispWord.find(guess) != string::npos)
			tries++;

		flagFound = 0;
		for (int i = 0; i < wordLength; i++) {
			if (word[i] == guess && dispWord[i] == '_') {
				dispWord[i] = guess;
				found++;
				flagFound = 1;
			}
		}

		if (!flagFound)
			tries--;
	}
	if (found != wordLength) {
		cout << endl;

		cout << "*    You Lose    *" << endl;

	}


	return 0;
}