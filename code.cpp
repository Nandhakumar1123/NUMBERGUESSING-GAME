#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void findguessingnum(int high,int low,int count,int randomnum);
  
int main()
{
srand(time(0));
int random, x,y ,r=1,num;
cout<<"Welcome to the Number Guessing Game........................."<<endl;
while(r)
{
random=rand()%100;
x=random+10;
y=random-10;

cout<<"Enter the Mode that you want to play......\n1for Easy mode(30chance)\n2 for Hard mode (10chance): \t"<<endl;
cin>>num;
if(num==1)
{
   num=25;
   findguessingnum(x,y,num,random);
   }
 else if(num==2)
 {
  num=10;
  findguessingnum(x,y,num,random);
  }
  else
  {
    cout<<"you had Enter the Invalid number..."<<endl;
    }
    cout<<"Do you want to continue press \n1 for Continue \n 0 for Exit...\t";
    cin>>r;
    }
  return 0;
  }
  void findguessingnum(int high,int low,int count,int randomnum)
  {
    int guess_num;
    cout<<"Enter the Number the you are Guessing............\t:"<<endl;
    cin>>guess_num;
    while(count>0)
    {  
       if(guess_num==randomnum)
       {
         cout<<"Congratulations the Number you guess is correct.......!!!!"<<endl;
         break;
         }
         if(guess_num<low)
          {cout<<"It is too low...!!"<<endl;}
            else if(guess_num>high)
              {cout<<"It is too high...!!"<<endl;}
             else if(low<guess_num&&guess_num<randomnum)
               {cout<<"It is low....!!"<<endl;}
              else 
                  {cout<<"It is high....!!"<<endl;}
      count--;        
         cout<<"Remaining chance is :"<<count<<endl;
         if(count==0)
         {
         cout<<"you had lost your chance......!!"<<endl;
         }
         
         cout<<"Enter the Number the you are Guessing.....\t:"<<endl;
    cin>>guess_num;
    }
         }
