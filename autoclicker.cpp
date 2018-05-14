#include <iostream>
#include <windows.h>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main()

{
    int n = 1;		//number of times you want to click
    int x = 0;		//coord
    int y = 0;		//coord
	int r = 0;
    int times;		
    int done = 0;
    int lower, upper;
    string choice;

	srand((unsigned int)time(0));

    cout << "Autoclicker by Taylor" << endl;
    cout << "   " << endl;

    cout << "How many times do you wish to click? Enter 0 for infinite" << endl;
    cout << " : ";

	cin >> times;

	cout << "How much time should be between clicks? (Milliseconds)" << endl;
	cout << "lower bound (ms): ";
	cin >> lower;
	cout << "upper bound (ms): ";
	cin >> upper;

    while (done <= times)
    {
		r = rand() % (upper - lower + 1) + lower;
        Sleep(r);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
		if(times >= 1)
			done++;
    }

}
