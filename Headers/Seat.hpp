/*
 * Seat.hpp
 *
 *  Created on: 25 lis 2024
 *      Author: kk
*/

#include <string>
using namespace std;


namespace tickets{
	class Seat{
		public:
			Seat();
			Seat(int seatNumber);
			Seat(int seatNumber, bool reserved);
			~Seat();

		// Setter
			void setSeatNumber(int seatNumber);
			void setReserved(bool reserved);
			void setRiderName(string raiderName);

		// Getter
			int getSeatNumber();
			bool getReserved();
			string getRaiderName();

		private:
			int seatNumber;
			bool reserved;
			string raiderName;
	};
}

namespace tickets{

Seat::Seat(int placeNumber) {
	this->seatNumber = seatNumber;
	this->reserved = false;
}
Seat::Seat(int seatNumber, bool reserved) {
	this->seatNumber = seatNumber;
	this->reserved = reserved;
}
Seat::~Seat() {}

// Setters
void Seat::setSeatNumber(int seatNumber) {
		this->seatNumber = seatNumber;
	}
void Seat::setReserved(bool reserved) {
	this->reserved = reserved;
}
void Seat::setRiderName(string raiderName) {
	this->raiderName = raiderName;
}

// Getters
int Seat::getSeatNumber(){
	return seatNumber;
};
bool Seat::getReserved(){
	return reserved;
};
string Seat::getRaiderName(){
	return raiderName;
};
}
