/*
 * ScheduleService.hpp
 *
 *  Created on: 4 gru 2024
 *      Author: kk
 */

#include <vector>
#include "Schedule.cpp"

namespace tickets{
	class ScheduleService {
		private:
			vector<Schedule> schedules;
		public:
			ScheduleService();
			ScheduleService(Schedule &schedule);
			~ScheduleService();

			Schedule addSchedule();  // dodaje dane testowe
			void deleteSchedule(Schedule &schedule);
			string showSchedulesList();
	};
}

namespace tickets{

ScheduleService::ScheduleService() {}

ScheduleService::ScheduleService(Schedule &schedule) {
	this->schedules.push_back(schedule);
}

ScheduleService::~ScheduleService() {}

string showSchedulesList(){
	return "test ScheduleService";
};

} /* namespace std */
