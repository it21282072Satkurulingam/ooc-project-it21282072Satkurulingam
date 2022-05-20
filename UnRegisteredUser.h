#include <iostream>
#include<cstring>
#include"User.h"
using namespace std;

class UnRegisteredUser:public User{
  public:
     UnRegisteredUser(string uName, string add, string mail, int no);
     void displayUnRegisteredUser();
};