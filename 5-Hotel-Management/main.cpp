#include <iostream>
#include <vector>
using namespace std;

class Room {
    int number;
    bool booked;
public:
    void setRoom(int n){
        number=n; booked=false;
    }
    void book(){ booked=true; }
    void freeRoom(){ booked=false; }
    int getNumber(){ return number; }
    void display(){
        cout<<number<<" "
            <<(booked?"Booked":"Free")<<endl;
    }
};

int main(){
    vector<Room> r;
    int ch;

    do{
        cout<<"\n1.Add 2.Book 3.Free 4.View 5.Exit: ";
        cin>>ch;

        if(ch==1){
            Room x;
            int n;
            cin>>n;
            x.setRoom(n);
            r.push_back(x);
        }
        else if(ch==2){
            int n; cin>>n;
            for(auto &x:r)
                if(x.getNumber()==n) x.book();
        }
        else if(ch==3){
            int n; cin>>n;
            for(auto &x:r)
                if(x.getNumber()==n) x.freeRoom();
        }
        else if(ch==4){
            for(auto &x:r) x.display();
        }

    }while(ch!=5);

    return 0;
}
