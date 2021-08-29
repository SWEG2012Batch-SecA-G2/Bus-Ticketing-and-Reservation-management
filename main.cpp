#include <iostream>
#include <cstring>
using namespace std;

struct date
{
    int dd,mm,yy;
};
// structure to hold employees information
struct employeeInfo
{
    int empId=100000,age;
    string empFullName, position,email,nationalId; // position of the employee in the organization i.e.driver,mechanic
    char sex;
    date empDate; // date of employment
    int phoneNumber,driverLicenseNo;

    //function to input and record employee information
void Record_Emp_Info(employeeInfo empData){
    cout<<"\t\t"<<"Employee Record Input Portal"<<endl;
    record:
        cout<<endl<<"empId: "<<empData.empId;
        cout<<endl<<"\t"<<"Employee Name: ";
        cin.ignore();
        getline(cin, empData.empFullName);
        cout<<"\t"<<"Employee's Age: ";
        cin>>empData.age;
        cout<<"\t"<<"Employee's Sex: ";
        cin>>empData.sex;
        cout<<"\t"<<"Employee's National ID: ";
        cin>>empData.nationalId;
        cout<<"\t"<<"Employee's Position: ";
        cin>>empData.position;
            if(empData.position=="driver")
            {
            cout<<"\t"<<"Employee's Driver License Number: ";
            cin>>empData.driverLicenseNo;
            }
        cout<<"\t"<<"Employee's Phone Number (0912345678): ";
        cin>>empData.phoneNumber;
        cout<<"\t"<<"Employee's Email: ";
        cin>>empData.email;
        cout<<"\t"<<"Date of employment (dd/mm/yy): ";
        cin>>empData.empDate.dd>>empData.empDate.mm>>empData.empDate.yy;
        empData.empId++;
        char button;
        cout<<endl<<"Would you like to record another employee information? (y/n) : ";
        cin>>button;
            if(button=='y'|| button=='Y')
                {
                    goto record;
                }
            else if(button=='n'||button=='N')
                {
                    exit;
                }
}
};
struct bus{
    int BID; //BUS ID
    string model; //BUS MODEL
    string color; //BUS COLOR
    string license;//BUS LICENSE
    int EID;// EMPLOYEE ID
    int distanceTraveled;//DISTANCE THE BUS TRAVELED
    int MID;// MAINTAINANCE HISTORY
    int inputBus(){
        cout<<"[+] Enter the bus id: ";
        cin>>BID;
        cout<<"[+] Enter the bus model: ";
        cin>>model;
        cout<<"[+] Enter the bus color: ";
        cin>>license;
        cout<<"[+] Enter the bus driver employee ID: ";
        cin>>EID;
        cout<<"[+] Enter the distance traveled by bus: ";
        cin>>distanceTraveled;
        cout<<"[+] Enter the bus maintainance ID: ";
        cin>>MID;
    }

};
struct customer{
    int CID; //CUSTOMER ID
    string name;// CUSTOMER NAME
    int age; //AGE OF THE CUSTOMER
    string identificationCard; //ID NUMBER OF THE CUSTOMER
    int balance; //THE BALANCE OF THE CUSTOMER
    char gender;//THE GENDER OF THE CUSTOintMER
    int travelDistance; //THE DISTANCE THAT THE CUSTOMER COVERED BY THE COMPANY SERVICE
    void inputCustomer(){
        cout<<"[+] Enter the customer ID: ";
        cin>>this->CID;
        cout<<"[+] Enter the customer name: ";
        cin>>this->name;
        cout<<"[+] Enter the customer age: ";
        cin>>this->age;
        cout<<"[+] Enter the customer balance: ";
        cin>>this->balance;
        cout<<"[+] Enter the customer gender: ";
        cin>>this->gender;
        cout<<"[+] Enter the customer traveled Distance: ";
        cin>>this->travelDistance;
    }
};
int main(){
employeeInfo empData;
empData.Record_Emp_Info(empData);
bus busInfo;
customer customerInfo;
busInfo.inputBus();
customerInfo.inputCustomer();
return 0;
}
