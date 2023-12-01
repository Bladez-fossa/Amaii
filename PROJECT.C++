#include <iostream>
using namespace std;
class Tenant{
protected:
    string tName, dateEntry;
    int tidNo,roomType;
    double bill;
public:
    Tenant();
    //void roomType();
    void settenantName();
    void settenantIDno();
    void setdateofEntry();
    void setRoomtype();
    void viewtenantDetails();
    void readPayment(int &rent);
};

Tenant::Tenant(){
cout<<"---TAKING TENANT DETAILS---\n";
cout<<"Enter your name: \n";
cin>>tName;
cout<<"Enter your identification number: \n";
cin>>tidNo;
cout<< tName << " enter you date of entry(today's date):  \n";
cin>>dateEntry;
}

void Tenant::settenantName(){
cout<<"Enter your name: \n";
cin>>tName;
}

void Tenant::settenantIDno(){
cout<<"Enter your identification number: \n";
cin>>tidNo;
}

void Tenant::setdateofEntry(){
cout<< tName << " enter you date of entry(today's date):  \n";
cin>>dateEntry;
}


void Tenant::viewtenantDetails() {
cout<<"These are the details that you have input: \n";
cout<< tName << " is you name \n";
cout<< tName << " you date of entry is " << dateEntry << endl;
cout<< tName << " you identification number is " << tidNo << endl;
char yu;
cout<<"Is there any wrong information?(answer with a Y/N) \n";
cin>>yu;
if(yu=='Y'|| yu=='y')
{
settenantName();
settenantIDno();
setdateofEntry();
setRoomtype();
cout<<"Your Details have been updated\n";
}
else

cout<<"PROCEED TO ROOM SELECTION:\n ";

}
void Tenant::setRoomtype(){
cout<< tName << " choose any room type from the list below: \n";
cout<<"1. Single shared \n";
cout<<"2. Doubly shared \n";
cout<<"3. Quadruply shared \n";
cout<<"REMEBER ROOM PRICE IS SET AT 20000 KSH FOR ALL THE ROOMS ABOVE!!! \n";
cout<<"PROCEED TO PAYMENT\n";
cin>>roomType;
}

void Tenant::readPayment(int &rent){
bill=rent;
int choice;
double amount;
cout<<"---PAYING RENT--- \n";
cout<<"---CHOOSE YOUR ROOMTYPE AGAIN--- \n";
cout<< "Choose your room type " <<endl;
cout<<"1. Single shared \n";
cout<<"2. Doubly shared \n";
cout<<"3. Quadruply shared \n";
cout<<"4. Exit \n";
cin>>choice;

switch(choice){

case 1:
   rent=20000;
   cout << "Your rent for this room is 20000. Please proceed with the payment.\n";
   cout<< "Enter amount payable: /n";
   cin>> amount;
   if (amount!=rent){
    cout<<"Not fully paid. Please pay in full: \n";

   }
   else
    cout<< tName << " your rent is paid. Thank you \n";
    break;

case 2:
   rent=10000;
   cout << "Your rent for this room is 10000(Since you live with a roommate). Please proceed with the payment.\n";
   cout<< "Enter amount payable: \n";
   cin>> amount;
   if (amount!=rent){
    cout<<"Not fully paid. Please pay in full: \n";

   }
   else
    cout<< tName << " your rent is paid. Thank you \n";
    break;

case 3:
   rent=5000;
   cout << "Your rent for this room is 4000(since you live with 3 room mates). Please proceed with the payment.\n";
   cout<< "Enter amount payable: \n";
   cin>> amount;
   if (amount!=rent){
    cout<<"Not fully paid. Please pay in full: \n";

   }
   else
    cout<< tName << " your rent is paid. Thank you \n";
    break;
default:
    cout<<"Invalid choice.\n";
    return;



}




}

int main()
{
int rent=0;
Tenant t;
t.settenantName();
t.settenantIDno();
t.viewtenantDetails();
t.setRoomtype();
t.readPayment(rent);
return 0;
}

