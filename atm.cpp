#include <iostream>
#include <string>


using namespace std;

int main()
{
    int balance = 9875;         //Omar Barragan ATM machine Project#2
    int withdraw, deposit, exit;
    int amount;

   string pass="3932";
   char ch;
   cout << "Enter pin\n";
   ch=getch();

   while(ch!=13)
    {
      pass.push_back(ch);
      cout<<'*';
      ch=getch();
    }


   if(pass!="3932")
    {
      cout<<"\nAccess granted :P\n";
      goto option;
    }

   else
   {
      cout<<"\nAccess aborted...\n";
      goto option;
   }








option:
    cout<<"\n"<<endl;
    cout<<"                           *************************************"<<endl;
    cout<<"                           * \tWelcome to Bank International  *"<<endl;
    cout<<"                           *     Current Balance: $9875        *"<<endl;
    cout<<"                           *                                   *"<<endl;
    cout<<"                           *  \tSelect one of the following:   *"<<endl;
    cout<<"                           *                                   *"<<endl;
    cout<<"                           *         \t1. Withdraw            *"<<endl;
    cout<<"                           *         \t2. Deposit             *"<<endl;
    cout<<"                           *         \t3. Exit                *"<<endl;
    cout<<"                           *                                   *"<<endl;
    cout<<"                           *************************************"<<endl;
    cout<<"                                                                "<<endl;
    cout<<"********************************************************************************************************************"<<endl;


    int option;

    cout<<"\nEnter number option: "<<endl;
    cin>>option;

    if(option==1)
{

    {
        cout<<"Please enter amount you wish to withdraw: "<<endl;
        cin>>amount;
    }
    if(amount<=0)
    {
        cout<<"Amount can not be negative or zero"<<endl;
    }
    else if(amount>balance)
    {
        cout<<"Error: Amount exceeds current balance"<<endl;
    }
    else
    {
        balance=balance-amount;
        cout<<"Transaction successful!! Your new balance is: "<<balance<<endl;
        goto option;
    }
}

    if(option==2)
{

    {
        cout<<"Please enter amount you wish to deposit: "<<endl;
        cin>>amount;
    }
    if(amount==0)
    {
        cout<<"Error: Amount can not be zero"<<endl;

    }
    else
    {
        balance=balance+amount;
        cout<<"Transaction successful!! Your new balance is: "<<balance<<endl;
        goto option;
    }
}

    if(option==3)
{
    {
        cout<<"Thank you for using Bank International, Goodbye =] "<<endl;
    }

}



    return 0;
}
