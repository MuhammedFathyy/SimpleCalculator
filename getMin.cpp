#include "prototypes.h"

// The function finds the minimum value in a vector
int getMin(std::vector<int> numbers) {
    // Set the initial minimum value to the first value in the vector
    int min = numbers[0];
    // Iterate through all values in the vector
    for (int number : numbers) {
        // Update the minimum value if a smaller value is found in the vector
        if (number < min) {
            min = number;
        }
    }
    // Return the updated minimum value
    return min;
}
