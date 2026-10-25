
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double R, x, y;
    const double PI = acos(-1.0);

    cout << "Enter R: ";
    cin >> R;

    if (R <= 0 || R >= 3)
    {
        cout << "R must be between 0 and 3." << endl;
        return 0;
    }

    cout << "Enter x: ";
    cin >> x;

    if (x <= -7 - R)
        y = R;
    else if (x < -7 + R)
        y = R - sqrt(R * R - (x + 7) * (x + 7));
    else if (x <= -4)
        y = R;
    else if (x <= 0)
        y = -R * x / 4;
    else if (x <= PI)
        y = sin(x);
    else
        y = x - PI;

    cout << "Result: y = " << y << endl;

    return 0;
}
