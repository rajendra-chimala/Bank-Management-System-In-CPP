#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

class BankManagementSystem {

    // My All Variables are Privates .
private:
    string firstName, lastName, address, contact, fatherName, motherName, dob;
    long int accountNumber;
    float balance;

public:


    void welcome();
    void createAccount();
    void deposit();
    void withdraw();
    void issueCheque();
    void allotSignature();
    void chequeExchange();
    void balanceInquiry();
    void searchAccount();
    void deleteAccount();
    void seeHistory();
    void displayMenu();
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


};


void BankManagementSystem::welcome(){

    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t\t\t\t\t\t\t         =          "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t       =====        "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t     =========      "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t   =============    "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t =================  "<<endl;Sleep(70);      
    cout<<"\t\t\t\t\t\t\t\t   =============    "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t   ==  == ==  ==    "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t   ==  == ==  ==    "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t   ==  == ==  ==    "<<endl;Sleep(70);  
    cout<<"\t\t\t\t\t\t\t\t =================  "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t =================  "<<endl;Sleep(70);  
    SetConsoleTextAttribute(h,4);
	cout<<"\n\n\t\t\t\t\t\t\t";
	cout<<"|";Sleep(60);
	cout<<"<";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"- ";Sleep(60);
	cout<<"W";Sleep(60);
    cout<<"E";Sleep(60);
    cout<<"L";Sleep(60);
	cout<<"C";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"M";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<" T";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<" T";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"C";Sleep(60);
	cout<<"H";Sleep(60);
	cout<<" ";Sleep(60);
	cout<<"B";Sleep(60);
	cout<<"A";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<"K";Sleep(60);
	cout<<"!";Sleep(60);
	cout<<" -";Sleep(60);
	cout<<"-";Sleep(60);	
	cout<<">";Sleep(60);
	cout<<"|";Sleep(60);
	getch();
}

void BankManagementSystem::createAccount() {
    system("CLS");

   
 
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t====================================================< CREATE ACCOUNT >============================================================ "<<endl;Sleep(70);

    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter Last Name: ";
    cin >> lastName;
    cout << "Enter Address: ";
    cin.ignore();
    getline(cin, address);
    cout << "Enter Contact: ";
    cin >> contact;
    cout << "Enter Father's Name: ";
    cin >> fatherName;
    cout << "Enter Mother's Name: ";
    cin >> motherName;
    cout << "Enter Date of Birth (YYYY/MM/DD): ";
    cin >> dob;
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Initial Balance: $";
    cin >> balance;

    ofstream outFile("accounts.txt", ios::app);

    if (outFile.is_open()) {
        outFile << firstName << " " << lastName << " " << address << " " << contact << " " << fatherName << " " << motherName << " "
                << dob << " " << accountNumber << " " << balance << endl;
        cout << "Account Created Successfully!" << endl;
        outFile.close();
    } else {
        cout << "Error Opening File!" << endl;
    }
}

void BankManagementSystem::deposit() {
      system("CLS");


 
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t=======================================================<  DEPOSIT >============================================================== "<<endl;Sleep(70);
    long int accNum;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Amount to Deposit: $";
    cin >> amount;

    ifstream inFile("accounts.txt");
    ofstream tempFile("temp.txt");

    bool found = false;

    if (inFile.is_open() && tempFile.is_open()) {
        while (inFile >> firstName >> lastName >> address >> contact >> fatherName >> motherName >> dob >> accountNumber >> balance) {
            if (accountNumber == accNum) {
                found = true;
                balance += amount;
            }
            tempFile << firstName << " " << lastName << " " << address << " " << contact << " " << fatherName << " " << motherName << " "
                     << dob << " " << accountNumber << " " << balance << endl;
        }
        inFile.close();
        tempFile.close();
        remove("accounts.txt");
        rename("temp.txt", "accounts.txt");

        if (!found) {
            cout << "Account Not Found!" << endl;
        } else {
            ofstream historyFile("history.txt", ios::app);
            if (historyFile.is_open()) {
                historyFile << accNum << " " << firstName << " " << lastName << " DEPOSIT " << amount << endl;
                historyFile.close();
            } else {
                cout << "Error Opening History File!" << endl;
            }
            cout << "Amount Deposited Successfully! New Balance: $" << balance << endl;
        }
    } else {
        cout << "Error Opening Files!" << endl;
    }
}

