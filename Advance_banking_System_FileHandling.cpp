#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <chrono>

using namespace std;

// Function prototypes
void createAccount(int& a, string name[], long long account_number[], long long password[], long long balance[], long long withdraw2[], long long deposit2[], long long update2[]);
void loginAccount(int a, string name[], long long account_number[], long long password[], long long balance[], long long withdraw2[], long long deposit2[], long long update2[], long long verification, int withdraw, int deposite, int update);
void saveAccountData(int a, string name[], long long account_number[], long long password[], long long balance[], bool isSignup);
void logTransactionDetails(int a, string name[], long long account_number[], long long balance[], long long withdraw2[], long long deposit2[], long long update2[], bool isSignup, const string& formatted_time);
void saveAccountCount(int a);

string getFormattedTime() {
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);
    struct tm* time_info;
    time_info = localtime(&now_time);
    char formatted_time[100];
    strftime(formatted_time, sizeof(formatted_time), "%Y-%m-%d %H:%M:%S", time_info);
    return string(formatted_time);
}

int main() {
    int choice, a = 0, withdraw, deposite, update;
    string name[100];
    long long account_number[100] = { 0 }, password[100] = { 0 }, balance[100] = { 0 }, verification, verification2;
    long long withdraw2[100] = { 0 }, deposit2[100] = { 0 }, update2[100] = { 0 };
    // account numbers
	ifstream count_file("account_count.txt", ios::app);
    if (count_file.is_open()) {
        count_file >> a; 
        count_file.close();
    } else {
        cout << "No previous data found. Starting fresh.\n";
    }
    // Load data from file
    ifstream infile("bank_data.txt", ios::app);
    if (infile.is_open()) {
        for (int i = 0; i < a; i++) {
            infile >> account_number[i];
            infile.ignore();
            getline(infile, name[i]);
            infile >> balance[i];
            infile >> password[i];
        }
        infile.close();
    } else {
        cout << "No previous data found. Starting fresh.\n";
    }

    do {
        cout << "\n\t\t\t\t\t-------Choose from the following:--------- ";
        cout << "\n\n\t\t\t\t\t1-Create a new account";
        cout << "\n\t\t\t\t\t2-Login to an existing account";
        cout << "\n\t\t\t\t\t3-Exit the program";
        cout << "\n\n\t\t\t\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                createAccount(a, name, account_number, password, balance, withdraw2, deposit2, update2); 
                break;
            
            case 2: 
                loginAccount(a, name, account_number, password, balance, withdraw2, deposit2, update2, verification, withdraw, deposite, update); 
                break;

            case 3:
                cout << "\n\t\t\t\t\tThank you for using the system.";
                return 0;

            default:
                cout << "\n\t\t\t\t\tInvalid choice. Please try again.";
        }
    } while (choice != 3);

    return 0;
}

// Function to create a new account
void createAccount(int& a, string name[], long long account_number[], long long password[], long long balance[], long long withdraw2[], long long deposit2[], long long update2[]) {
    string formatted_time = getFormattedTime();

    // Getting user details for creating an account
    cout << "\n\t\t\t\t\tEnter your name: ";
    cin.ignore();  // To avoid skipping the input
    getline(cin, name[a]);  // Read the full name
    cout << "\n\t\t\t\t\tEnter your account number: ";
    cin >> account_number[a];
    cout << "\n\t\t\t\t\tEnter 8-digit password: ";
    cin >> password[a];

    // Checking if the account number already exists
    bool account_exists = false;
    for (int i = 0; i < a; i++) {
        if (account_number[a] == account_number[i]) {
            account_exists = true;
            break;
        }
    }

    // If account already exists, exit the function
    if (account_exists) {
        cout << "\n\t\t\t\t\tThis account already exists\n\n";
        return;
    }

    cout << "\n\t\t\t\t\tEnter your initial balance (must be greater than 100): ";
    cin >> balance[a];
    while (balance[a] < 100) {
        cout << "\n\t\t\t\t\tInsufficient balance. Please enter again: ";
        cin >> balance[a];
    }

    cout << "\n\n\t\t\t\t\tThanks for your time. Your account has been created.\n";
    a++;  
    // Save data
    saveAccountData(a, name, account_number, password, balance, true);
    saveAccountCount(a);
}

