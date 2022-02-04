//
//  Account.hpp
//  Bank
//
//  Created by Dario Mazhara on 1/26/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <map>
#include <vector>
#include<string>


using namespace std;



static int account_number = 0;
class Account {
private:
    int transaction_id;
    map<int, vector<pair<string, int>>> transactions_hash;
    vector<pair<string, int>> transactions;
    double balance;
   // friend void set_balance(double amount);
   

public:
    int id;
    
    string account_holder;
//    static int id;
    Account(string name, int balance) {
        this->id = account_number++;
        this->balance = balance;
        this->transaction_id = 0;
        this->account_holder = name;
    }
    
    void transfer(Account*, double);
    
    void post_statement(std::string, double);
    
    double get_balance() {return balance;};
    void set_balance(int set) {balance = set;}
    
    void statements();
    
};
#endif /* Account_hpp */
