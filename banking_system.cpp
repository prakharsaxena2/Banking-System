#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class sec
{
public :
int accountno;
char name[20],add[50],email[50];
float bal;
public:
    void openaccount(int);
    void showdetail(int);
     void balance();
    int modify();

};


void sec::openaccount(int p)
{
    cout<<"Account Number"<<endl;
    cout<<p;
    cin.ignore();
    cout<<"Enter Your Name "<<endl;;
    cin.getline(name,20);
    cout<<"Enter Your Email id "<<endl;
    cin.getline(email,50);

    cout<<"Enter Your Address "<<endl;
     cin.getline(add,50);
     cout<<"Enter Balance";
     cin>>bal;
     cin.ignore();

}
void sec::showdetail(int u)
{
    cout<<"Account No= "<<u<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Email Address = "<<email<<endl;
    cout<<"Residensal Address= "<<add<<endl;
    cout<<"Balance= "<<bal<<endl;
}
int sec::modify()
{
    int dop,wid,m;
    cout<<"press 1 to Deposit ";
    cout<<"press 2 to Withdraw";
    cin>>m;
    if(m==1){
            cout<<"Enter the Deposit Amount"<<endl;
    cin>>dop;
    bal=bal+dop;
    }
    else if(m==2)
    {
        cout<<"Enter the Widthdraw Amount"<<endl;
    cin>>wid;
    if(wid>=bal)
    {
        cout<<"Not Possible"<<endl;
    }

    else
    {
    bal=bal-wid;
    }
}
return bal;
}
void sec::balance()
{
cout<<bal;
}

 int main()
 {

     sec k[20];
     int c,i,n,w,t,q,ww;
     char ch;
     cout<<"\t\t\t\t\t\tSECTION C BANK"<<endl;
     cout<<"Enter number of user";
     cin>>n;
     do{
     cout<<"Press 1 for Opening Account "<<endl;
     cout<<"Press 2 for Particular Account Information "<<endl;
     cout<<"Press 3 for Show All Account Information "<<endl;
     cout<<"Press 4 for Withdraw or Deposit"<<endl;
     cout<<"Press 5 for Check Balance"<<endl;
     cout<<"Press 6 for Exit"<<endl;
     cout<<"Enter your choice"<<endl;
     cin>>c;
     cin.ignore();

if(c==1)
{


       for(i=1;i<=n;i++)
    {

        k[i].openaccount(i);
         cout<<"------------------------------------------------------------------------"<<endl;
}
}


         cout<<"------------------------------------------------------------------------"<<endl;
         if(c==3)
         {


         for(i=1;i<=n;i++)
         {


         k[i].showdetail(i);
         cout<<"-------------------------------------------------------------------------"<<endl;

         }
         }
         if(c==2)
         {
             int f=1;
            cout<<"Enter the Particular Account Number";
            cin>>w;
            for(i=1;i<=n;i++)
            {
                if(i==w)
                {
                f=0;

                 cout<<"press 1. For Show Detail and 2. For Withdraw & Deposit";
                 cin>>t;
                 if(t==1)
                 {

                k[i].showdetail(i);
                break;
                 }
                 else if(t==2)
                 {
                     k[i].modify();
                     break;
                 }
                }
            }
            if(f==1)
            {
            cout<<"No Account Found"<<endl;
            }

         }
         if(c==4)
         {
             int ee=1;
             cout<<"Enter the Account Number";
             cin>>q;

            for(i=1;i<=n;i++)
             {

                 if(q==i)
                 {
                 ee=0;

                 k[i].modify();
             }
             }
             if(ee==1)
             {
                 cout<<"Account not found"<<endl;
             }
         }


         if(c==5)
         {
             int yy=1;
             cout<<"Enter the Account No";
             cin>>ww;
             for(i=1;i<=n;i++)
             {
                 if(ww==i)
                 {
                     yy=0;
                     cout<<"Balance="<<endl;
                     k[i].balance();
                     cout<<"\n";

                 }
             }
                 if(yy==1)
                 {
                    cout<<"No Account Found"<<endl;
                 }
             }


         if(c==6)
         {
             exit(0);
         }
cout<<"Do you want to continue Y/N";
cin>>ch;
}while(toupper(ch)=='Y');


   return 0;
 }
