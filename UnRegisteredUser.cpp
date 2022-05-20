#include "UnRegisteredUser.h"

UnRegisteredUser::UnRegisteredUser(string uName, string add, string mail, int no):User( uName,add,mail,no){
}
void UnRegisteredUser::displayUnRegisteredUser(){
  cout<<"Name: "<<username<<endl<<"Address: "<<address<<endl<<"Email: "<<email<<endl<<"Contact No: "<<contactNo<<endl<<endl;
}