#include <iostream>
using namespace std;

int main() {
    int arraySize;
    cin >> arraySize;

    int number[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> number[i];
    }

    for (int i = arraySize - 1; i >= 0; i--) {
        cout << number[i] << " ";
    }

    return 0;
}