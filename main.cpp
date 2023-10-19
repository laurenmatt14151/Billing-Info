#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double billingAmount, payment, penalty, balance, unpaid;
    cout << fixed << showpoint << setprecision(2);

    cout << "Enter billing amount: ";
    cin >> billingAmount;
    cout << "Enter payment amount: ";
    cin >> payment;

    balance = billingAmount-payment;
    
    if(payment == billingAmount){
      if(10>billingAmount*.01){
        cout << "You will recieve $" << (billingAmount*.01) 
        << " credit on your next bill.";
      }
      else{
        cout << "You will recieve $10.00 credit on your next bill.";
      }
    }
    else if(payment >= (billingAmount * 0.5)){
      penalty = balance*.05;
      unpaid = balance + penalty;
      cout << "The penalty added to your next bill is: $"
      << penalty << endl;
      cout << "The unpaid balance including the penalty is: $"
      << unpaid;
    }
    else if(payment >= (billingAmount * 0.2)){
      penalty = balance*0.1;
      unpaid = balance + penalty;
      cout << "The penalty added to your next bill is: $"
      << penalty << endl;
      cout << "The unpaid balance including the penalty is: $"
      << unpaid;
    }
    else{
      penalty = balance*0.2;
      unpaid = balance + penalty;
      cout << "The penalty added to your next bill is: $"
      << penalty << endl;
      cout << "The unpaid balance including the penalty is: $"
      << unpaid;
    }
    
    return 0;
}
