#include <iostream>
#include <iomanip>

int evenSum (int uNum)
{
    if (uNum >1)
    {
        int sumNum {};
        sumNum = sumNum + uNum;
        uNum = uNum-2;
        evenSum(uNum);
        return sumNum;
    }
}

int main()
{
    std::cout << "Enter a number to find the sums of even numbers up until that number." << std::endl;
    int uNum {};
    std::cin >> uNum;

    int modNum = uNum %2;
    if (modNum > 0)
    {
        uNum = uNum -1;
    }
    int summedNum = evenSum(uNum);
    std::cout << "The sum of the numbers are: " << summedNum << std::endl;

    return 0;
}
