#include "User.h"
#include "RegisteredUser.h"
#include "UnRegisteredUser.h"
#include "Feedback.h"
#include "Resume.h"
#include "Staff.h"
#include "Company.h"
#include "Registration.h"
#include "SelectionProcess.h"
#include "Interview.h"
#inlcude "Admin.h"
#include "JobVacancy.h"
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
//user class
UnRegisteredUser ur1("Jathu","Vavuniya","jathu@gmail.com",769052508);
 ur1.displayUnRegisteredUser();
 RegisterUser u1("Savi","Batticalo","savi@gmail.com",764948189,101);
 u1.displayRegisterDetails();

 //feedback class and Resume class

 Feedback* f = new Feedback(1, "outstanding service");
 Feedback* f1 = new Feedback(2, "quality service");
 RegisterUser* u1 = new RegisterUser("Savi", "Batticalo", "savi@gmail.com", 764948189, 101, 1);
 Resume* r = new Resume("Savi", "personal details", "academic details", u1);
 cout<< "---------------Register user---------------" << endl;
 u1->giveFeedback(f);
 u1->displayRegisterDetails();
 cout<< "---------------UnRegistered user---------------" << endl;
 UnRegisteredUser* ur1 = new UnRegisteredUser("Jathu", "Vavuniya", "jathu@gmail.com",
769052508, 2);
 ur1->giveFeedback(f1);
 ur1->displayUnRegisteredUser();
 cout<< "---------------Feedback---------------" << endl;
 f->displayFeedback();
 cout << endl;
 f1->displayFeedback();

 //Staff class
 Company com1, com2, com3;
 com1.setAddCompanyDetails("Green Agriculture(Pvt)Ltd.", (char*)"C4090", "Kurunegala",
"Agriculture");
 com1.getDisplayCompanyDetails();
 com2.setAddCompanyDetails("Mandarin Reid(pvt)Ltd.", (char*)"C7080", "Colombo",
"Marketing");
 com2.getDisplayCompanyDetails();
 com3.setAddCompanyDetails("Virtusa(Pvt)Ltd.", (char*)"C7640", "Kandy", "IT");
 com3.getDisplayCompanyDetails();

 //Company class
 Staff St1, St2, St3;
St1.setAddUserDetails((char*)"U5020", "Kavindu", "Colomno", (char*)"0713265880");
St1.getDisplayUserDetails();
St2.setAddUserDetails((char*)"U5021", "Ann", "Kandy", (char*)"0773575097");
St2.getDisplayUserDetails();
St3.setAddUserDetails((char*)"U5022", "Tharaka", "Jaffna", (char*)"0754329590");
St3.getDisplayUserDetails();
//Registration class and Selection Process class
//object creation
SelectionProcess * selectionProcess= new SelectionProcess();
Registration* registration= new Registration();
Company* company= new Company();
Interview* interview= new Interview();
RegisteredUser* registeredUser= new RegisteredUser();
//method calling
registration->setRegistration();
registration->displayRegistration();
selectionProcess->setSelectionProcess();
selectionProcess->updateSelectionProcessDetails();
selectionProcess-> displaySelectionProcessDetails();

 //Interview class

cout<<"-----Interview Details-------- " <<endl<<endl;
interview uc1("Online","ABC Company",101,20);
uc1.displayinterviewdetails();
//Admin class and Jobvacancy class
Admin*a=new Admin(110,"Sara");
 Jobvacancy*j=new Jobvacancy("Graphic designer","SJ company",50000,a);
 Jobvacancy*j1=new Jobvacancy("Architect","AB company",40000,a);
 Jobvacancy*j2=new Jobvacancy("Engineer","SD company",42000,a);
 a->displayAdmin();
delete selectionProcess;
delete registration;
delete company;
delete interview;
delete registeredUser;
return 0;
}