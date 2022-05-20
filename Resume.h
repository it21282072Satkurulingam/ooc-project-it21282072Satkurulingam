#include <iostream>
#include <cstring>
#include "RegisteredUser.h"

using namespace std;

class Resume {
private:
    string name;
    string academicDetails;
    string personalDetails;
    RegisterUser* RU;
    
public:
    Resume(string nam, string a_Details, string p_Details, RegisterUser* RUr);
    void displayResumeDetails();
};
