#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Citizen {
    int id, age;
    string name, city;
public:
    void setData(int i, string n, int a, string c) {
        id=i; name=n; age=a; city=c;
    }
    void display() {
        cout << id<<" "<<name<<" "<<age<<" "<<city<<endl;
    }
};

int main() {
    vector<Citizen> list;
    int ch;

    do {
        cout<<"\n1.Add 2.View 3.Exit: ";
        cin>>ch;

        if(ch==1){
            Citizen c;
            int id, age;
            string name, city;

            cin>>id>>age;
            cin.ignore();
            getline(cin,name);
            getline(cin,city);

            c.setData(id,name,age,city);
            list.push_back(c);
        }
        else if(ch==2){
            for(auto &c:list) c.display();
        }

    } while(ch!=3);

    return 0;
}
