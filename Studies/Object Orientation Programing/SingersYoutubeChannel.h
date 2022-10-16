#include<iostream>
#include "YouTubeChannel.h"
using namespace std;

class SingersYoutubeChannel:public YouTubeChannel
{
    public:
    SingersYoutubeChannel(string name, string ownername): YouTubeChannel(name, ownername){

    }
    void Pratice(){
        cout << OwnerName <<" is talking singing classes, learning new songs, learning how to dance..."<<endl;
    }

};