#include <iostream>
using namespace std;
class person{
    private:
    string name;
    string address;
     long int mob_no;
     int id_no;
     int hours;
     int salary;
     public:
     int accept()
     {
         cout<<"\nenter the name: \t";
         cin>>name;
         cout<<"\nenter the address: \t";
         cin>>address;
         cout<<"\nenter the mobile number:\t";
         cin>>mob_no;
         cout<<"\nenter the id number:\t";
         cin>>id_no;
         cout<<"\nenter the salary:\t";
         cin>>salary;
         cout<<"\nenter working hours:\t";
         cin>>hours;
         return 0;
     }
     int display()
     {
         cout<<"\nname: "<<name;
         cout<<"\naddress: "<<address;
         cout<<"\nmobile numbe: "<<mob_no;
          cout<<"\nidentity number: "<<id_no;
          cout<<"\nworking hours: "<<hours;
          cout<<"\nsalary: "<<salary;
          return 0;
     }
};
class doctor:public person{
    private:
    string speciality;
    public:
    int dget()
    {
    accept();
    cout<<"\n enter the speciality:\t";
    cin>>speciality;
    display();
    cout<<"speciality in: "<<speciality;
    cout<<endl;
    return 0;
    }
};
class nurse:public person{
    private:
    int ward_no;
    public:
    int nget()
    {
    accept();
    cout<<"\nenter the ward no:\t";
    cin>>ward_no;
    display();
    cout<<"\nward no: "<<ward_no;
    cout<<endl;
    return 0;
    }
};
class A_staff:public person{
    private:
    string designation;
    public:
    int aget()
    {
    accept();
    cout<<"\nenter the designation:\t";
    cin>>designation;
    display();
    cout<<"\ndesignation: "<<designation;
    cout<<endl;
    return 0;
    }
};
int main()
{
    person p;
    doctor d;
    nurse n;
    A_staff a;
    
    int ch;
    do{
    cout<<"\nchoose the option: \n1: enter the data of doctor. \n2: enter the data of nurse \n3: enter the data of assistant staff \n";
    cin>>ch;
    
    switch(ch)
    {
        case 1:
        d.dget();
        break;
        case 2:
        n.nget();
        break;
        case 3:
        a.aget();
        break;
        default:
        cout<<"enter appropriate option: ";
        break;
        
    }
    }while(ch<4);
    return 0;
}