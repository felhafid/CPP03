#include <iostream>
#include <list>


using namespace std;

class YouTubeChannel{
        private:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishVideoTitles;  
        public:
        YouTubeChannel(string _Name, string _OwnerName)
        {
            Name = _Name;
            OwnerName = _OwnerName;
            SubscribersCount = 0;
        }
        void get_info()
        {
            cout << "Name : " << Name << std::endl;
            cout << "OwnerName : " << OwnerName << std::endl;
            cout << "SubscribersCount : " << SubscribersCount << std::endl;
        }
        // YouTubeChannel(string)
};
//public public in yOutub is public to in cooking
// youtubChannel is the base class
// cooking the Derived class or subclass Inheritance
//protrcted
class CookingYouTubeChannel:public YouTubeChannel{
    private:

    public:
        CookingYouTubeChannel(string Name, string OwnerName) : YouTubeChannel(Name, OwnerName)
        {

        }
        void Practice()
        {
            cout << "practice cooking , learning new recipes, expermenting with spices ..." << endl;
        }
};

int main ()
{
    CookingYouTubeChannel ytChannel("mnf", "walo");
    // YouTubeChannel ytChannel2("Amysings", "mnf");
    ytChannel.get_info();
    ytChannel.Practice();
    YouTubeChannel ytc("waaww", "code bbn");
    ytc.

    // ytChannel2.get_info();
    // system("pause>0");
}