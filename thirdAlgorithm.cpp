#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include <cmath>


using std::cout;

//This algorithm is an infinite series called Nilakantha series.
// pi is equal to 3 + 4/(2*3*4) - 4/(4*5*6) + 4/(6*7*8) ...
// see https://www.ias.ac.in/article/fulltext/reso/002/05/0029-0043 for proof.

const long TEST_CASE = 1e4;

int main()
{
    srand(time(0));

    double value = 3;

    for(int i = 0; i < TEST_CASE; i++)
    {
        value += (i % 2 == 0 ? +1.0 : -1.0) * 4.0/( (2*i+2) * (2*i+3) * (2*i+4) );
    }


    double estimation = value;
    cout << "Estimation: " << estimation << "\n";

    cout << std::fixed;
    cout << std::setprecision(8);
    cout << "Error is " << abs(M_PI - estimation)/M_PI * 100 <<  " %\n";

    return 0;
}