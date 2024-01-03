#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int faces = 6;
    int total_combinations = faces * faces;

    std::cout << "Total combinations possible: " << total_combinations << std::endl;
    
    std::cout << ""<< std::endl;

    std::vector<std::vector<int>> combinations(faces, std::vector<int>(faces, 0));

    // Calculate and fill the combinations matrix
    for (int i = 0; i < faces; ++i) {
        for (int j = 0; j < faces; ++j) {
            combinations[i][j] = (i + 1) + (j + 1);
        }
    }

    // Display the distribution
    std::cout << "Distribution of possible combinations:\n";
    for (int i = 0; i < faces; ++i) {
        for (int j = 0; j < faces; ++j) {
            std::cout << combinations[i][j] << " ";
        }
        std::cout << std::endl;
    }

 std::cout << ""<< std::endl;
    const int num_possible_sums = 11;
    int frequency[num_possible_sums] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1}; // Frequency of each sum

    // Calculate and display the probability of each sum
    std::cout << "Probability of each sum:\n";
    for (int sum = 2; sum <= 12; ++sum) {
        double probability = static_cast<double>(frequency[sum - 2]) / total_combinations;
        std::cout << "P(Sum = " << sum << ") = ";
        if (frequency[sum - 2] == 1) {
            std::cout << "1/" << frequency[sum - 2] << " ";
        } else {
            std::cout << std::fixed << std::setprecision(4) << probability << " ";
        }
        std::cout << "= " << std::fixed << std::setprecision(4) << probability << std::endl;
    }

    
    return 0;
}
