#include "FBullCowGame.h"


FBullCowGame::FBullCowGame()
{
	Reset(8);
}

//Getters
int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }


bool FBullCowGame::IsGameWon() const
{
	return false;
}

void FBullCowGame::Reset(int32 WordLength)
{
	MyMaxTries = WordLength;
	const FString HiddenWord = "planet";
	MyHiddenWord = HiddenWord;
	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}

FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	//increment the turn number
	MyCurrentTry++;

	//setup a return variable
	FBullCowCount BullCowCount;


	//loop throught all letters in the guess
		  //compare letters against the hidden word
	int32 HiddenWordLength = MyHiddenWord.length();
	for (int32 i = 0; i < HiddenWordLength; i++) 
	{
		for (int32 j = 0; j < HiddenWordLength; j++)
		{
			if (Guess[i] == MyHiddenWord[j]) 
			{
				if (i == j) 
				{
				
					BullCowCount.Bulls++;
				}
				else 
				{
				
					BullCowCount.Cows++;
				}
			}		
		}
	}

	return BullCowCount;
}
