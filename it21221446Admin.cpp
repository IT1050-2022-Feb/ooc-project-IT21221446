#include<iostream>
#include<cstring>
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
class Admin:public GuestUser
{
private:
    int AdminID;
    char LoginUserName[20];
    char Password[20];
    char TP[11];
    char NIC[13];
public:
    Admin(const char AName[], const char AEmail[], int AAdminID, const char ALoginUserName[], const char APassword[], const char ATP[], const char ANIC[]);
    void AssignDetails();
    void AddUserDetails();
    void AddDoctorDetails();
    void DisplayDetails();
};
GuestUser::GuestUser(const char GName[], const char GEmail[])
{
    strcpy(Name, GName);
    strcpy(Email, GEmail);
}
void GuestUser::DisplayDetails()
{
}

Admin::Admin(const char AName[], const char AEmail[], int AAdminID, const char ALoginUserName[], const char APassword[], const char ATP[], const char ANIC[]) :GuestUser(AName,AEmail)
{
    AdminID=AAdminID;
    strcpy(LoginUserName, ALoginUserName);
    strcpy(Password, APassword);
    strcpy(TP, ATP);
    strcpy(NIC, ANIC);
}
void Admin::AssignDetails()
{}
void Admin::AddUserDetails()
{}
void Admin::AddDoctorDetails()
{}
void Admin::DisplayDetails()
{
}

int main()
{
    GuestUser G1("Rashini", "Rashini.gmail.com");
    Admin A1("Pasindu","Pasindu@gmail.com", 123, "Pasindu123", "123456pasindu", "0789456123", "455207894564");
  cout<<"Code is over";
return 0;
  
}