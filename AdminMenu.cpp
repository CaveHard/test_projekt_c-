/*
 * AdminMenu.cpp
 *
 *  Created on: 3 gru 2024
 *      Author: kk
 */
#include <iostream>
#include <cstdlib>
#include "AdminMenu.hpp"

namespace tickets{

void AdminMenu::displayAdminMainMenu(){

	int choice = 0;
	do {
		std::system("cls");
		std::cout << "Menu administratora\n";

		std::cout << "1 - Utworzenie/przeglądanie/usuwanie planu/rozkładu kursowania pociągów(Schedule)\n";
		//cout << "2 - Utworzenie/przeglądanie/usuwanie listy pociągów w planie(Train)\n";
		//cout << "3 - Utworzenie/przegrądanie/usuwanie trasy dla danego pociągu(Route)\n";
		//cout << "4 - Utworzenie/przeglądanie/usuwanie listy stacji dla dla danej trasy(Station)\n";
		//cout << "5 - Utworzenie/przeglądanie/usuwanie zestawu wagonów (Wagon) \n";

		std::cout << "0 - exit\n";
		std::cout << " >> : ";
		std::cin >> choice;
		switch(choice) {
			 	 case 1:
			 		 std::cout<< "Schedule Menu";
			         break;
			     case 2:
			    	 std::cout << "Train Menu";
			         break;
			     case 3:
			    	 std::cout << "Route Menu";
			         break;
			     case 4:
			      	 std::cout << "Station Menu";
			       	 break;
			     case 5:
			    	 std::cout << "Station Menu";
			    	 break;
			     default:
			    	 std::cout << "wyjście do logowania";
			    	 break;
			  }
	} while(choice != 0);
}


void AdminMenu::displayAdminSubMenu(){

	int choice = 0;
	do {
		std::system("cls");
		std::cout << "SubMenu administratora\n";

		std::cout << "1 - Utworzenierozkładu kursowania pociągów(addSchedule)\n";
		std::cout << "2 - Przeglądanie listy rozkładów(showShedule)\n";
		std::cout << "3 - Usuwanie rozkładu jazdy (delSchedule)\n";
		std::cout << "4 - Zapisywanie rozkładu do pliku (saveStation)\n";
		std::cout << "0 - Powrót do MainMedu () \n";

		std::cout << " >> : ";
		std::cin >> choice;
		switch(choice) {
			 	 case 1:
			 		 std::cout<< "addSchedule";
			         break;
			     case 2:
			    	 std::cout << "showShedule";
			         break;
			     case 3:
			    	 std::cout << "delSchedule";
			         break;
			     case 4:
			      	 std::cout << "saveStation";
			       	 break;
			     case 0:
			    	 std::cout << "MainMenu";
			    	 break;
			     //default:
			    //	 cout << "wyjście do logowania";
			    //	 break;
			  }
	} while(choice != 0);
};

}


