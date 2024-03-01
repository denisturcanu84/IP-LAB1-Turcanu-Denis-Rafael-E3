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

class Centrala : public Cuptor {
private:
	string brand = "Unknown";
public:
	int getBrand() {
		return Brand;
	}
	void setBrand()
	{

	}
};


int main() {
	Heating cuptor1;
	cuptor1.setTemperature(250);
	cout << cuptor1.getTemperature();

}
