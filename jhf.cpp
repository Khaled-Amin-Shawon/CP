#include<iostream> 
using namespace std; 
class Bank{ 
  public: 
  string customer_name; 
  int acc_num; 
  string acc_type; 
  void setData(string m1,int num,string m2){ 
   customer_name=m1; 
   acc_num=num; 
   acc_type=m2; 
  } 
  void display() 
  { 
    cout<<"Customer Nmae: "<<customer_name<<endl; 
    cout<<"Account Number: "<<acc_num<<endl; 
    cout<<"Account Type: "<<acc_type<<endl;  
  } 
   
}; 
class cur_acct:public Bank{ 
    protected: 
 float minimum_balance; 
 float serv_charg; 
 float current_balance; 
 public: 
  
 void chk1(float s1,float s2,float s3) 
 { 
   minimum_balance=s1; 
   serv_charg=s2; 
   current_balance=s3; 
 } 
 void interest1() 
 { 
    cout<<"__________________Interest is not Applicable__________________"<<endl; 
 } 
 void withdraw1(double amount) { 
        if (current_balance - amount < minimum_balance) { 
            cout << "Insufficient balance. Service charge of $" << serv_charg << " will be imposed." << endl; 
            current_balance -= serv_charg; 
        } 
        else { 
            current_balance -= amount; 
            cout << "_____________Withdrawal successful_____________."<<endl<<"Updated balance: " << current_balance << endl; 
        } 
    } 
}; 
class sav_acct : public Bank { 
     protected: 
 float inter_rate=0.05; 
 float current_balance; 
 public: 
  
 void chk2(float s3) 
 { 
   current_balance=s3; 
 } 
    void interest2() { 
        double interest = current_balance * inter_rate; 
        current_balance += interest; 
        cout << "__________Interest computed and deposited._________"<<endl<<"Updated balance: " << current_balance << endl; 
    } 
 
    void withdraw2(double amount) { 
        if (current_balance - amount < 0) { 
            cout << "_______________Insufficient balance.______________ "<<endl<< "Withdrawal not allowed." << endl; 
        } 
        else { 
            current_balance -= amount; 
            cout << "_____________Withdrawal successful.__________"<<endl<< "Updated balance: " << current_balance << endl; 
        } 
    } 
}; 
 
int main() { 
    float Current_Balance;double widrawl_ammont; 
    //Bank acc; 
    string acc_type; 
    cout<<"Enter Your Account Type: "; 
    cin>>acc_type; 
    if(acc_type=="Current") 
    { 
        cur_acct acc; 
        cout<<"Welcome! Islami Bank Bangladesh Limited"<<endl; 
        cout<<"This is a Current Account"<<endl; 
        float Minimum_Balance=500; 
        float Charge=0.02; 
        acc.interest1(); 
        cout<<"Enter your Current Balance: "; 
        cin>>Current_Balance; 
        acc.chk1(Minimum_Balance,Charge,Current_Balance); 
         
        cout<<"Enter Your Withdrawl Ammount: "; 
        cin>>widrawl_ammont; 
        acc.withdraw1(widrawl_ammont); 
    } 
    else if(acc_type=="Savings") 
    { 
     sav_acct acc; 
     cout<<"Welcome! Islami Bank Bangladesh Limited"<<endl; 
     cout<<"This is a Personal Account: "<<endl; 
     cout<<"Enter your Current Balance: "; 
        cin>>Current_Balance; 
        acc.chk2(Current_Balance); 
        acc.interest2(); 
        cout<<"Enter Your Withdrawl Ammount: "; 
        cin>>widrawl_ammont; 
        acc.withdraw2(widrawl_ammont); 
    } 
}