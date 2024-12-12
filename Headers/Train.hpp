/*
 * Train.hpp
 *
 *  Created on: 2 gru 2024
 *      Author: kk
*/


#include <string>
#include "Route.hpp"
using namespace std;

namespace tickets{
	class Train
	{
		public:
			Train();
			~Train();
		// Setter
			void setTrainNumber(int trainNumber);
			void setRoute(Route &route);
		// Getter
			int getTrainNumber();
			Route& getRoute();
		private:
			int trainNumber;
			// wskaźnik na trasę pociągu
			Route& route;
	};
}

namespace tickets{
	// Setter
	void Train::setTrainNumber(int trainNumber){
		this->trainNumber = trainNumber;
	};
	void Train::setRoute(Route& route){
		this->route = route;
	};
	// Getter
	int Train::getTrainNumber(){
		return trainNumber;
	};
	Route& Train::getRoute(){
		return route;
	};
}