void BankManagementSystem::withdraw() {
      system("CLS");


 
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t=====================================================<  WITHDRAW AMT >============================================================ "<<endl;Sleep(70);

    long int accNum;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Amount to Withdraw: $";
    cin >> amount;

    ifstream inFile("accounts.txt");
    ofstream tempFile("temp.txt");

    bool found = false;

    if (inFile.is_open() && tempFile.is_open()) {
        while (inFile >> firstName >> lastName >> address >> contact >> fatherName >> motherName >> dob >> accountNumber >> balance) {
            if (accountNumber == accNum) {
                found = true;
                if (amount <= balance) {
                    balance -= amount;
                    tempFile << firstName << " " << lastName << " " << address << " " << contact << " " << fatherName << " " << motherName << " "
                             << dob << " " << accountNumber << " " << balance << endl;
                } else {
                    cout << "Insufficient Balance!" << endl;
                    tempFile << firstName << " " << lastName << " " << address << " " << contact << " " << fatherName << " " << motherName << " "
                             << dob << " " << accountNumber << " " << balance << endl;
                }
            } else {
                tempFile << firstName << " " << lastName << " " << address << " " << contact << " " << fatherName << " " << motherName << " "
                         << dob << " " << accountNumber << " " << balance << endl;
            }
        }
        inFile.close();
        tempFile.close();
        remove("accounts.txt");
        rename("temp.txt", "accounts.txt");

        if (!found) {
            cout << "Account Not Found!" << endl;
        } else if (amount <= balance) {
            ofstream historyFile("history.txt", ios::app);
            if (historyFile.is_open()) {
                historyFile << accNum << " " << " " << firstName << " " << lastName << " WITHDRAW " << amount << endl;
                historyFile.close();
            } else {
                cout << "Error Opening History File!" << endl;
            }
            cout << "Amount Withdrawn Successfully! New Balance: $" << balance << endl;
        }
    } else {
        cout << "Error Opening Files!" << endl;
    }
}

void BankManagementSystem::issueCheque() {
       system("CLS");


 
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t====================================================<  ISSUE CHEQUE >=========================================================== "<<endl;Sleep(70);

    long int accNum, newChequeNumber;

    cout << "Enter Account Number: ";
    cin >> accNum;

    ifstream inFile("accounts.txt");
    ofstream outFile("cheques.txt", ios::app);

    bool found = false;

    if (inFile.is_open() && outFile.is_open()) {
        while (inFile >> firstName >> lastName >> address >> contact >> fatherName >> motherName >> dob >> accountNumber >> balance) {
            if (accountNumber == accNum) {
                found = true;
                newChequeNumber = rand() % 90000 + 10000; 
                outFile << accNum << " " << newChequeNumber << endl;
                cout << "Cheque Issued Successfully! Cheque Number: " << newChequeNumber << endl;
            }
        }
        inFile.close();
        outFile.close();

        if (!found) {
            cout << "Account Not Found!" << endl;
        }
    } else{
        cout << "Error Opening Files!" << endl;
    }
}

void BankManagementSystem::allotSignature() {
    system("CLS");


 
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t===================================================<  ALLOT SIGNATURE >========================================================== "<<endl;Sleep(70);

    long int accNum, newSignature;

    cout << "Enter Account Number: ";
    cin >> accNum;

    ifstream inFile("accounts.txt");
    ofstream outFile("signatures.txt", ios::app);

    bool found = false;

    if (inFile.is_open() && outFile.is_open()) {
        while (inFile >> firstName >> lastName >> address >> contact >> fatherName >> motherName >> dob >> accountNumber >> balance) {
            if (accountNumber == accNum) {
                found = true;
                newSignature = rand() % 90000 + 10000; 
                outFile << accNum << " " << newSignature << endl;
                cout << "Signature Allotted Successfully! Signature Number: " << newSignature << endl;
            }
        }
        inFile.close();
        outFile.close();

        if (!found) {
            cout << "Account Not Found!" << endl;
        }
    } else {
        cout << "Error Opening Files!" << endl;
    }
}

