#include <iostream>
#include <string>

using namespace std;

class GameSetting{
	static GameSetting* _instance;
	int _brightness;
	int _width;
	int _height;
	GameSetting() : _width(786), _height(1300), _brightness(75){}
	// all constructors should be private or public(iff you want to allow inheritance)

public:
	static GameSetting* getInstace() {
		if(_instance == NULL)
			_instance = new GameSetting();
		return _instance;
	}
	void setWidth(int width) {_width = width;}
	void setHeight(int height) {_height = height;}
	void setBrighness(int brightness) {_brightness = brightness;}

	int getWidth() {return _width;}
	int getHeight() {return _height;}
	int getBrightness() {return _brightness;}
	void displaySetting() {
		cout << "brightness: " << _brightness << endl;
		cout << "height: " << _height << endl;
		cout << "width: " << _width << endl << endl;
	}
};

GameSetting * GameSetting::_instance = NULL; // If we are declaring any member as static within a class, then we need to define it outside
                                             // the class as well, so that it gets memory allocated
                                             // GameSetting * is the type, _instance is the member variable of the class GameSetting

void someFunction () {
	GameSetting *setting = GameSetting::getInstace(); //Returns a global object and it gets assigned to *setting
	setting->displaySetting();
}

int main() {

	GameSetting *setting = GameSetting::getInstace();
	setting->displaySetting();
	setting->setBrighness(100);

	someFunction(); // we get the same values printed. This is the advantage with singleton pattern, wherever you go, you get the
                    // same instance all the time
	return 0;
}
