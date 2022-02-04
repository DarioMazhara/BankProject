//
//  User.hpp
//  Bank
//
//  Created by Dario Mazhara on 1/25/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#ifndef User_hpp
#define User_hpp

#include <stdio.h>
#include <string>
#include "Debit.hpp"

static int number_users = 0;
class User {
private:
    std::string creds;
    
    bool logged_in;
    
    double account_balance;
    
    double* ref;
    
public:
    int id;
 //   Account* linked_account;
    Account* account();
    Debit* debit_card;
    
    User() {
        debit_card = new Debit();
        id = number_users++;
        logged_in = false;
        creds = "";
    }

    
    void signup(std::string, std::string);
    void login(std::string);
    
    void logout();
    
    
    /*TODO: Make Account derived from User.
    //TODO: An Account object will have access to User::Debit
    //TODO: before logging in, the entity that is the main character is created of type USER and has a name, cash etc
    //TODO: User cannot access his bank account until he logs in with a username and password
    //TODO: username and password are sent for validation into Bank, where Bank uses the login credentials' hash by checking if there exists
     //TODO: a valid account in hash_map of accounts at that hash key. If the login info is real, then there will be a relevant Account object
     //TODO: in the map at the key value of the hash of the login info
     //TODO: If there is a valid account at the hash, then the login info was correct and login was successful.
     //TODO: To log-in a user, use a dynamic_cast to cast the user object into a Account POINTER object (which inherits User), then set is to point to the account object that was accessed via the map.
     //TODO: when logging out, current object is again dynamically casted from Account* back to User.
};*/
};
#endif /* User_hpp */

