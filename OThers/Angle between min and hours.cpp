
#include <bits/stdc++.h>
using namespace std;

// Utility function to find minimum of two integers
int min(int x, int y)
{
    return (x < y)? x: y;

}

int calcAngle(double h, double m)
{
    // validate the input
    if (h <0 || m < 0 || h >12 || m > 60)
        printf("Wrong input");

    if (h == 12) h = 0;
    if (m == 60)
     {
      m = 0;
      h += 1;
       if(h>12)
        h = h-12;
     }

    // Calculate the angles moved
    // by hour and minute hands
    // with reference to 12:00
    int hour_angle = 0.5 * (h * 60 + m);
    int minute_angle = 6 * m;

    // Find the difference between two angles
    int angle = abs(hour_angle - minute_angle);

    // Return the smaller angle of two possible angles
    angle = min(360 - angle, angle);

    return angle;
}

// Driver program to test above function
int main()
{
    cout << calcAngle(10, 40) << endl;
    cout << calcAngle(3, 30) << endl;
    return 0;
}
