#include<iostream>

#include<cstring>
using namespace std;
class GuestUser
{
protected:
char Name[20];
char  Email[20];
public:
GuestUser();
GuestUser(const char GName[20],const char GEmail[20]);
virtual void DisplayDetails();};
class regUser
{
private:
int UserID;
char Password[20];
int DOB;
char Gender[6];
char LoginUserName[20];
public:
regUser(const int RUserID, const char RPassword[], int RDOB, const char RGender[],const char RLoginUserName[]);
void AssignDetails();
void UpdateDetails();
void ViewDeitPlan();
void Feedback();
void Payment();
};
class FeedBack
{
private:
int FeedBackID;
char F_Description[20];
int UserID;
public:
FeedBack();
FeedBack(const int FID,const char FDes[],const int UID);
void AssignDetails();
};
FeedBack::FeedBack()
{}
FeedBack::FeedBack(const int FID,const char FDes[],const int UID){
  strcpy(F_Description,FDes);
  FeedBackID = FID;
  UserID = UID;
  }
void FeedBack::AssignDetails()
{}
int main()
{FeedBack A1(123,"abcdefghi",25147);
  A1.AssignDetails(); 
  
  return 0;}