#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Creating a vector
    vector<int> numbers = {5, 2, 8, 1, 9};

    cout << "Original vector: ";
    printVector(numbers);

    // push_back: Add element to the end
    numbers.push_back(6);
    cout << "After push_back(6): ";
    printVector(numbers);

    // pop_back: Remove last element
    numbers.pop_back();
    cout << "After pop_back(): ";
    printVector(numbers);

    // insert: Insert element at a specific position
    numbers.insert(numbers.begin() + 2, 7);
    cout << "After insert(7) at index 2: ";
    printVector(numbers);

    // erase: Remove element at a specific position
    numbers.erase(numbers.begin() + 1);
    cout << "After erase() at index 1: ";
    printVector(numbers);

    // size: Get the size of the vector
    cout << "Size of vector: " << numbers.size() << endl;

    // front and back: Access first and last elements
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;

    // sort: Sort the vector
    sort(numbers.begin(), numbers.end());
    cout << "After sorting: ";
    printVector(numbers);

    // reverse: Reverse the vector
    reverse(numbers.begin(), numbers.end());
    cout << "After reversing: ";
    printVector(numbers);

    // clear: Remove all elements
    numbers.clear();
    cout << "After clear(), size: " << numbers.size() << endl;

    return 0;
}