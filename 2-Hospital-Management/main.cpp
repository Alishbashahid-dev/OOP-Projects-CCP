#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Patient {
    int id;
    string name, illness, status;
public:
    void setData(int i,string n,string ill){
        id=i; name=n; illness=ill; status="NotAdmitted";
    }
    void admit(){ status="Admitted"; }
    void discharge(){ status="Discharged"; }
    int getID(){ return id; }
    void display(){
        cout<<id<<" "<<name<<" "<<illness<<" "<<status<<endl;
    }
};

int main(){
    vector<Patient> p;
    int ch;

    do{
        cout<<"\n1.Add 2.Admit 3.Discharge 4.View 5.Exit: ";
        cin>>ch;

        if(ch==1){
            Patient x;
            int id;
            string name, ill;

            cin>>id;
            cin.ignore();
            getline(cin,name);
            getline(cin,ill);

            x.setData(id,name,ill);
            p.push_back(x);
        }
        else if(ch==2){
            int id; cin>>id;
            for(auto &x:p)
                if(x.getID()==id) x.admit();
        }
        else if(ch==3){
            int id; cin>>id;
            for(auto &x:p)
                if(x.getID()==id) x.discharge();
        }
        else if(ch==4){
            for(auto &x:p) x.display();
        }

    }while(ch!=5);

    return 0;
}
