#include <iostream>

using namespace std;

// Шаблонна функція для підрахунку числа входжень елемента в масив
template <typename T>
int countOccurrences(T* array, int size, T value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] == value) {
            ++count;
        }
    }
    return count;
}

int main() {
    int intArray[] = { 1, 2, 3, 2, 4, 2, 5 };
    double doubleArray[] = { 1.1, 2.2, 3.3, 2.2, 4.4, 2.2, 5.5 };
    char charArray[] = { 'a', 'b', 'c', 'b', 'd', 'b', 'e' };

    cout << "Number of 2s in intArray: " << countOccurrences(intArray, 7, 2) << endl;
    cout << "Number of 2.2s in doubleArray: " << countOccurrences(doubleArray, 7, 2.2) << endl;
    cout << "Number of 'b's in charArray: " << countOccurrences(charArray, 7, 'b') << endl;

    return 0;
}
