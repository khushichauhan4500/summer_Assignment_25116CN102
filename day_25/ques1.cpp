#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess > number)
            cout << "Too High\n";
        else if (guess < number)
            cout << "Too Low\n";
        else
            cout << "Congratulations! You guessed correctly.\n";

    } while (guess != number);

    return 0;
}