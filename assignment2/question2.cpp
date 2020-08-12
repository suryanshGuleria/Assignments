#include<iostream>
#include<string.h>
using namespace std;
class account
{
private:
    int accountbalance;
public:
    account(int balance){
    if (balance>=0){
        this->accountbalance=balance;
    }
    else{
        this->accountbalance=0;
        cout<<"Initial balance invalid"<<endl;
        }
    }
    void credit(int balance){
    this->accountbalance=accountbalance+balance;
    }
    void debit(int balance){
    if(accountbalance>=balance){
       this->accountbalance=accountbalance-balance;
    }
   else{
  cout<<"Debit amount exceed account balance"<<endl;
    }
    }
    int getaccountbalance(){
    return accountbalance;
    }
    };
    int main(){
    account account1(55);
    account account2(-22);
    cout<<"account1 initial balance"<<account1.getaccountbalance()<<"\naccount2 initial balance is "<<account2.getaccountbalance()<<endl;
    account1.credit(500);
    account2.credit(81);
    cout<<"\nAccount1 balance is "<<account1.getaccountbalance()<<"\nAccount2 balance is :"<<account2.getaccountbalance()<<endl;
    account1.debit(47);
    account2.debit(36);
    cout<<"\nAccount1 balance is:"<<account1.getaccountbalance()<<"\nAccount2 balance is:"<<account2.getaccountbalance()<<endl;
    }
