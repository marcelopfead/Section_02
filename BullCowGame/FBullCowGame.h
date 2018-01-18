#pragma once
#include <string>

class FBullCowGame
{
public:
	void Reset();
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(std::string);




private:
	// see constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};