//Renee Anderson
//This one finds the biggest, second biggest, and smallest values from an array
//I made sure it uses a loop and works even if the numbers change

#include <iostream>
using namespace std;

void findValues(int selling[], int size, int &largest, int &secondLargest, int &smallest) {
    largest = selling[0];
    secondLargest = selling[0];
    smallest = selling[0];

    for (int i = 1; i < size; i++) {
        if (selling[i] > largest) {
            secondLargest = largest;
            largest = selling[i];
        } else if (selling[i] > secondLargest && selling[i] != largest) {
            secondLargest = selling[i];
        }

        if (selling[i] < smallest) {
            smallest = selling[i];
        }
    }
}

int main() {
    //Initialize array with the given selling prices
    int selling[] = {80, 50, 35, 65, 127, 77, 92, 85, 123, 90, 55, 124};
    int size = 12;
    int largest, secondLargest, smallest;

    //This Call function to find values
    findValues(selling, size, largest, secondLargest, smallest);

    cout << "Largest price: " << largest << endl;
    cout << "Second largest price: " << secondLargest << endl;
    cout << "Smallest price: " << smallest << endl;

    return 0;
}
