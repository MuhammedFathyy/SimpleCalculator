#include "prototypes.h"

int main()
{
    std::vector<int> numbers(10);
    for(int i = 0; i < 10; i++)
    {
        numbers[i] = i + 1;
    }
    std::cout << "Sum: " << getSum(numbers) << std::endl;
    std::cout << "Average: " << getAverage(numbers) << std::endl;
    std::cout << "Min: " << getMin(numbers) << std::endl;
}