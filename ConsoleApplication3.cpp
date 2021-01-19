
#include <iostream>
#include <string>
#include "Ziak.h"
#include <vector>
using namespace std;

int main()
{
	
	int o = 0;
	int f;
	vector<Ziak*> ziaci;

	ziaci.push_back(new Ziak(1, "Lukas", "Adamec"));
	ziaci.push_back(new Ziak(2, "Milos", "Bardac"));
	ziaci.push_back(new Ziak(3, "Branislav", "Brandis"));
	ziaci.push_back(new Ziak(4, "Peter", "Ciernava"));
	ziaci.push_back(new Ziak(5, "Oliver", "Dejcik"));
	ziaci.push_back(new Ziak(6, "Samuel", "Duban"));
	ziaci.push_back(new Ziak(7, "Jakub", "Dubovec"));
	ziaci.push_back(new Ziak(8, "Richard", "Faktor"));
	ziaci.push_back(new Ziak(9, "David", "Horelican"));
	ziaci.push_back(new Ziak(10, "Jacob", "Hurtos"));
	ziaci.push_back(new Ziak(11, "Jakub", "Hvizdak"));
	ziaci.push_back(new Ziak(12, "Jan", "Chladek"));
	ziaci.push_back(new Ziak(13, "David", "Chnurik"));
	ziaci.push_back(new Ziak(14, "Samuel", "Kocifaj"));


	
	
	cout << "Databaza studentov" << endl;
	do
	{

		cout << "Stlac 1 pre vyhladanie ziaka podla mena" << endl;
		cout << "Stlac 2 pre vyhladanie ziaka podla priezviska" << endl;
		cout << "Stlac 3 pre vypis vsetkych studentov" << endl;
		cout << "Stlac 4 pre ukoncenie databazy" << endl;

		string priezvisko;
		string meno;
		cin >> f;
		cin.get();
		system("CLS");
		switch (f) {
		case 1:
			cout << "Zadaj Meno: ";
			cin >> meno;

			for (Ziak* z : ziaci) {
				if (z->getMeno() == meno)
				{
					z->vypis();
				}
			}



			break;
		case 2:
			cout << "Zadaj Priezvisko" << endl;
			cin >> priezvisko;

			for (Ziak* z : ziaci) {
				if (z->getPriezvisko() == priezvisko)
				{
					z->vypis();
				}
			}
			
			break;

		case 3:
			cout << "Vypis vsetkych studentov" << endl;
			for (Ziak* z : ziaci) {
				z->vypis();
			}
			
			break;

		case 4: o = 4;
			break;

		default:
			cout << "chyba" << endl;


		}
		
	

	} while (o!= 4);


	system("CLS");
	return 0;
}