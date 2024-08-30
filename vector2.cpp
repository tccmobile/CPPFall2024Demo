#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

// Function to display elements of a vector
void displayVector(const vector<int>& vec) {
    cout << "Vector elements: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // 1. Initializing a vector
    vector<int> numbers = {10, 20, 30, 40, 50};
    cout << "Initial vector: ";
    displayVector(numbers);

    // 2. Adding elements to the vector
    numbers.push_back(60); // Adds 60 to the end of the vector
    numbers.push_back(70);
    cout << "After adding elements: ";
    displayVector(numbers);

    // 3. Accessing elements
    cout << "Element at index 2: " << numbers[2] << endl; // Accessing using index
    cout << "First element: " << numbers.front() << endl; // First element
    cout << "Last element: " << numbers.back() << endl;   // Last element

    // 4. Inserting elements
    numbers.insert(numbers.begin() + 1, 15); // Inserts 15 at index 1
    cout << "After inserting 15 at index 1: ";
    displayVector(numbers);

    // 5. Removing elements
    numbers.pop_back(); // Removes the last element
    cout << "After removing the last element: ";
    displayVector(numbers);

    numbers.erase(numbers.begin() + 2); // Removes the element at index 2
    cout << "After removing the element at index 2: ";
    displayVector(numbers);

    // 6. Iterating over the vector
    cout << "Iterating over the vector using an iterator: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 7. Sorting the vector
    sort(numbers.begin(), numbers.end());
    cout << "After sorting: ";
    displayVector(numbers);

    // 8. Clearing the vector
    numbers.clear();
    cout << "After clearing, vector size: " << numbers.size() << endl;

    return 0;
}
