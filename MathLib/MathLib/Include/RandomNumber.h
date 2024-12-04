#pragma once
#ifndef RANDOMNUMBER_H
#define RANDOMNUMBER_H
#include "Prerequisites.h"

class RandomNumber {
public:
	RandomNumber();

	int randomInt(int min, int max);
	float randomFloat(float min, float max);

private:
	mt19937 rng;
};



#endif RANDOMNUMBER_H




