#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include <cmath>


using std::cout;

// returns a number between -1 and 1
double random_number()
{
    //rand / randmax is between 0 and 1. Mulptiply by 2 then the interval is (0,2). Subtract 1 and the interval is -1,1.
    return ( (double) rand() / RAND_MAX) * 2 - 1;
}

const long TEST_CASE = 1e8;

int main()
{
    srand(time(0));

    
    long inside = 0; //number of points inside the unit circle.
    for(long i = 0; i < TEST_CASE; i++)
    {
        double px = random_number();
        double py = random_number();

        if(px*px + py*py <= 1) // unit circle is x^2 + y^2 <= 1
            inside++;
    }

    double estimation = 4.0 * inside / TEST_CASE;
    cout << "Estimation: " << estimation << "\n";

    cout << std::fixed;
    cout << std::setprecision(6);
    cout << "Error is " << abs(M_PI - estimation)/M_PI * 100 <<  " %\n";

    return 0;
}