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
void DisplayDetails();
};
GuestUser::GuestUser()
{}
GuestUser::GuestUser(const char GName[20],const char GEmail[20])
{
strcpy(Name,GName);
strcpy(Email,GEmail);
}
void GuestUser::DisplayDetails()
{ }13
int main()
{
GuestUser G1("Rashini","Rashini.gmail.com");
G1.DisplayDetails();
return 0;
}