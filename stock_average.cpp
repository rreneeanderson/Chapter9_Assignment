//Renee Anderson
//This program stores stock prices and finds their sum and average
//Function that takes an array and its size, then returns sum and average.

#include <iostream>
using namespace std;

void getSumAndAverage(double stock[], int size, double &sum, double &average) {
    sum = 0;
    for (int i = 0; i < size; i++) {
        sum += stock[i];
    }
    average = sum / size;
}

int main() {
    //Initialize array with given stock prices
    double stock[] = {22.2, 22.7, 23.5, 22.8, 24.3, 25.6};
    int size = 6;
    double sum, average;

    //Will Call function to get results
    getSumAndAverage(stock, size, sum, average);

    cout << "Sum of stock prices: " << sum << endl;
    cout << "Average stock price: " << average << endl;

    return 0;
}
