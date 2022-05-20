#include <iostream>
#include<cstring>
using namespace std;

class User{
protected:
string username;
string address;
string email;
int contactNo;
public:
User(string uname, string add, string mail, int no);
void displayDetails();
};









