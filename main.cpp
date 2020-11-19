#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int seconds;
    cout << "Cursor movement frequency: ";
    cin >> seconds;

    while(true) {
        int randNum = rand() % ((500 - 200) + 1) + 200;
        int randNum2 = rand() % ((250 - 850) + 1) + 250;

        SetCursorPos(randNum, randNum2);
        Sleep(seconds * 1000);
    }
}
