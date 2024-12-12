/*
 * Place.cpp
 *
 *  Created on: 2 gru 2024
 *      Author: kk


#include "Place.h"


Place::Place(int placeNumber) {
	this->placeNumber = placeNumber;
	this->reserved = false;
}
Place::Place(int placeNumber, bool reserved) {
	this->placeNumber = placeNumber;
	this->reserved = reserved;
}
Place::~Place() {}

// Setters
void Place::setPlaceNumber(int placeNumber) {
		this->placeNumber = placeNumber;
	}
void Place::setReserved(bool reserved) {
	this->reserved = reserved;
}
void Place::setRiderName(string raiderName) {
	this->raiderName = raiderName;
}

// Getters
int Place::getPlaceNumber(){
	return placeNumber;
};
bool Place::getReserved(){
	return reserved;
};
string Place::getRaiderName(){
	return raiderName;
};
 */

