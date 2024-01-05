#include<iostream>
using namespace std;
    //Income calculator which calculates the income of a person whose tax is made after everything that he gets such as bonus, overtime.
int main()
{
    int count;
    cout << "How many times do you want to calculate yor income: ";
    cin >> count; 
for (int i=0; i<count; i++)
{
    int gross, work_hour, pension, tax_rate,
    overtime_bonusrate,overtime_pay,extra_hours,net_salary;
    cout << "\n your gross salary: "<<endl;
    cin >> gross;
    cout << "\n hours you work: "<<endl;
    cin >> work_hour;
    if (work_hour > 40){
        cout << "\n overtime bonus rate: "<<endl;
        cin >> overtime_bonusrate;
    }   
    extra_hours = work_hour - 40;
    overtime_pay = extra_hours * overtime_bonusrate;
    pension = gross*7/100;
    net_salary = (gross)+overtime_pay;
    if (net_salary <=200){
        tax_rate = net_salary*0/100;
    }
    else if (net_salary >=200 && net_salary <=600){
        tax_rate = net_salary*10/100;
    }
    else if (net_salary >=600 && net_salary <=1200){
        tax_rate = net_salary*15/100;
    }
    else if (net_salary >=1200 && net_salary <=2000){
        tax_rate = net_salary*20/100;
    }
    else if (net_salary>=2000 && net_salary <= 3500){
        tax_rate = net_salary*25/100;
    }
    else {
        tax_rate = net_salary*30/100;
    }
    net_salary = net_salary - tax_rate - pension;
    if (net_salary>0){
    cout << "Your net salary is "<< net_salary << endl;
    }
    else {
        cout <<"Error";
    }
}
}