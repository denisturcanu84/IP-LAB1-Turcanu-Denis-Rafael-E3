#include <iostream>
using namespace std;

class Heating {
private:
	int temperature = 0;
public:
	int getTemperature() {
		return temperature;
	}
	void setTemperature(int temp) {
		if (temp <= 0) {
			temperature = 0;
		}
		else if (temp >= 100) {
			temperature = 100;
		}
		else
			temperature = temp;
	}
};

class Centrala : public Heating {
private:
	string brand = "Unknown";
public:
	string getBrand() {
		return brand;
	}
	void setBrand(string B)
	{
		brand = B;
	}
};


int main() {
	Heating cuptor1;
	cuptor1.setTemperature(250);
	cout << cuptor1.getTemperature() << endl;
	Centrala centrala1;
	centrala1.setBrand = "Bosch";
	centrala1.setTemperature(50);
	cout << centrala1.getBrand << centrala1.getTemperature << endl; 

}
