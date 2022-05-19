
#include <cstring>
#include <iostream>
using namespace std;

class GuestUser
{
protected:
	char Name[20];
	char Email[20];
public:
	GuestUser(const char GName[], const char GEmail[]);
	virtual void DisplayDetails();
};

class Diet
{
private:
	int DietID;
public:
	Diet(int DDietID);
	void DisplayDiet();
};
class regUser :public GuestUser
{
private:
	int UserID;
	char Password[20];
	int DOB;
	char Gender[6];
	char LoginUserName[20];
  Diet *reg[2];
public:
	regUser(const char RName[], const char REmail[], int RUserID, const char RPassword[], int RDOB, const char RGender[], const char RLoginUserName[]);
	void AssignDetails();
	void UpdateDetails();
	void AddDeitPlan(Diet *reg1,Diet*reg2);
	void Feedback();
	void Payment();
};
GuestUser::GuestUser(const char GName[], const char GEmail[])
{
	strcpy(Name, GName);
	strcpy(Email, GEmail);
}
void GuestUser::DisplayDetails()
{}
regUser::regUser(const char RName[], const char REmail[], int RUserID, const char RPassword[], int RDOB, const char RGender[], const char RLoginUserName[]) :GuestUser(RName, REmail)
{
	UserID = RUserID;
	strcpy(Password, RPassword);
	DOB = RDOB;
	strcpy(Gender, RGender);
	strcpy(LoginUserName, RLoginUserName);
}
void regUser::AssignDetails()
{}
void regUser::UpdateDetails()
{}
void regUser::AddDeitPlan(Diet *reg1,Diet*reg2)
{
  reg[0]=reg1;
  reg[1]=reg2;
}
void regUser::Feedback()
{}
void regUser::Payment()
{}
Diet::Diet(int DDietID)
{
	DietID = DDietID;
}

void Diet:: DisplayDiet()
{}

int main()
{
  Diet Di1(1);
}