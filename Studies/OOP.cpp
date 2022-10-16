#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel
{
private:
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublisheVideosTiles;

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




int main()
{
    YouTubeChannel ytchannel("Code Nerd","Leonardo");
    ytchannel.InsertVideo("C++ beginners Video    0");
    ytchannel.InsertVideo("Machine Learning Video 1");
    ytchannel.InsertVideo("Computer Vision Video  2");
    // ytchannel.Subscribe();
    // ytchannel.Subscribe();
    // ytchannel.Subscribe();
    // ytchannel.Subscribe();
    ytchannel.Unsubscribe();
    ytchannel.GetInfo();
    for (int i = 0; i < 10000; i++)
    {
      ytchannel.Subscribe();
    }

    ytchannel.setName("Silva Nerd");
    ytchannel.GetInfo();
    

    // ytchannel.Name = "I read somewhere";
    // ytchannel.OwnerName = "Leonardo";
    // ytchannel.SubscribersCount = 40000;
    // ytchannel.PublisheVideosTiles =  {"C++ for beginners Video 1", "Machine Learning VIdeo 2","Computer Vision Video3"};

    // cout << "Name: " << ytchannel.Name << endl;
    // cout << "OwnerName: " << ytchannel.OwnerName << endl;
    // cout << "SubscribersCount: " << ytchannel.SubscribersCount << endl;
    // cout<<"Videos:"<<endl;
    // for (string videoTItle : ytchannel.PublisheVideosTiles)
    // {
    //    cout << videoTItle<<endl;
    // }
    


}