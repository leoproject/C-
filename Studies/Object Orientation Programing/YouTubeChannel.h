#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel {
private:
  string Name;
  int SubscribersCount;
  list<string> PublisheVideosTiles;

protected:
   string OwnerName;


public:
    YouTubeChannel(string name, string ownername){
    Name = name;
    OwnerName = ownername;
    SubscribersCount = 0;
  }

  void GetInfo(){
    cout << endl << "Information about Channel:" << endl; 
    cout << "Name: " << Name << endl;
    cout << "OwnerName: " << OwnerName << endl;
    cout << "SubscribersCount: " << SubscribersCount << endl;
    cout<<"Videos:"<<endl;
    for (string videoTitle : PublisheVideosTiles)
    {
       cout << videoTitle<<endl;
    }

  }

  void InsertVideo(string NameVideo){
    PublisheVideosTiles.push_back(NameVideo);
  }

  void Subscribe(){
    SubscribersCount++;
  }

  void Unsubscribe(){
    if(SubscribersCount > 0)
      SubscribersCount--;
  }

  void getName(){
    cout << Name;
  }

  void getOwnerName(){
    cout << OwnerName;
  }

  void setName(string name){
    Name = name;
  }

  void setOwnerName(string ownername){
    OwnerName = ownername;
  }

};