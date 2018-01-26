#pragma once
#include <string>

using FString = std::string;
using int32 = int;

//all values initialised to zero
struct FBullCowCount 
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const; //avoid modification. Useful for getters
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(int32 WordLength); // TODO make a more rich return value
	bool CheckGuessValidity(FString); // TODO make a more rich return value
	FBullCowCount SubmitGuess(FString Guess); //counts bulls & cows and increses try # assuming valid guess

private:
	// see constructor for initialisation
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};