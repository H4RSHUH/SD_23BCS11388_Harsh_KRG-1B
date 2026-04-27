#include <iostream>
#include <string>
using namespace std;


class Balance {
public:
    void showBalance() {
        cout << "Rs. 23456" << endl;
    }
};


class Deposit {
public:
    void depositAmount() {
        cout << "Amount deposited..!!!" << endl;
    }
};

class SendOTP {
public:
    void sendOtp(const string& type) {
        if (type == "Email") {
            cout << "OTP sent via Email" << endl;
        } else if (type == "SMS") {
            cout << "OTP sent via SMS" << endl;
        } else {
            cout << "Invalid type" << endl;
        }
    }
};

int main() {
    Balance balance;
    balance.showBalance();

    Deposit deposit;
    deposit.depositAmount();

    SendOTP otp;
    otp.sendOtp("Email");
    otp.sendOtp("SMS");

    return 0;
}