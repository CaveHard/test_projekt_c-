/*
 * Station.hpp
 *
 *  Created on: 25 lis 2024
 *      Author: kk
*/

#include <string>
#include <vector>
#include "Wagon.hpp"
using namespace std;

namespace tickets{
	class Station
	{
		public:
			Station();
			~Station();
		// Setter
			void setStationName(string stationName);
			void setWagons(vector<Wagon>& wagons);
		// Getter
			string getStationName();
			vector<Wagon>& getWagons();
		private:
			string stationName;
			// wskaźnik na listę wagonów w pociągu z aktualną dla danej stacji liczbą miejsc
			vector<Wagon> wagons;
	};
}

namespace tickets{
	// Setter
	void Station::setStationName(string stationName){
		this->stationName = stationName;
	};
	void Station::setWagons(vector<Wagon>& wagons){
		this->wagons = wagons;
	};
	// Getter
	string Station::getStationName(){
		return stationName;
	};
	vector<Wagon>& Station::getWagons(){
		return wagons;
	};
}