// Function to login to an existing account
void loginAccount(int a, string name[], long long account_number[], long long password[], long long balance[], long long withdraw2[], long long deposit2[], long long update2[], long long verification, int withdraw, int deposite, int update) {
    string formatted_time = getFormattedTime();

    int choice;
    long long account_number2, password2;

    cout << "\n\t\t\t\t\t---------Enter the following---------\n";
    cout << "\n\t\t\t\t\tEnter your account number: ";
    cin >> account_number2;
    cout << "\n\t\t\t\t\tEnter your password: ";
    cin >> password2;

    bool login_successful = false;
    for (int i = 0; i < a; i++) {
        if (account_number[i] == account_number2 && password[i] == password2) {
            login_successful = true;
            a = i;
            break;
        }
    }

    if (!login_successful) {
        cout << "\n\n\t\t\t\t\tWrong password or account number.\n\n";
        return;
    }

    // Account menu after login
    do {
        cout << "\n\t\t\t\t\t--------Choose from the following:----------";
        cout << "\n\n\t\t\t\t\t1-Transaction";
        cout << "\n\t\t\t\t\t2-View account details";
        cout << "\n\t\t\t\t\t3-Exit the program";
        cout << "\n\n\t\t\t\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                // Transaction options
                int sub_choice;
                cout << "\n\t\t\t\t\t--------Choose from the following:----------";
                cout << "\n\n\t\t\t\t\t1-Withdraw your balance";
                cout << "\n\t\t\t\t\t2-Deposit your balance";
                cout << "\n\t\t\t\t\t3-Update your account";
                cout << "\n\n\t\t\t\t\tEnter your choice: ";
                cin >> sub_choice;
                switch (sub_choice) {
                    case 1: // Withdraw
                        cout<<"\n\t\t\t\t\tEnter your withdrawal amount: ";
            	        cin>>withdraw;
            	        cout<<"\n\t\t\t\t\tEnter your password: ";
            		    cin>>verification;
            	    if(verification == password[a])
					{  
            	        if(withdraw > balance[a] || withdraw < 0)
            	        {
            	    	    cout<<"\n\n\t\t\t\t\tInsufficiant balance";
            	    	    cout<<"\n\t\t\t\t\tWithdrawal amount is unsuccessful\n";
					    }
					    else
					    {
            	            balance[a] -= withdraw;
            	            cout<<"\n\n\t\t\t\t\tNow your current balance is: "<<balance[a]<<"$";
            	            cout<<"\n\t\t\t\t\tWithdraw is successful\n";
            	            withdraw2[a] += withdraw;
            	        }
            	    }
            	    else
					{
						cout<<"\n\n\t\t\t\t\tWrong password.\n";
					}
                        break;

                    case 2: // Deposit
                        cout<<"\n\t\t\t\t\tEnter your deposite amount: ";
            		    cin>>deposite;
            		    cout<<"\n\t\t\t\t\tEnter your password: ";
            		    cin>>verification;
            		if(verification == password[a])
					{   
            		    if(deposite < 0)
            		    {
            			    cout<<"\n\n\t\t\t\t\tWrong entry";
            			    cout<<"\n\t\t\t\t\tDeposit amount is unsuccessful\n";
					    }
					    else
					    {
						    balance[a] += deposite;
							cout<<"\n\n\t\t\t\t\tNow your current balance is: "<<balance[a]<<"$"; 
						    cout<<"\n\t\t\t\t\tDeposit amount is successful\n";
						    deposit2[a] += deposite;
					    }
					}
					else
					{
						cout<<"\n\n\t\t\t\t\tWrong password.\n";
					}
                        break;

                    case 3: // Update
                         cout<<"\n\t\t\t\t\tEnter your password: ";
					    cin>>verification;
					if(verification == password[a])
					{
						cout<<"\n\t\t\t\t\tEnter the amount: ";
						cin>>update;
						if(update < 0)
						{
							cout<<"\n\n\t\t\t\t\tWrong entry.";
		                    cout<<"\n\t\t\t\t\tUpdate balance is unsccessful\n";
						}
						else
						{
							balance[a] = update;
							cout<<"\n\n\t\t\t\t\tNow your current balance is: "<<balance[a]<<"$";
							cout<<"\n\t\t\t\t\tUpdate balance is sccessful\n";
							update2[a] += update;
						}
					}
					else
					{
						cout<<"\n\n\t\t\t\t\tWrong password.\n";
					}
                        break;

                    default:
                        cout << "\n\t\t\t\t\tInvalid choice.";
                        break;
                }
                break;

            case 2: // View account details
                cout << "\n\t\t\t\t\tAccount holder name: " << name[a];
                cout << "\n\t\t\t\t\tAccount number: " << account_number[a];
                cout << "\n\t\t\t\t\tCurrent balance: " << balance[a] << "$";
                break;

            case 3: // Exit
              if(choice == 3)
              {
                cout << "\n\t\t\t\t\tThanks for using the system.";
                break;
              }
			break;

            default:
                cout << "\n\t\t\t\t\tInvalid choice.";
                break;
        }
    } while (choice != 3);
    logTransactionDetails(a, name, account_number, balance, withdraw2, deposit2, update2, true, formatted_time);
}

// Function to save account data to file
void saveAccountData(int a, string name[], long long account_number[], long long password[], long long balance[], bool isSignup) {
    ofstream outfile("bank_data.txt", ios::app);
    if (outfile.is_open()) {
            outfile << account_number[a-1] << endl;
            outfile << name[a-1] << endl;
            outfile << balance[a-1] << endl;
            outfile << password[a-1] << endl;
            outfile<<endl<<"------------------------------<>---------------------------"<<endl;
        outfile.close();
    } else {
        cout << "\n\t\t\t\t\tError saving account data!";
    }
}

// Function to log transaction details
void logTransactionDetails(int a, string name[], long long account_number[], long long balance[], long long withdraw2[], long long deposit2[], long long update2[], bool isSignup, const string& formatted_time) {
    ofstream transaction_log("transaction_logs.txt", ios::app);
    if (transaction_log.is_open()) {
        if (isSignup) {
            transaction_log << formatted_time << " - Acount holder name: " << name[a] << " (Account_No: " << account_number[a] << ").\n";
        }
        transaction_log << formatted_time << " - Transaction for account " << account_number[a] << " - Withdrawal: " << withdraw2[a] << ", Deposit: " << deposit2[a] << ", Balance update: " << update2[a] << ".\n";
        transaction_log<<endl<<"------------------------------<>---------------------------"<<endl;
        transaction_log.close();
    } else {
        cout << "\n\t\t\t\t\tError logging transaction details!";
    }
}

// Function to save account count to file
void saveAccountCount(int a) {
    ofstream count_file("account_count.txt");
    if (count_file.is_open()) {
        count_file << a;
        count_file.close();
    } else {
        cout << "\n\t\t\t\t\tError saving account count.";
    }
}
