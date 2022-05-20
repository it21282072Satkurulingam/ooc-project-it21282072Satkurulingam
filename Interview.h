#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;

class interview
{
private:

string interviewType;
string companyname;
int jobid;
int userid;
public:
interview(string inttype, string cname,int jid,int uid);
void setinterviewdetails(string inttype, char date,string cname,int jobid,int userid);
void displayinterviewdetails();
};