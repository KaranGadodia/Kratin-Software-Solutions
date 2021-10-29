#include<bits/stdc++.h>

using namespace std;

int main(){

    cout << "\" The body achieves what the mind believes \"" << endl;


    string name;
    cout<<"Please enter your first name"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<"."<<endl;
    cout<<endl <<" \" If you truly want to change your life, you must first be willing to change your mind . \" "<<endl;
    cout<<endl<<"Let's know more about you"<<endl;
    cout<<"What is your age"<<endl;
    int age;
    cin>>age;
    if(age<65){
      return(0);
    }

    cout<<" \"The secret of genius is to carry the spirit of the child into the old age "<<endl;
    cout<<endl<<"                 And you are that Genius . \" "<<endl;
    cout<<endl<<"Are you have having any following issues?"<<endl;
    cout<<"(1) Cardiovascular diseases"<<endl;
    cout<<"(2) Thyroid"<<endl;
    cout<<"(3) Respiratory diseases"<<endl;
    cout<<"(4) Diabetes"<<endl;
    cout<<"(5) None"<<endl;
    cout<<endl<<"Enter the no. of diseases or 5 if none of them ."<<endl;

    string S ;
    cin>>S ;

    if(S.size() ==1 && S[0]=='5')
    {   cout<<"Thats so great, you maintained yourself very well."<<endl;
        cout<<"Here are some tips for further prevention."<<endl;
        cout<<"Take Proper Diet and walk atleast 30 mins a day, also get time to time consultation for presymptomatics.";
        return(0);}

  for(auto it : S){

    switch (it)
   {
       case '1': cout <<  "(1) Hyper/ Hypo : You should focus more on Diet , Exercise and eat  less Salt and monitor your BP regularaly  . " <<endl <<endl;
                break;
       case '2': cout << "(2) Thyroid : You might be gaining some weight . " <<endl << "             You should monitor  \"T3\"ans \"T4\" properly ." << endl <<endl; ;
                break;
       case '3': cout << "(3) Asthama : Diet , Do Exercise regularly but avoid vigours exercise and aldo \"NO SMOKING \"" <<endl  <<endl;
               break;
      case '4': cout << "(4) Diebieties : Do exercise , take proper diet and avoid sugar and sweets as much as possible .   " <<endl <<endl;
               break;
       default :cout << endl <<endl;
                break;
   }

  }

  cout << "\"To ensure good health: eat lightly, breathe deeply, live moderately, cultivate cheerfulness and maintain an interest in life \""<<endl <<endl;

}
