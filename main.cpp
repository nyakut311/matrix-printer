#include <array>
#include <iostream>
#include <limits>

const int MAXNUMBEROFROWS = 100;
const int MAXNUMBEROFCOLUMNS = 100;

void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int nrrows, int nrcolumns) {
    for (int i = 0; i < nrrows; ++i) {
        for (int j = 0; j < nrcolumns; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int nrrows, int nrcolumns) {
    for (int i = 0; i < nrrows; ++i) {
        for (int j = 0; j < nrcolumns; ++j) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            while (!(std::cin >> arr[i][j])) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Enter integer again for [" << i << "][" << j << "]: ";
            }
        }
    }
}

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> matrix;
    fillArray(matrix, 5, 4);
    printArray(matrix, 5, 4);
    return 0;
}
