/*
 * Shedule.hpp
 *
 *  Created on: 25 lis 2024
 *      Author: kk
 */

#include <string>

using namespace std;
namespace tickets{

class Schedule
{
	public:
		Schedule();
        Schedule(string name, int trainNumber);
		~Schedule();
	// Setter
		void setName(string name);
		void setTrainNumber(int trainNumber);
//		void setTrains(list<Train> *trains);
	// Getter
		string getName();
		int getTrainNumber();
		//list<Train>& getTrains();
	private:
		string name;
		int trainNumber;
		// wskaźnik na listę pociągów klasy Train
		//list<Train> *trains;
};
}


namespace tickets{

Schedule::Schedule(){};

Schedule::Schedule(string name, int trainNumber){
  	setName(name);
    setTrainNumber(trainNumber);
}

Schedule::~Schedule(){};

	// Setter
void Schedule::setName(string name){
		this->name = name;
};
void Schedule::setTrainNumber(int trainNumber){
	this->trainNumber = trainNumber;
};
	// Getter
string Schedule::getName(){
		return this->name;
};
int Schedule::getTrainNumber(){
	return this->trainNumber;
};
}