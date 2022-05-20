#include "RegisteredUser.h"
class Registration{
	
	private:
		char reg_ID;
    	char reg_Name;
    	int reg_Num;
		char reg_Date;
		char user_ID;
		
		RegisteredUser* registereduser;	 		

	public:
		Registration();
		Registration(ResiteredUser* pregisteredUser);
		void setRegistration(char r_id, char r_name, int r_num, char r_date, char u_id );	
        void displayRegistration();
       
};
