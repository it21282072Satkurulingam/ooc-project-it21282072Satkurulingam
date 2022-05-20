#include<iostram>
#include "Resume.h"
#include<cstring>

using namespace std;

Resume::Resume(string nam, string a_Details, string p_Details, RegisterUser* RUr) 
{
    name = nam;
    academicDetails = a_Details;
    personalDetails = p_Details;
    RU = RUr;
    RU->addResume(this);
}

void Resume::displayResumeDetails() 
{
    cout << "Resume: " << "Uploaded." << endl << endl;
}
