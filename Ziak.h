#pragma once
using namespace std;
#include <string>;
#include <iostream>

class Ziak
{
	private:
		int cislo;
		string  meno;
		string priezvisko;

	public:
		Ziak(int cislo, string meno, string priezvisko)

		{
			this->cislo = cislo;
			this->meno = meno;
			this->priezvisko = priezvisko;
		}

		int getCislo()
		{
			return cislo;
		}
		
		string getMeno()
		{
			return meno;
		}

		string getPriezvisko()
		{
			return priezvisko;
		}

		void vypis()
		{
			cout << cislo << ". " << meno << " " << priezvisko << endl;
		}
			
};		







