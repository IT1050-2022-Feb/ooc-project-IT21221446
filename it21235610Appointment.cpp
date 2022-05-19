#include <iostream>
#include <cstring>
using namespace std;

 

class Payment
{
private:
char paymentID[10];
char paymentMethod[10];
int payuserID;
public:
Payment(int i);
Payment( const char payID[],const char PM[],const int payUID);
void assingDetails();
void printDetails ();
void displayPaymentDetails();

 

};

 


class Appointment
{
private:
int AppointmentID;
Payment *pay[2];

 


public:

 

Appointment();
Appointment(int A_ID);
//void addPayment(Payment *no1,Payment *no2);
void assignDetails();
};
Payment::Payment(int i)
{}
Payment::Payment(const char payID[],const char PM[],const int payUID)
{
strcpy(paymentID, payID) ;
strcpy(paymentMethod ,PM) ;
payuserID = 0;
}
void Payment::assingDetails()
{}
void Payment::printDetails ()
{}
void Payment::displayPaymentDetails()
{
}
Appointment:: Appointment()
{pay[0] = new Payment(1);
pay[1] = new Payment(2);}
Appointment:: Appointment(int A_ID)
{
AppointmentID = A_ID;
}
void addPayment(Payment *no1,Payment *no2)
{

 


}
void Appointment::assignDetails()
{ 
  cout << "Appointment ID is :" << AppointmentID << endl;
}
 