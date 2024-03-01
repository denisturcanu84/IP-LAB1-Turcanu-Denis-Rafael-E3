#include <iostream>
using namespace std;

class Stove {
private:
	int temperature = 0;
public:
	int getTemperature() {
		return temperature;
	}
	void setTemperature(int temp) {
		if (temp <= 0) {
			temperatura = 0;
		}
		else if (temp >= 30) {
			temperatura = 30;
		}
		else
			temperatura = temp;
	}
};


int main() {
	Stove stove1;
	cout << stove1.gettemperature;

}
