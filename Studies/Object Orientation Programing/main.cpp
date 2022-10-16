#include<iostream>
#include "Cooking.h"
// #include "SingersYoutubeChannel.h"
using namespace std;

int main()
{
    CookingYoutubeChannel ytCooking("Leonardo'Kitchen", "Leonardo");
    ytCooking.InsertVideo("Apple pie");
    ytCooking.Subscribe();
    ytCooking.Subscribe();
    ytCooking.Subscribe();
    ytCooking.GetInfo();
    ytCooking.Pratice();
    ytCooking.setName("Silva");
    ytCooking.GetInfo();


    // YouTubeChannel ytchannel("Code Nerd","Leonardo");
    // ytchannel.InsertVideo("C++ beginners Video    0");
    // ytchannel.InsertVideo("Machine Learning Video 1");
    // ytchannel.InsertVideo("Computer Vision Video  2");
    // ytchannel.GetInfo();

    // SingersYoutubeChannel ytsingers("JohnSIngs", "Jhon");
    // ytsingers.Pratice();


}