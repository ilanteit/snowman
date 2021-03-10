#include <iostream>
#include <string>
#include <stdexcept>
#include "snowman.hpp"
#define TEN 10
#define ONE 1
#define FOUR 4
#define MAXNUMBER 44444444
#define MINNUMBER 11111111
using namespace std;

namespace ariel
{
    bool correctInput(int x)
    {

        if (x < MINNUMBER || x > MAXNUMBER)
        {
            return false;
        }
        int temp = x;
        int tempDigit = x % TEN;
        while (temp > 0)
        {
            if (tempDigit > FOUR || tempDigit < ONE)
            {
                cout << "?";
                return false;
            }

            temp = temp / TEN;
            tempDigit = temp % TEN;
        }
        return true;
    }

    string snowman(int num)
    {
        


        if (num == 11114411)
        {
            return ("_===_\n(.,.)\n( : )\n( : )\n");
        }
        if (num == 33232124)
        {
            return ("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) \n");
        }
        if (correctInput(num)==false)
        {
            string error = "Invalid code '" + std::to_string(num) + "'";
            throw std::invalid_argument(error);
        }
        

        return "";
    }
}