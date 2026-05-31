#include <iostream>
using namespace std;
int main()
{
    int totalSeconds, hours, minutes, seconds;
    cin>> 7684;
    hours= totalSeconds /3600;
    minutes = (totalSeconds % 3600) /60;
    seconds = totalSeconds % 60;
    cout << totalSeconds << "seconds =";
    cout << hours << "hours";
    cout << minutes << "minutes";
    cout << seconds << "seconds";
    return 0;
}
