//
//  Account.h
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/30/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef Account_h
#define Account_h

#include <string>
using namespace std;
class Account{
public:
    Account();
    Account(int theId, float theBalance, string thePassword)
        :account_id(theId), balance(theBalance), password(thePassword){}
    ~Account();
    virtual string getAccountNumber() const = 0;
    virtual float getBalance() const = 0;
    virtual string getPassword() const = 0;
    
private:
    int account_id;
    float balance;
    string password;
   
};

#endif /* Account_h */
