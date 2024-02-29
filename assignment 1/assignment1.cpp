#include <iostream>
#include <stdlib.h>
using namespace std;

class atm {
    int id, pass, login_id, login_pass, bal = 0, dep, with;
    char choice;

public:
    void printIntroMenu() {
        cout << "Please select an option from the menu below:))" << endl;
        cout << "l-> Login:)) \nc-> Create New Account:)) \nq -> Quit:((" << endl;
        cin >> choice;
    }

    void printMainMenu() {
        cout << "d -> Deposit the Money:) \nw -> Withdraw the Money:) \nr -> Request the Balance:) \nq -> Quit:(" << endl;
        cin >> choice;
    }

    void login() {
        cout << "Please enter your user id:):- ";
        cin >> login_id;
        cout << "Please enter your  password: ";
        cin >> login_pass;
    }

    void createAccount() {
        cout << "Please enter your user id:):- ";
        cin >> id;
        cout << "Please enter your password:): ";
        cin >> pass;
        cout << "grateful! Your account has been created:))!" << endl;
    }

    void start() {
        printIntroMenu();
        while (true) {
            switch (choice) {
                case 'l':
                    login();
                    if (id == login_id && pass == login_pass) {
                        cout << "Access to your account is Granted now:))!" << endl;
                        while (true) {
                            printMainMenu();
                            switch (choice) {
                                case 'd':
                                    cout << "Amount of deposit:- $";
                                    cin >> dep;
                                    bal += dep;
                                    break;
                                case 'w':
                                    cout << "Amount of withdrawal:- $ ";
                                    cin >> with;
                                    if (with <= bal) {
                                        bal -= with;
                                    } else {
                                        cout << "The balance in your account is insufficient!:((" << endl;
                                    }
                                    break;
                                case 'r':
                                    cout << "Your balance is:-" << bal << endl;
                                    break;
                                case 'q':
                                    cout << "Thanks for stopping by in our atm!:))" << endl;
                                    exit(0);
                                    break;
                                default:
                                    cout << "The option you selected is invalid. Please try again:((." << endl;
                                    break;
                            }
                        }
                    } else {
                        cout << "* Login is failed:((! *" << endl;
                        printIntroMenu();
                    }
                    break;
                case 'c':
                    createAccount();
                    printIntroMenu();
                    break;
                case 'q':
                    cout << "Thanks for stopping by in our ATM:))!" << endl;
                    exit(0);
                    break;
                default:
                    cout << "The option you selected is invalid. Please try again:((." << endl;
                    printIntroMenu();
                    break;
            }
        }
    }
};

int main() {
    atm a1;
    cout << "Welcome to Bhavya's  ATM Machine :))" << endl;
    a1.start();
    return 0;
}
