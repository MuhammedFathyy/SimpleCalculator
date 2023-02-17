#include <prototypes.h>

// Returns the average value of all elements in a given vector of integers
int getAverage(std::vector<int> numbers)
{
    // Sum up all numbers in the vector
    int sum = getSum(numbers);
    // Compute the average by dividing the sum by the size of the vector
    int average = sum / numbers.size();
    // Return the calculated average
    return average;
}
