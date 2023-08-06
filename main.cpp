#include <iostream>
using namespace std;

void fibonacciLoop(int term) {
    int i = 0, j = 1, k, fib;
    cout << "Fibonacci sequence using loops up to term " << term << ": ";
    cout << i << " " << j << " ";
    for (int n = 2; n < term; ++n) {
        k = i + j;
        cout << k << " ";
        i = j;
        j = k;
    }
    cout << endl;
}

int main() {
    int term;
    cout << "Enter the term for Fibonacci sequence: ";
    cin >> term;

    fibonacciLoop(term);

    return 0;
}

