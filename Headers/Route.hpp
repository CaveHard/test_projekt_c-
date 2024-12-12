/*
 * Route.hpp
 *
 *  Created on: 25 lis 2024
 *      Author: kk
*/

#include <string>
#include <list>
#include "Station.hpp"

using namespace std;

namespace tickets{
	class Route
	{
	public:
		Route();
		~Route();
	// Setter
		void setRouteName(string routeName);
		void setStations(list<Station> *stations);
	// Getter
		string getRouteName();
		Station& getStations();
	private:
		string routeName;
		//lista stacji klasy Station;
		list<Station>& stations;
	};
}

namespace tickets{
	Route::Route(){};
    Route::~Route(){};
	// Setter
	void Route::setRouteName(string routeName){
		this->routeName = routeName;
	};
	void Route::setStations(list<Station> *stations){
		this->stations = stations;
	};
	// Getter
	string Route::getRouteName(){
		return routeName;
	};
	Station& Route::getStations(){
		return *(stations.front());
	};
}




