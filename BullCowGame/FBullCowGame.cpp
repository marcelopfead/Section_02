#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	Reset(8);
}

//Getters
int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }


bool FBullCowGame::IsGameWon() const
{
	return false;
}

void FBullCowGame::Reset(int WordLength)
{
	MyMaxTries = WordLength;
	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
