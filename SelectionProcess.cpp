#include "SelectionProcess.h"
#define SIZE1 2
#define SIZE2 2

SelectionProcess:: SelectionProcess()
{
	
}

SelectionProcess(int reg1, int reg2, int inter1, int inter2, Company* pcompany )
{
	reg[0]= new Registration(reg1);
	reg[1]= new Registration(reg2);
	
	inter[0]= new Interview(inter1);
	inter[1]= new Interview(inter2);
	
	company= pcompany;
	
}

void SelectionProcess:: setSelectionProcess(char u_id, char c_name, char j_title, char j_cat, char loc )
{
	user_ID= u_id;
	strcpy(com_Name, c_name);
	strcpy(job_Title , j_title);
	strcpy(job_Category , j_cat);
	strcpy(location , loc);
}
void SelectionProcess:: displaySelectionProcessDetails()
{
	cout << "User ID" << user_ID << endl;
	cout << "Company Name" << com_Name << endl;
	cout << "Job Tilte" << job_Title << endl;
	cout << "Job Category" << job_category << endl;
	cout << "Location" << location << endl;
}
SelectionProcess::~SelectionProcess()
{
	for(int i=0; i< SIZE1; i++)
	{
		delete reg[i];
	}
	
	for(int i=0; i< SIZE2; i++)
	{
		delete inter[i];
	}
	
}
