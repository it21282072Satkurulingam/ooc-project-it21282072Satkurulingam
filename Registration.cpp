#include "Registration.h"
#include<cstring>

Registration::Registration()
{
	reg_ID=0;
    strcpy(reg_Name,"");
	reg_Num=0;
	strcpy(reg_Date,"");
	strcpy(user_ID, "");
} 

Registration::Registration(ResiteredUser* pregisteredUser)
{
	registeredUser=pregisteredUser;
}

void Registration::setRegistration(char r_id, char r_name, int r_num, char r_date, char u_id )
{
	reg_ID=r_id;
    strcpy(reg_Name,r_name);
	reg_Num=r_num;
	strcpy(reg_Date,r_date);
	strcpy(user_ID,u_id );
}

void Registration::displayRegistration()
{
	cout << "Registered ID" << reg_ID << endl;
	cout << "Registration Name" << reg_Name << endl;
	cout << "Registered Number" << reg_num << endl;
	cout << "Registered Date" << reg_Date << endl;
	cout << "User ID" << user_ID << endl;
}
