#include<iostream>
#include "YouTubeChannel.h"
using namespace std;

class CookingYoutubeChannel:public YouTubeChannel
{
public:
    CookingYoutubeChannel(string name, string ownername): YouTubeChannel(name, ownername){

    }
    void Pratice(){
        cout << OwnerName <<" is practicing cooking, learning new recipes, experimenting with spices..."<<endl;
    }

};