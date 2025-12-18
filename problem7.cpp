#include <iostream> 
#include <string>

//PROBLEM 7: https://leetcode.com/problems/reverse-integer/description/

// what this problem is asking is that you reverse an integer that is signed and 32 bit. 
// so you have to keep it in that range. 

// solved 12/18/2025

int reverse(int x)
{
    int result = 0;
    while (x != 0)
    {
        int number = x % 10; 
        x /= 10;

        // checking the range of the result INT_MAX and INT_MIN are macros in c that are for
        // what the max should be. 
        if(result > INT_MAX / 10 || result < INT_MIN / 10)
        {
            return 0;
        }


        // this is just simple math taking the result multiplying it by 10 and then adding
        // the new number that we got. 
        result = result * 10 + number;
    }

    return result;
}


int main() 
{
    int input1 = 123;
    std::cout << reverse(input1) << std::endl;


}