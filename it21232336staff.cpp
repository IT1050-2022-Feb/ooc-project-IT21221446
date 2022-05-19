#include<iostream>
#include<cstring>
using namespace std;

class GuestUser
{
protected:
char Name[20];
char Email[20];
public:
GuestUser();
GuestUser(const char GName[20],const char GEmail[20]);
virtual void DisplayDetails();
};
class Staff: public GuestUser
{
private:
	int StaffID ;
	char LoginUserName[20];
	char Password[10];
	char StaffType[10];
	int NIC;
  int TP;
public:
	Staff();
	Staff(const char SName[20],const char SEmail[20],  int SID, const char SLname[20], const char SPassword[10], const char SType[10],  int Snic, int Stp);
	void AssignDetails();
	void UpdateSystem();
	void AddUserDetails();

};
GuestUser::GuestUser(const char GName[20],const char GEmail[20])
{
strcpy(Name,GName);
strcpy(Email,GEmail);
}
void GuestUser::DisplayDetails()
{}

Staff::Staff()
{}
Staff::Staff(const char SName[20],const char SEmail[20], int SID, const char SLname[20], const char SPassword[10], const char SType[10], int Snic, int Stp):GuestUser(SName,SEmail)
{
	
	strcpy(LoginUserName, SLname);
	strcpy(Password, SPassword);
	strcpy(StaffType, SType);
	StaffID=SID;
	NIC=Snic;
	TP= Stp;

}
void Staff:: AssignDetails()
{

}
void Staff:: UpdateSystem() {

}
void Staff:: AddUserDetails() {

}
int main()
{
	Staff S1("12548","khuy",78125, "Kavindu","k1322KK2","KK1K",20001570,77254722 );
	S1.AssignDetails();

	return 0;
}