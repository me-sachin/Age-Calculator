#include<iostream>
using namespace std;
int days  (int a, int b);
int months (int a, int b);
int years  (int a, int b);
int main ()
{
 int current_date ;
 int current_month;
 int current_year;
 int dob;
 int dob_month;
 int dob_year;
 int date;
 int month;
 int year;
 cout<<" \t \t \t LEP AGE CALCULATOR \n \n  ";
 cout<<" Enter Current Date : ";
 cin>>current_date;
 cout<<endl;
 cout<<"   Enter Current Month : ";
 cin>>current_month;
 cout<<endl;
 cout<<"   Enter Current Year : ";
 cin>>current_year;
 cout<<endl;
 cout<<"   Enter Your Date of Birth 's Day : ";
 cin>>dob;
 cout<<endl;
 cout<<"   Enter Your Date of Birth' Month : ";
 cin>>dob_month;
 cout<<endl;
 cout<<"   Enter Your Date of Birth ' Year : ";
 cin>>dob_year;
 date = days(current_date,dob);
 month = months(current_month,dob_month);
 year = years(current_year,dob_year);
 cout<<endl<<endl;
 cout<<" \t \t You Age is : "<<date<<" Days  " <<month<<" Months "<<" and "<<year<<" Years old "<<endl<<endl;
 cout<<" \t \t \t\ \t \t \t Keep Grwoing :)";
}
int days  (int a , int b)
{
 return a-b;
}
int months  (int a , int b)
{
 return a-b;
}
int years  (int a , int b)
{
 return a-b;
}