void BankManagementSystem::chequeExchange() {
    system("CLS");


    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t===================================================< CHEQUE EXCHANGE >========================================================== "<<endl;Sleep(70);

    long int accNum, chequeNum, signatureNum;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Cheque Number: ";
    cin >> chequeNum;
    cout << "Enter Signature Number: ";
    cin >> signatureNum;

    ifstream inFile("accounts.txt");
    ofstream tempFile("temp.txt");

    bool foundAccount = false, foundCheque = false, foundSignature = false;

    if (inFile.is_open() && tempFile.is_open()) {
        while (inFile >> firstName >> lastName >> address >> contact >> fatherName >> motherName >> dob >> accountNumber >> balance) {
            if (accountNumber == accNum) {
                foundAccount = true;
                ifstream chequeFile("cheques.txt");
                ofstream tempChequeFile("tempcheques.txt");

                if (chequeFile.is_open() && tempChequeFile.is_open()) {
                    while (chequeFile >> accountNumber >> chequeNum) {
                        if (accountNumber == accNum && chequeNum == chequeNum) {
                            foundCheque = true;
                        } else {
                            tempChequeFile << accountNumber << " " << chequeNum << endl;
                        }
                    }
                    chequeFile.close();
                    tempChequeFile.close();
                    remove("cheques.txt");
                    rename("tempcheques.txt", "cheques.txt");
                } else {
                    cout << "Error Opening Cheque Files!" << endl;
                }

                ifstream signatureFile("signatures.txt");
                ofstream tempSignatureFile("tempsignatures.txt");

                if (signatureFile.is_open() && tempSignatureFile.is_open()) {
                    while (signatureFile >> accountNumber >> signatureNum) {
                        if (accountNumber == accNum && signatureNum == signatureNum) {
                            foundSignature = true;
                        } else {
                            tempSignatureFile << accountNumber << " " << signatureNum << endl;
                        }
                    }
                    signatureFile.close();
                    tempSignatureFile.close();
                    remove("signatures.txt");
                    rename("tempsignatures.txt", "signatures.txt");
                } else {
                    cout << "Error Opening Signature Files!" << endl;
                }

                if (foundCheque && foundSignature) {
                    cout << "Enter Amount to Withdraw from Cheque: $";
                    cin >> amount;

                    if (amount <= balance) {
                        balance -= amount;
                        tempFile << firstName << " " << lastName << " " << address << " " << contact << " " << fatherName << " " << motherName << " "
                                 << dob << " " << accountNumber << " " << balance << endl;

                        ofstream historyFile("history.txt", ios::app);
                        if (historyFile.is_open()) {
                            historyFile << accNum << " " << __DATE__ << " " << firstName << " " << lastName << " WITHDRAW " << amount << endl;
                            historyFile.close();
                        } else {
                            cout << "Error Opening History File!" << endl;
                        }

                        cout << "Cheque Exchanged Successfully! New Balance: $" << balance << endl;
                    } else {
                        cout << "Insufficient Balance!" << endl;
                    }
                }
            }

            tempFile << firstName << " " << lastName << " " << address << " " << contact << " " << fatherName << " " << motherName << " "
                     << dob << " " << accountNumber << " " << balance << endl;
        }
        inFile.close();
        tempFile.close();
        remove("accounts.txt");
        rename("temp.txt", "accounts.txt");

        if (!foundAccount) {
            cout << "Account Not Found!" << endl;
        } else if (!foundCheque) {
            cout << "Cheque Number Not Found!" << endl;
        } else if (!foundSignature) {
            cout << "Signature Number Not Found!" << endl;
        }
    } else {
        cout << "Error Opening Files!" << endl;
    }
}

void BankManagementSystem::balanceInquiry() {
    system("CLS");


    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t===================================================< BALANCE INQUIRY >========================================================== "<<endl;Sleep(70);
    long int accNum;

    cout << "Enter Account Number: ";
    cin >> accNum;

    ifstream inFile("accounts.txt");

    bool found = false;

    if (inFile.is_open()) {
        while (inFile >> firstName >> lastName >> address >> contact >> fatherName >> motherName >> dob >> accountNumber >> balance) {
            if (accountNumber == accNum) {
                found = true;
                cout << "Name: " << firstName << " " << lastName << endl;
                cout << "Address: " << address << endl;
                                cout << "Contact: " << contact << endl;
                cout << "Balance: $" << balance << endl;
                break; 
            }
        }
        inFile.close();

        if (!found) {
            cout << "Account Not Found!" << endl;
        }
    } else {
        cout << "Error Opening File!" << endl;
    }
}

void BankManagementSystem::searchAccount() {
    system("CLS");


    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t======================================================< SEARCH >============================================================= "<<endl;Sleep(70);

    long int accNum;

    cout << "Enter Account Number: ";
    cin >> accNum;

    ifstream inFile("accounts.txt");

    bool found = false;

    if (inFile.is_open()) {
        while (inFile >> firstName >> lastName >> address >> contact >> fatherName >> motherName >> dob >> accountNumber >> balance) {
            if (accountNumber == accNum) {
                found = true;
                cout << "Name: " << firstName << " " << lastName << endl;
                cout << "Address: " << address << endl;
                cout << "Contact: " << contact << endl;
                cout << "Account Number: " << accountNumber << endl;
                break;
            }
        }
        inFile.close();

        if (!found) {
            cout << "Account Not Found!" << endl;
        }
    } else {
        cout << "Error Opening File!" << endl;
    }
}

