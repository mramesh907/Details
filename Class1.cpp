#include<iostream>
using namespace std;
class detail
{
    private:
        string name;
        char fname[100],address[100],pin[10],mob[10];
    public:
        void input()
        {
            cout<<"Enter Your Name:";
             getline(cin,name);
             fflush(stdin);
            cout<<"Enter Your Father Name:";
            fgets(fname,100,stdin);
            cout<<"Enter Address:";
            cin.get(address,100);
            fflush(stdin);
            cout<<"Enter Pin:";
            fgets(pin,10,stdin);
            cout<<"Enter Mobile:";
            fgets(mob,10,stdin);
        }
        void show()
        {
            cout<<"Your Name:"<<name<<endl;
            cout<<name<<" Father's Name:"<<fname;
            cout<<endl<<name<<" Address:"<<address;
            cout<<endl<<name<<" Pin:"<<pin;
            cout<<endl<<name<<" Mobile:"<<mob;
        }
};
int main()
{
    detail r;
    r.input();
    r.show();
    return 0;
}