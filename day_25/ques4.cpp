#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "Quiz Application\n\n";

    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. High-level Language\n2. Markup Language\n3. Query Language\n4. None\n";
    cin >> ans;
    if (ans == 1)
        score++;

    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 364\n2. 365\n3. 366\n4. 367\n";
    cin >> ans;
    if (ans == 3)
        score++;

    cout << "\n4. What is the result of 5 + 7?\n";
    cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
    cin >> ans;
    if (ans == 3)
        score++;

    cout << "\n5. Who is known as the Father of Computers?\n";
    cout << "1. Charles Babbage\n2. Newton\n3. Einstein\n4. Tesla\n";
    cin >> ans;
    if (ans == 1)
        score++;

    cout << "\nYour Score: " << score << "/5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}