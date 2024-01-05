#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Employee
{
    public:
        int id;
        char name[30];
        char addr[50];

        Employee(){}
        Employee(int id, string _name, string _add)
        {
            id = id;
            strcpy(name, _name.c_str());
            strcpy(addr, _add.c_str());
        }
        void info()
        {
           cout << "ID: " << id << "\tName: " << name << "\tAddr: " << addr << '\n';
        }
};

void create(Employee obj)
{
    ofstream f("details.dat", ios::binary | ios::app);
    f.write((char *) &obj, sizeof(obj));
    f.close();
}
void read()
{
    ifstream f("details.dat", ios::binary);
    Employee obj;
    while(f.read((char *)&obj, sizeof(obj))) obj.info();
    f.close();

}

int main()
{
    Employee a(1, "MIKI", "NYC");
    Employee b(2, "kunu", "Brooklyn");

    //create(a);
    //create(b);
    read ();

    return 0;
}