#include <iostream>
#include<cstring>
#include "Company.h"
using namespace std;

void Company::setAddCompanyDetails(string cName, const char* cid, string loctn, string jobcatery)
{
	Cname = cName;
	strcpy_s(CID, cid);
	Location = loctn;;
	Job_category = jobcatery;
}

void Company::getDisplayCompanyDetails()
{
	cout << "Company Name :" << Cname << endl;
	cout << "Company ID :" << CID << endl;
	cout << "Location :" << Location << endl;
	cout << "Job Category :" << Job_category << endl;
	cout << "---------------------------------------" << endl;

}
