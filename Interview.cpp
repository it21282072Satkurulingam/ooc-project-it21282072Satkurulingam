#include<iostream>
#include<cstring>
#include<ctime>
#include"Interview.h"
using namespace std;


interview::interview(string inttype,string cname,int jid,int uid)
{
interviewType=inttype;
companyname=cname;  
jobid=jid;
userid=uid; 
}
void interview::setinterviewdetails(string inttype,char date ,string cname,int jid,int uid)
{
interviewType=inttype;
companyname=cname;  
jobid=jid;
userid=uid; 
}
void interview::displayinterviewdetails()
{
cout<<"Interview type: "<< interviewType <<endl;
cout<<"Company Name: "<<companyname <<endl;
 cout<<"Selected Candidate's User ID: "<<userid<<endl;
 cout<<"Job ID: "<<jobid<<endl;
cout<<endl;
}
