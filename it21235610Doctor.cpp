#include <iostream>
#include <cstring>
using namespace std;

class GuestUser
{
protected:
char Name[20];
char Email[20];
public:
GuestUser(const char GName[],const char GEmail[]);
virtual void DisplayDetails();
};
class doctor: public GuestUser
{
private:
    int DoctorId;
    char Password[10];
    char Specialization[15];
    char LoginUsername[15];
    int TP;

public:
    doctor(const char DName[],const char DEmail[] ,const int D_DoctorId, const char D_Password[10], const char D_Specialization[15], const char D_LoginUsername[15], const int D_TP);
    void viewAppoinment();
    void assignDetails();
};
GuestUser::GuestUser(const char GName[], const char GEmail[])
{
  strcpy(Name,GName);
  strcpy(Email,GEmail);
}

void GuestUser::DisplayDetails()
{
}
doctor::doctor(const char DName[],const char DEmail[], const int D_DoctorId, const char D_Password[10], const char D_Specialization[15], const char D_LoginUsername[15], const int D_TP):GuestUser(DName,DEmail)
{
    DoctorId = D_DoctorId;
    strcpy(Password, D_Password);
    strcpy(Specialization, D_Specialization);
    strcpy(LoginUsername, D_LoginUsername);
    TP = D_TP;
}
void doctor::viewAppoinment()
{
}
void doctor::assignDetails()
{
    cout << "Doctor ID is :" << Password << endl;
}


int main()
{
  doctor D1("Rashini","Rashini.gmail.com",0215,"abs123","OPD","D_1234",704512011);
D1.DisplayDetails();

}