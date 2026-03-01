#include <iostream>
using namespace std;

int main() {

    int decision;
    bool exit = false;
    int balance = 5000;
    int password = 1234;
    int user_pass;
    int amount;
    string rec_acct;
    int new_pass1;
    int new_pass2;


    while (exit == false)
    {
        cout << "\nWelcome to a lil atm type shii" << endl;
        cout << "pick an operation: " << endl;
        cout << "1. check balance \n2. make transfer \n3. withdraw \n4. deposit money \n5. change pin \n6. exit" << endl;

        cin >> decision;
        if (decision > 6 || decision < 1)
        {
            cout << "shey this one dey mad nii you no see the numbers wey dey available for there??" << endl;
        }
        else if (decision >= 1 && decision <= 6)
        {
            switch (decision)
            {
            case 1:
                cout << "enter pin to carry out this task: " << endl;
                cin >> user_pass;
                if (user_pass != password)
                {
                    cout << "oga comot here joor. Ole " << endl;
                    break;
                }
                else
                {
                    cout << "your balance is: #" << balance << endl;
                    break;
                };
                break;
            case 2:
                cout << "Enter the recipient's account number:" << endl;
                cin >> rec_acct;
                if(rec_acct.length() != 10) {
                    cout << "Oga this account number is not valid" << endl;
                }
                else {
                    cout << "Enter amount:";
                    cin >> amount;
                    cout << "Transfer " << amount << " to " << rec_acct << ", Enter pin to continue: " << endl;
                    cin >> user_pass;
                    if (user_pass != password)
                    {
                        cout << "oga comot here joor. Ole " << endl;
                        break;
                    }
                    else if (amount > balance)
                    {
                        cout << "poor man wan transfer pass ein account wey only get " << balance << endl;
                        break;
                    }
                    else
                    {
                        balance -= amount;
                        cout << "Transfer successful" << endl;
                        cout << "Account balance now is " << balance << endl;
                        break;
                    }
                }
                
                break;
            case 3:
                cout << "Enter amount you want to withdraw: " << endl;
                cin >> amount;
                if(amount > balance) {
                    cout << "Poor man don dey get lucid dreams " << endl;
                    cout << "na just " << balance << " you get for account " << endl;
                    break;
                }
                else {
                    cout << "Enter pin to withraw #" << amount << endl;
                    cin >> user_pass;
                    if(user_pass != password) {
                        cout << "oga comot here joor. Ole " << endl;
                        break;
                    }
                    else {
                        balance -= amount;
                        cout << "Successful!!" << endl;
                        cout << "Amount withdrawn: " << amount << endl;
                        cout << "Balance: " << balance << endl;
                        break;
                    }
                    break;
                }
                break;
            case 4:
                cout << "Enter the amount you would like to deposit in your account" << endl;
                cin >> amount;
                cout << "deposit " << amount << " in your account??" << endl;
                cout << "enter pin to continue " << endl;
                cin >> user_pass;
                if (user_pass != password)
                {
                    cout << "oga comot here joor. Ole " << endl;
                    break;
                }
                else
                {
                    balance += amount;
                    cout << amount << " has been deposited in your account, your balance is now: #" << balance << endl;
                    break;
                }
                break;
            case 5:
                cout<< "Enter pin to continue: " << endl;
                cin >> user_pass;
                if(user_pass != password) {
                    cout << "oga comot here joor. Ole " << endl;
                    break;
                }
                else {
                    cout << "Enter new pin: " << endl;
                    cin >> new_pass1;
                    cout << "Enter pin again: " << endl;
                    cin >> new_pass2;
                    if(new_pass1 != new_pass2) {
                        cout << "pins don't match" << endl;
                        break;
                    }
                    else {
                        password  = new_pass1;
                        cout << "Pin changed" << endl;
                        break;
                    }
                }
                break;
            case 6:
                exit = true;
                cout << "oya you dey go na!!" << endl;
                break;
            default:
                break;
            }
        }
        else
        {
            cout << "oga you be fowl" << endl;
        };
    };
    


    return 0;
}