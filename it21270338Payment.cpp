#include <iostream>
#include<cstring>
using namespace std ;
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
class Payment
{
private:
char paymentID[10];
char paymentMethod[10];
int payuserID;
public:
Payment( const char payID[],const char PM[],const int payUID);

void assingDetails();
void printDetails ();
void displayPaymentDetails();

};


Payment::Payment(const char payID[],const char PM[],const int payUID)
{
strcpy(paymentID, payID) ;
strcpy(paymentMethod ,PM) ;
payuserID = 0;
}

void Payment::assingDetails()

{
//method implementation
}
void Payment::printDetails ()
{
}
void Payment::displayPaymentDetails()
{
}
int main()
{
Payment P1("45k78","kkk",78457);
P1.assingDetails();

 return 0;
}