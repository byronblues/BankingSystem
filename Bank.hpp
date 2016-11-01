//
//  Bank.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/30/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef Bank_hpp
#define Bank_hpp

#include <stdio.h>
#include "Account.h"
#include <string>
#include <vector>
using namespace std;

class Bank{
public:
    Bank();
    Bank(string theName):name(theName){};
    ~Bank();
    string getBankName() const {return name;}
    string getAccount() const;
    void removeAccount(Account&);
    void addAccount(Account& account);
    
    
private:
    string name;
    vector<Account> account_list;
};
#endif /* Bank_hpp */
