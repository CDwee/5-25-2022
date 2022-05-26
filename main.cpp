// Started at 6:58 5-25-2022

// Section 13
// Implementing member methods 1
#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    // attributes
    string name;
    double balance;
    
public:
    // methods
    // declared inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    
    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    // if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}


int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if(frank_account.deposit(200.0))
        cout << "Deposit Okay" << endl;
    else
        cout << "Deposit Not Allowed" << endl;
        
    if(frank_account.withdraw(500.0))
        cout << "Withdraw Okay" << endl;
    else 
        cout << "Not sufficient funds" << endl;
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw Okay" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    return 0;
}


#include "Account.h"

void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    // if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}


#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
private:
    // attributes
    std::string name;
    double balance;
    
public:
    // methods
    // declared inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    
    // methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _ACCOUNT_H_


// Section 13
// Implementing member methods 2
#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if(frank_account.deposit(200.0))
        cout << "Deposit Okay" << endl;
    else
        cout << "Deposit Not Allowed" << endl;
        
    if(frank_account.withdraw(500.0))
        cout << "Withdraw Okay" << endl;
    else 
        cout << "Not sufficient funds" << endl;
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw Okay" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    return 0;
}


// Coding Exercise
#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

//---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
    string get_name() {
        return name;
    }
    
    void set_name(string n) {
        name = n;
    }
    
    int get_age() {
        return age;
    }
    
    void set_age(int a) {
        age = a;
    }

//---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};
#endif 


// Coding Exercise
#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    //---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
    int get_human_years() {
        return age * 7;
    }
    
    string speak() {
        return string("Woof");
    }
    
    //---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};
#endif 


// Section 13
// Constructors and Destructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    // Overloaded Contructors
    Player() {
        cout << "No args constructor called" << endl;
    }
    Player(std::string name) {
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called" << endl;
    }
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}

// Ended at 10:00 5-25-2022
