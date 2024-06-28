#include <iostream>
using namespace std;

int playQuiz();

int main() {
    char playagain;

    do {
        int final = playQuiz();
        cout << "Your Total Score is: " << final << endl;

        if (final >= 6) {
            cout << "You Pass!" << endl;
        } else {
            cout << "You Fail" << endl;
        }

        cout << "Do You Want to Play the QUIZ again? ('y' or 'n'): ";
        cin >> playagain;

    } while (playagain == 'y' || playagain == 'Y');

    cout << "Thank You for Playing the QUIZ..." << endl;

    return 0;
}

int playQuiz() {
    char c;
    char option;
    int score = 0;

    cout << "---------- Welcome To Quiz Game -----------" << endl;
    cout << "------ Please Follow The Instructions ------" << endl;
    cout << " 1: Quiz Contains Total 10 Questions" << endl;
    cout << " 2: You Will Get 1 Mark for Each Right Answer" << endl;
    cout << " 3: There Will Be No Negative Marking" << endl;
    cout << " 4: Please Press 's' To Start The Quiz" << endl;
    cout << " 5: Please Select Option a, b, c, or d" << endl;
    cout << " 6: If You Score >=6, You Will Pass The Quiz" << endl;

    cin >> c;
    if (c != 's' && c != 'S') {
        cout << "You Entered the Wrong Value. Please Enter 's' To Start." << endl;
        return playQuiz();
    }

    cout << "Q1. What is The Capital Of India?" << endl;
    cout << "(a) Delhi (b) Mumbai (c) Kolkata (d) Chennai" << endl;
    cin >> option;
    if (option == 'a' || option == 'A') score++;

    cout << "Q2. Who is The Prime Minister Of India?" << endl;
    cout << "(a) Narendra Modi (b) Adityanath (c) Kejriwal (d) Yesh Patel" << endl;
    cin >> option;
    if (option == 'a' || option == 'A') score++;

    cout << "Q3. What is The National Bird Of India?" << endl;
    cout << "(a) Pigeon (b) Peacock (c) Sparrow (d) Parrot" << endl;
    cin >> option;
    if (option == 'b' || option == 'B') score++;

    cout << "Q4. What is The National Animal Of India?" << endl;
    cout << "(a) Dog (b) Zebra (c) Lion (d) Tiger" << endl;
    cin >> option;
    if (option == 'd' || option == 'D') score++;

    cout << "Q5. What is The National Flower Of India?" << endl;
    cout << "(a) Lotus (b) Rose (c) Lily (d) Sunflower" << endl;
    cin >> option;
    if (option == 'a' || option == 'A') score++;

    cout << "Q6. Who is The Chief Minister Of UP?" << endl;
    cout << "(a) Adityanath (b) Kejriwal (c) Yesh Patel (d) Rahul Gandhi" << endl;
    cin >> option;
    if (option == 'a' || option == 'A') score++;

    cout << "Q7. How many loksabha seats are there in delhi?" << endl;
    cout << "(a) 5 (b) 10 (c) 5 (d) 7" << endl;
    cin >> option;
    if (option == 'd' || option == 'D') score++;

    cout << "Q8. What is The Capital Of Jharkhand?" << endl;
    cout << "(a) Dhanbad (b) Ranchi (c) Ramgarh (d) Patna" << endl;
    cin >> option;
    if (option == 'b' || option == 'B') score++;

    cout << "Q9. Who is The Leader Of BJP?" << endl;
    cout << "(a) JP Nadda (b) Narendra modi (c) Rahul gandhi (d) Amit shah" << endl;
    cin >> option;
    if (option == 'a' || option == 'A') score++;

    cout << "Q10. Which One Of The Following States is in North India?" << endl;
    cout << "(a) Delhi (b) Bangalore (c) Kerala (d) Chennai" << endl;
    cin >> option;
    if (option == 'a' || option == 'A') score++;

    return score;
}
