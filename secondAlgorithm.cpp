#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include <cmath>


using std::cout;


const long TEST_CASE = 1e7;

int main()
{
    srand(time(0));

    double value = 0;

    for(int i = 0; i < TEST_CASE; i++)
    {
        value += (i % 2 == 0 ? +1.0 : -1.0) * 4.0/(2*i+1);
    }


    double estimation = value;
    cout << "Estimation: " << estimation << "\n";

    cout << std::fixed;
    cout << std::setprecision(8);
    cout << "Error is " << abs(M_PI - estimation)/M_PI * 100 <<  " %\n";

    return 0;
}