void BankManagementSystem::deleteAccount() {
    system("CLS");

    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t======================================================<  DELETE AC >============================================================= "<<endl;Sleep(70);

    long int accNum;

    cout << "Enter Account Number: ";
    cin >> accNum;

    ifstream inFile("accounts.txt");
    ofstream tempFile("temp.txt");

    bool found = false;

    if (inFile.is_open() && tempFile.is_open()) {
        while (inFile >> firstName >> lastName >> address >> contact >> fatherName >> motherName >> dob >> accountNumber >> balance) {
            if (accountNumber == accNum) {
                found = true;
            } else {
                tempFile << firstName << " " << lastName << " " << address << " " << contact << " " << fatherName << " " << motherName << " "
                         << dob << " " << accountNumber << " " << balance << endl;
            }
        }
        inFile.close();
        tempFile.close();
        remove("accounts.txt");
        rename("temp.txt", "accounts.txt");

        if (found) {
     
            ifstream chequeFile("cheques.txt");
            ofstream tempChequeFile("tempcheques.txt");

            if (chequeFile.is_open() && tempChequeFile.is_open()) {
                while (chequeFile >> accountNumber >> balance) {
                    if (accountNumber != accNum) {
                        tempChequeFile << accountNumber << " " << balance << endl;
                    }
                }
                chequeFile.close();
                tempChequeFile.close();
                remove("cheques.txt");
                rename("tempcheques.txt", "cheques.txt");
            } else {
                cout << "Error Opening Cheque Files!" << endl;
            }

            ifstream signatureFile("signatures.txt");
            ofstream tempSignatureFile("tempsignatures.txt");

            if (signatureFile.is_open() && tempSignatureFile.is_open()) {
                while (signatureFile >> accountNumber >> balance) {
                    if (accountNumber != accNum) {
                        tempSignatureFile << accountNumber << " " << balance << endl;
                    }
                }
                signatureFile.close();
                tempSignatureFile.close();
                remove("signatures.txt");
                rename("tempsignatures.txt", "signatures.txt");
            } else {
                cout << "Error Opening Signature Files!" << endl;
            }

            cout << "Account Deleted Successfully!" << endl;
        } else {
            cout << "Account Not Found!" << endl;
        }
    } else {
        cout << "Error Opening Files!" << endl;
    }
}

void BankManagementSystem::seeHistory() {
    system("CLS");

  
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t======================================================<  HISTORY  >============================================================= "<<endl;Sleep(70);

    long int accNum;
    string historyLine;

    cout << "Enter Account Number: ";
    cin >> accNum;

    ifstream historyFile("history.txt");

    bool found = false;

    if (historyFile.is_open()) {
        while (getline(historyFile, historyLine)) {
            istringstream iss(historyLine);
            long int historyAccNum;
            string date, firstName, lastName, action;
            float amount;
            iss >> historyAccNum >> firstName >> lastName >> action >> amount;
            if (historyAccNum == accNum) {
                found = true;
                cout << "  " << firstName << " " << lastName << " " << action << " $" << amount << endl;
            }
        }
        historyFile.close();

        if (!found) {
            cout << "No History Found for Account Number " << accNum << "!" << endl;
        }
    } else {
        cout << "Error Opening History File!" << endl;
    }
}

