#include <prototypes.h>

int getSum(std::vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        sum += number;
    }
    return sum;
}