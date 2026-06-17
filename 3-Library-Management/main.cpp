#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
    int id;
    string title;
    bool issued;
public:
    void setData(int i,string t){
        id=i; title=t; issued=false;
    }
    void issue(){ issued=true; }
    void ret(){ issued=false; }
    int getID(){ return id; }
    void display(){
        cout<<id<<" "<<title<<" "
            <<(issued?"Issued":"Available")<<endl;
    }
};

int main(){
    vector<Book> b;
    int ch;

    do{
        cout<<"\n1.Add 2.Issue 3.Return 4.View 5.Exit: ";
        cin>>ch;

        if(ch==1){
            Book x;
            int id;
            string t;

            cin>>id;
            cin.ignore();
            getline(cin,t);

            x.setData(id,t);
            b.push_back(x);
        }
        else if(ch==2){
            int id; cin>>id;
            for(auto &x:b)
                if(x.getID()==id) x.issue();
        }
        else if(ch==3){
            int id; cin>>id;
            for(auto &x:b)
                if(x.getID()==id) x.ret();
        }
        else if(ch==4){
            for(auto &x:b) x.display();
        }

    }while(ch!=5);

    return 0;
}
