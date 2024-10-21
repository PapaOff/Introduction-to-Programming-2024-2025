#include <iostream>

int main() {
    const int numberOfGrades = 3;
    int math, bel, fizichesko;
    int totalScore = 0;
    int grade;

    std::cout << "Enter Math score (0-100): ";
    std::cin >> math;
    
    if (std::cin.fail() || math < 0 || math > 100) {
        std::cout << "Invalid input. Please enter a number between 0 and 100." << std::endl;
        return 1;
    }

    std::cout << "Enter Bel score (0-100): ";
    std::cin >> bel;
    
    if (std::cin.fail() || bel < 0 || bel > 100) {
        std::cout << "Invalid input. Please enter a number between 0 and 100." << std::endl;
        return 1;
    }

    std::cout << "Enter Fizichesko score (0-100): ";
    std::cin >> fizichesko;

    if (std::cin.fail() || fizichesko < 0 || fizichesko > 100) {
        std::cout << "Invalid input. Please enter a number between 0 and 100." << std::endl;
        return 1;
    }

    totalScore = math + bel + fizichesko;

    double average = (double)totalScore / numberOfGrades;

    if (average >= 90) {
        grade = 6;
    } else if (average >= 80) {
        grade = 5;
    } else if (average >= 70) {
        grade = 4;
    } else if (average >= 60) {
        grade = 3;
    } else {
        grade = 2;
    }

    switch (grade) {
        case 6:
          std::cout << "Congratulations! You parents should be proud!" << std::endl;
        case 5:
        case 4:
        case 3:
          std::cout << "Your average grade is " << average << " (" << grade << "). You have passed!" << std::endl;
          break;
        case 2:
            std::cout << "Your average grade is " << average << " (" << grade << "). You have failed. :(" << std::endl;
            break;
        default:
            std::cout << "Unexpected letter grade." << std::endl;
    }

    return 0;
}
