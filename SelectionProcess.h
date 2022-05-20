#include "Registration.h"
#include "Company.h"
#include "Interview.h"

#define SIZE1 2
#define SIZE2 2

class SelectionProcess
{
	private: 
		char user_ID;
		char com_Name;
		char job_Title;
		char job_Category;
		char location;
		
		Registration* reg[SIZE1];
		Interview* inter[SIZE2];
		Company* company;
		
	public:
		SelectionProcess();
		SelectionProcess(int reg1, int reg2, int inter1, int inter2, Company* pcompany );
		void setSelectionProcess(char u_id, char c_name, char j_title, char j_cat, char loc , Company* pcompany);
		void updateSelectionProcessDetails();
		void displaySelectionProcessDetails();
		~Selection Process();	
};
