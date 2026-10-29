#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
using namespace std;



int getMenuOption();
void motivationalmessage();
void generateExcusus();
int calculateluck(int age, int luckyNUmber);




int main() {
	// initiliazed variables

	int manuoption = 0;
	bool validOption = false;
	// get menu option 

	do {
		manuoption = getMenuOption();
		validOption = (getMenuOption < 0 || getMenuOption > 4 );
		if (!validOption) {
			cout << "You Dummy, invalid option chosen! Try again.\n";

        }
 
    } while (!validOption);
}

int getMenuOption() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
	cout << 

}


void motivationalmessage();
void generateExcusus();
int calculateluck(int age, int luckyNUmber);