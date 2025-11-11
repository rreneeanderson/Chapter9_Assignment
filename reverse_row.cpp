//Renee Anderson
//This one flips a row inside a matrix — like turning it backward
//It uses a basic swap loop so that the row reverses in place

#include <iostream>
using namespace std;

void reverseRow(int quantity[3][5], int rows, int cols, int rowNum) {
    int left = 0;
    int right = cols - 1;

    while (left < right) {
        int temp = quantity[rowNum][left];
        quantity[rowNum][left] = quantity[rowNum][right];
        quantity[rowNum][right] = temp;
        left++;
        right--;
    }
}

int main() {
    // Initialize matrix with the given numbers
    int quantity[3][5] = {
        {2, 4, 3, 6, 9},
        {5, 8, 9, 3, 7},
        {1, 4, 3, 2, 10}
    };

    int rows = 3, cols = 5, rowNum = 1; 

    cout << "Matrix before reversing row " << rowNum << ":\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << quantity[i][j] << " ";
        }
        cout << endl;
    }

    //Call function to reverse chosen row
    reverseRow(quantity, rows, cols, rowNum);

    cout << "\nMatrix after reversing row " << rowNum << ":\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << quantity[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
