#include<string>
#include<ctime>
#include<iostream>
#include<algorithm>
using namespace std;
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


void check(string s){
    string w;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    if(s=="hello" || s=="hi" || s=="hey")
    {
        delay(3000);
        cout<<"\n \t \t HELLO!! What can I call you?? \n";
        getline(cin,s);
        delay(3000);
        cout<<"\n \t \t HELLO "<<s<<". Nice name!! It was nice meeting you!!  \n \n";
        getline(cin,w);


    }
    else{
            delay(3000);
            cout<<"\n \t \t I'm sorry. I don't get what you're trying to say cuz i'm string sensitive. Try with HELLO or Hello or hello or hi or HI \n \n";
            string s;
            getline(cin,s);
            check(s);
    }
}
void greet(string w)
{
transform(w.begin(),w.end(),w.begin(),::tolower);



if(w=="g")
{
    delay(3000);
    cout<<"\n \t \t YAYYYY!!! I am so glad for you. Keep smiling. CYA LATER \n";
    getline(cin,w);
        if(w=="bye")
        {  delay(3000);
           cout<<"\n \t \t bye<3 \n";
           exit(0);
         }

          else{delay(3000);
        cout<<"\n \t \tI would love to but i don't know how to talk beyond that so,bye \n";
        exit(0);
             }

    }



else if(w=="o")
{
    delay(3000);
    cout<<"\n \t \t Hey. Don't worry, you'll be happier very soon. You are amazing. I hope I made you feel good in some way. CYA LATER :)\n \n";
    getline(cin,w);
        if(w=="bye")
        {delay(3000);
           cout<<"\n \t \t bye<3 \n";
           exit(0);
         }

          else{delay(3000);
        cout<<"\n \t \t As much as I would love to but i don't know how to talk beyond that so,bye \n";
        exit(0);
             }

}
else if(w=="s")
{
    delay(3000);
    cout<<"\n \t \t HEY... Don't lose hope. Things will get better. Try doing things that you love, have a chocolate(if you're not allergic). These activities release serotonin which makes humans happy. It was great talking to you. CYA SOON \n \n";
      getline(cin,w);
        if(w=="bye")
        {   delay(3000);
           cout<<"\n \t \t bye<3 \n ";
           exit(0);
         }

          else{
                delay(3000);
        cout<<"\n \t \t As much as I would love to but i don't know how to talk beyond that so,bye \n";
        exit(0);
             }


}
else
{
    delay(3000);
    cout<<"\n \t \t Tell me How do you feel today?? Type G for good, O for okay and S for sad \n \n";
    getline(cin,w);
    greet(w);
}
}


int main()
{   system("cls");
    string s;
    string w;
    string r;
    cout<<"---------you've entered a chatbot. say 'hi' to start a conversation--------- \n";
    getline(cin,s);
    check(s);
    greet(w);

    return 0;
}
//thank you this awosem code done by srijan
