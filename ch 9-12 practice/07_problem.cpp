#include<iostream>
#include<iostream>
using namespace std;

// Multiple Inheritance — Smart Device

class camera{
    public:
    void takephoto(){
        cout << "Camera : take photo" << endl;
    }
     void start() {
        cout << "Camera: Starting camera" << endl;
    }
};

class musicplayer{
    public :
    void playmusic(){
        cout << "Music palyer : on the music ";
    }
    void start() {
        cout << "MusicPlayer: Starting music player" << endl;
    }
};

class smartphone : public camera , public musicplayer{
    public :
     void makecall() {
        cout << "SmartPhone: Making a call" << endl;
    }
};

int main(){
    smartphone s1;
    s1.makecall();
    s1.playmusic();
    s1.takephoto();
    s1.camera::start();
    s1.musicplayer::start();
    return 0;
}