#include"RegisterUser.h"

RegisterUser::RegisterUser(string uName, string add, string mail, int no, int jobId):User( uName,add,mail,no){
      job_id=jobId;
}
void RegisterUser::displayRegisterDetails(){
  cout<<"Name: "<<username<<endl<<"Address: "<<address<<endl<<"Email: "<<email<<endl<<"Contact No: "<<contactNo<<endl<<"Job ID : "<<job_id<<endl<<endl;
}