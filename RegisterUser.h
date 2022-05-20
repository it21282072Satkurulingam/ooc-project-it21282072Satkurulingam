#include <iostream>
#include<cstring>
#include"User.h"
using namespace std;

class RegisterUser: public User{
   private:
      int job_id;
   public:
      RegisterUser(string uName, string add, string mail, int no, int jobId);
      void displayRegisterDetails();
};