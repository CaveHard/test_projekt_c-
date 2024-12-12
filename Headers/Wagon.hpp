/*
 * Wagon.hpp
 *
 *  Created on: 25 lis 2024
 *      Author: kk
*/

#include <string>
#include "Place.hpp"
using namespace std;

namespace tickets{

class Wagon
{
	public:
		Wagon();
		~Wagon();

		// Setter
		void setWagonNumber(int wagonNumber);
		void setPlaces(Place *places);

		// Getter
		int getWagonNumber();
		Place& getPlaces();

	private:
		int wagonNumber;
		// tablica miejsc typu Place
		Place places[27];
	};
}

namespace tickets{
// Setter
void Wagon::setWagonNumber(int wagonNumber) {
	this->wagonNumber = wagonNumber;
}
void Wagon::setPlaces(Place *places){
	this->places = places;
}

// Getter
int Wagon::getWagonNumber(){
	return wagonNumber;
}
Place* Wagon::getPlaces(){
	return places;
};
}

