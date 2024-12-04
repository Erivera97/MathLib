#include "RandomNumber.h"

RandomNumber::RandomNumber()
{
	auto seed = chrono::system_clock::now().time_since_epoch().count();
	rng = mt19937(seed);
}

int RandomNumber::randomInt(int min, int max)
{
	uniform_int_distribution<int> dist(min, max);
	return dist(rng);
}

float RandomNumber::randomFloat(float min, float max)
{
	uniform_real_distribution<float> dist(min, max);
	return dist(rng);
}

/*
* Ejemplo de numero Random
* 
* 
  RandomNumber NumeroRandom;
  int min1 = 0;
  int max1 = 0;
  string maxs2, mins2;

  cout << "Ingrese un valor minimo entero y maximo entero para sacar un numero aleatorio" << endl;
  cout << "Minimo: ";
  cin >> min1;
  cout << "Maximo: ";
  cin >> max1;
  cout << "Ingrese un valor minimo y maximo entero para sacar un numero aleatorio" << endl;
  cout << "Minimo: ";
  cin >> mins2;
  cout << "Maximo: ";
  cin >> maxs2;

  float min2 = stof(mins2);
  float max2 = stof(maxs2);

  int randomInt = NumeroRandom.randomInt(min1, max1);
  float randomFloat = NumeroRandom.randomFloat(min2, max2);

  cout << "Numero entero aleatorio: " << randomInt << endl;
  cout << "Numero decimal aleatorio: " << randomFloat << endl;
 */