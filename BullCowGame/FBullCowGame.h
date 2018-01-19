#pragma once
#include <string>

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const; //avoid modification. Useful for getters
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(int WordLength);
	bool CheckGuessValidity(std::string);

private:
	// see constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};