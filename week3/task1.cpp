#include <iostream>

int main() {
    int secretNumber, guess, tries = 0;

    std::cout << "Player 1, enter the secret number: ";
    std::cin >> secretNumber;

    for (int i = 0; i < 50; i++) {
        std::cout << std::endl;
    }

    do {
        std::cout << "Player 2, enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess < secretNumber) {
            std::cout << "The secret is higher..." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "You need to go lower..." << std::endl;
        }
    } while (guess != secretNumber);

    std::cout << "Congratulations! You guessed that " << secretNumber 
         << " is the secret number. It took you " << tries << " tries." << std::endl;

    return 0;
}
