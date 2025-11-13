#include <iostream>

int main() {
    int starting_organisms;
    double daily_increase;
    int num_days;

    // starting organisms
    do {
        std::cout << "Enter the starting number of organisms (minimum 2): ";
        std::cin >> starting_organisms;
        if (starting_organisms < 2) {
            std::cout << "Invalid input. Please enter a number greater than or equal to 2.\n";
        }
    } while (starting_organisms < 2);

    // daily increase
    do {
        std::cout << "Enter the average daily population increase (percentage, non-negative): ";
        std::cin >> daily_increase;
        if (daily_increase < 0) {
            std::cout << "Invalid input. Please enter a non-negative number.\n";
        }
    } while (daily_increase < 0);

    // number of days
    do {
        std::cout << "Enter the number of days they will multiply (minimum 1): ";
        std::cin >> num_days;
        if (num_days < 1) {
            std::cout << "Invalid input. Please enter a number greater than or equal to 1.\n";
        }
    } while (num_days < 1);

    // population size for each day
    double population_size = starting_organisms;
    std::cout << "\nDay\tPopulation Size\n";
    for (int day = 1; day <= num_days; ++day) {
        population_size += population_size * (daily_increase / 100);
        std::cout << day << "\t" << population_size << "\n";
    }

    return 0;
}