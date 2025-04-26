
#include <iostream>
using namespace std;


void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integers (begin < end): ";
        cin >> begin >> end;
        if (begin >= end) {
        cout << "Invalid input.\n";
        }
    } while (begin >= end); 
}


int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}


int getNextPrime(int begin) {
    int next = begin + 1; 
    while (!isPrime(next)) {
        ++next;
    }
    return next; 
}


int getPrevPrime(int end) {
    int prev = end - 1; 
    while (prev > 1 && !isPrime(prev)) {
        --prev;
    }
    return prev; 
}