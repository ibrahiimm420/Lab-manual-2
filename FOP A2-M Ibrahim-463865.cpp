// Task 1
#include <iostream>

int main() {
    // Input the student's score
    double score;
    std::cout << "Enter the student's score: ";
    std::cin >> score;

    char grade; // To store the assigned grade

    // Check the score against predefined criteria and assign a grade
    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 75 && score < 90) {
        grade = 'B';
    } else if (score >= 60 && score < 75) {
        grade = 'C';
    } else if (score >= 45 && score < 60) {
        grade = 'D';
    } else if (score >= 0 && score < 45) {
        grade = 'F';
    } else {
        std::cout << "Invalid score! Please enter a score between 0 and 100." << std::endl;
        return 1; // Exit with an error code
    }

    // Display the assigned grade
    std::cout << "The student's grade is: " << grade << std::endl;

    return 0; // Exit successfully
}

// Task 2
#include <iostream>

using namespace std;

int main() {
    // Input an integer
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is both even and divisible by 5
    if (num % 2 == 0 && num % 5 == 0) {
        cout << num << " is both even and divisible by 5." << endl;
    } else {
        cout << num << " is not both even and divisible by 5." << endl;
    }

    return 0;
}

// Task 3
#include <iostream>

using namespace std;

int main() {
    int year;

    // Input the year from the user
    cout << "Enter a year: ";
    cin >> year;

    // Check if it's a leap year
    bool isLeapYear = false;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        isLeapYear = true;
    }

    // Display the result
    if (isLeapYear) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

// Task 4 
#include <iostream>

using namespace std;

int main() {
    // Constants for eligibility criteria
    const double MIN_GPA = 3.5;
    const double MIN_ATTENDANCE_PERCENT = 80.0;

    // Variables to store student's GPA and attendance
    double gpa;
    double attendancePercent;

    // Input the student's GPA and attendance percentage
    cout << "Enter the student's GPA: ";
    cin >> gpa;
    cout << "Enter the student's attendance percentage: ";
    cin >> attendancePercent;

    // Check if the student is eligible for a scholarship
    if (gpa >= MIN_GPA && attendancePercent >= MIN_ATTENDANCE_PERCENT) {
        cout << "The student is eligible for a scholarship!" << endl;
    } else {
        cout << "The student is not eligible for a scholarship." << endl;
    }

    return 0;
}

// Task 5
 #include <iostream>

using namespace std;

int main() {
    char ch;

    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to lowercase to handle both cases (uppercase and lowercase)
    ch = tolower(ch);

    // Check if the character is a vowel using logical operators
    bool isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    // Check and display the result
    if (isalpha(ch)) {
        if (isVowel) {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << "Invalid input! Please enter a valid alphabet character." << endl;
    }

    return 0;
}