void BankManagementSystem::displayMenu() {
	start:
	
	string uname = "abc";
	string upass = "123";
	
	int count = 0;
	
	string ename;
	string epass; 
    int choice;
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
  
  
  
  
      SetConsoleTextAttribute(h,4);
	cout<<"\n\n\t\t\t";
	cout<<"|";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"- ";Sleep(60);
	cout<<"E";Sleep(60);
    cout<<"N";Sleep(60);
    cout<<"T";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"R";Sleep(60);
	cout<<" ";Sleep(60);
	cout<<"Y";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"U";Sleep(60);
	cout<<"R ";Sleep(60);
	cout<<"U";Sleep(60);
	cout<<"S";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"R ";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<"A";Sleep(60);
	cout<<"M";Sleep(60);
	cout<<"E :";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"-";Sleep(60);	
	cout<<":";Sleep(60);
	cout<<" ";Sleep(60);
	
	cin>>ename;
	
		cout<<"\n\n\t\t\t";
	cout<<"|";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"- ";Sleep(60);
	cout<<"E";Sleep(60);
    cout<<"N";Sleep(60);
    cout<<"T";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"R";Sleep(60);
	cout<<" ";Sleep(60);
	cout<<"Y";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"U";Sleep(60);
	cout<<"R ";Sleep(60);
	cout<<"U";Sleep(60);
	cout<<"S";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"R ";Sleep(60);
	cout<<"P";Sleep(60);
	cout<<"A";Sleep(60);
	cout<<"S";Sleep(60);
	cout<<"S";Sleep(60);
	cout<<"W";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"R";Sleep(60);
	cout<<"D :";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"-";Sleep(60);	
	cout<<":";Sleep(60);
	cout<<" ";Sleep(60);
	
	cin>>epass;
	
	
	if(epass == upass && uname == ename){
	
	
	

    do {

 
    
    
    system("CLS");
	char a;

    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t======================================================< HOME MENU >============================================================= "<<endl;Sleep(70);
    SetConsoleTextAttribute(h,2);
    cout<<"\n\t\t================================================================================================================================ "<<endl<<endl;Sleep(70);

	cout<<"\t\t    ====================           ====================            =====================            ========================="<<endl;Sleep(80);
	cout<<"\t\t    ==      ***       ==           ==       ***      ==            ==        ***      ==            ==         ***         =="<<endl;Sleep(80);
	cout<<"\t\t    == CREATE ACCOUNT ==           == DEPOSIT AMOUNT ==            ==  WITHDRAW AMT   ==            ==    ISSUE CHEQUE     =="<<endl;Sleep(80);
	cout<<"\t\t    ==                ==           ==                ==            ==                 ==            ==                     =="<<endl;Sleep(80);
	cout<<"\t\t    ==      |1|       ==           ==       |2|      ==            ==       |3|       ==            ==        |4|          =="<<endl;Sleep(80);
	cout<<"\t\t    ====================           ====================            =====================            ========================="<<endl<<endl<<endl;Sleep(80);
    
    cout<<"\t\t\t\t       =====================           =====================            ====================="<<endl;Sleep(80);
	cout<<"\t\t\t\t       ==       ***       ==           ==       ***       ==            ==       ***       =="<<endl;Sleep(80);
	cout<<"\t\t\t\t       == ISSUE SIGNATURE ==           == CHEQUE EXCHANGE ==            == BALANCE INQUERY =="<<endl;Sleep(80);
	cout<<"\t\t\t\t       ==                 ==           ==   WITH CASH     ==            ==                 =="<<endl;Sleep(80);
	cout<<"\t\t\t\t       ==       |5|       ==           ==       |6|       ==            ==      |7|        =="<<endl;Sleep(80);
	cout<<"\t\t\t\t       =====================           =====================            ====================="<<endl<<endl;Sleep(80);

    cout<<"\t\t\t\t                       ====================         =======================  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       ==       ***      ==         ==        ***        ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       == SEARCH ACCOUNT ==         ==   DELETE ACCOUNT  ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       ==     HOLDERS    ==         ==     :(            ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       ==       |8|      ==         ==        |9|        ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       ====================         =======================  "<<endl;Sleep(80);
    cout<<"\t\t\t\t                       ====================         =======================  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       ==      ***       ==         ==        ***        ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       == SEARCH HISTORY ==         ==        EXIT       ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       ==                ==         ==     *********     ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       ==      |10|      ==         ==        |0|        ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                       ====================         =======================  "<<endl;Sleep(80);
   
     SetConsoleTextAttribute(h,4);
	cout<<"\n\n\t\t\t\t\t\t\t";
	cout<<"|:) ";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<"T ";Sleep(60);
	cout<<"E";Sleep(60);
    cout<<"R";Sleep(60);
    cout<<" A";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<"Y ";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"P";Sleep(60);
	cout<<"T";Sleep(60);
	cout<<"I";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<" :-";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<")";Sleep(60);
	cout<<"-";Sleep(60);	
	cout<<": ";Sleep(60);
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                issueCheque();
                break;
            case 5:
                allotSignature();
                break;
            case 6:
                chequeExchange();
                break;
            case 7:
                balanceInquiry();
                break;
            case 8:
                searchAccount();
                break;
            case 9:
                deleteAccount();
                break;
            case 10:
                seeHistory();
                break;
            case 11:
                exit(0);
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << "Press Enter to continue...";
        cin.ignore();
        cin.get();
    } while (choice != 11);
    
    if (count == 3){
    	exit(0);
	}
    
    
} 
count ++;

goto start;



}


int main() {
    BankManagementSystem bms;
    bms.welcome();
    bms.displayMenu();
    return 0;
}


