#include<iostream>
#include<cstring>
#include "Staff.h"


using namespace std;

void Staff::setAddUserDetails(const char* u_ID, string Uname, string Uaddress, const char* contNo)
{
	strcpy_s(UID, u_ID);
	uName = Uname;
	Address = Uaddress;
	strcpy_s(contactNO, contNo);
}

void Staff::getDisplayUserDetails()
{
	
	cout << "User ID :" << UID << endl;
	cout << "User Name :" << uName << endl;
	cout << "Address :" << Address << endl;
	cout << "Contact No :" << contactNO << endl;
	cout << "---------------------------------------" << endl;

}
