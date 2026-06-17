#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
    int id;
    string name;
public:
    void setData(int i,string n){
        id=i; name=n;
    }
    void display(){
        cout<<id<<" "<<name<<endl;
    }
};

int main(){
    vector<Student> s;
    int ch;

    do{
        cout<<"\n1.Add 2.View 3.Exit: ";
        cin>>ch;

        if(ch==1){
            Student x;
            int id;
            string name;

            cin>>id;
            cin.ignore();
            getline(cin,name);

            x.setData(id,name);
            s.push_back(x);
        }
        else if(ch==2){
            for(auto &x:s) x.display();
        }

    }while(ch!=3);

    return 0;
}
