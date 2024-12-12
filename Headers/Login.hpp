/*
 * Login.hpp
 *
 *  Created on: 25 lis 2024
 *      Author: kk


#include <string>
using namespace std;

class Login {
public:
	Login();
	Login(string user, int userGroup);
	~Login();

	// Setter
	void setUser(string user);
	void setUserGroup(int userGroup);

	// Getter
	string getUser();
	int getUserGroup();

private:
	string user;
	int userGroup;

};
 */
