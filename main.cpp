#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "Questions.h"
#define MAX_TRIES 2
#include <conio.h>
#include <windows.h>




using namespace std;



void Intro();
void rules();
void drawLine(int x, char symbol);
string wordAnswer;

struct digitTime{
int hr, minutes, sec;
};

int main(){
char choice ='/0';
short age;

system("color f9");
string playerName;
int points =0;


long sec;
time(&sec);

string tm =ctime(&sec);
std::cout << "Date and time: "<<tm<< endl;
string hr(tm, 11, 2);
string greeting("Good ");
string iAhams("Ahams is a mumu boy, he doesn't have brain sef.");


string Mi_tech("\nMiTECH GAMES");
Sleep(700);
    for(size_t numChar=0; numChar<Mi_tech.length();++numChar){
        cout << setw(30)<< Mi_tech[numChar]<<flush;
        cout << "\n";

        Sleep(500);
    }

int counter =5;
Sleep(500);
while(counter>=1){
     cout <<flush;
    Sleep(500);
    counter--;
}
system("cls");


cout <<"\n\n";
Intro();

cout << "\n\nWhat is your name: ";
getline(cin, playerName);
    if((playerName =="Ahams")||(playerName=="ahams")||(playerName=="AHAMS")){
            drawLine(50, '-');
            cout << "\n***Did you know?: ";
               cout << iAhams<< endl;
    }else{
        cout << "\nYou have a nice name :) "<<playerName<< endl;
    }
            cout << "\nHow old are you: ";
                cin >> age;
while(1){
            if(cin.fail()){
                cin.clear();    // To clear error messages
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // This is an exception to validate user's input for integers using <limits>
                cout << "!!!Your age cannot be a letter!!!"<< endl;
                cout << "Put in your age, correctly this time, "<< playerName<< ": ";
            cin >> age;
            }
            if(!cin.fail()){
            break;
            }
    }
if(age <18){
    cout << "\nAre you sure you are ready for this, "<< playerName << endl;
}else{
    cout << "\nAre you ready to rack your brain "<< playerName
<<" ?"<< endl<<flush;
}
char ch='\0';
  if(hr < "10")
        greeting +="Morning ";
    else if(hr <"17")
        greeting +="Afternoon ";
    else
        greeting +="Evening ";
        cout << greeting << playerName <<endl;
point51:
std::cout<<"\n\t\tSelect Game Mode: "<<endl;
    cout <<"\n[1] World of Numbers and symbols" << endl;
    cout <<"[2] Engineers need me ;)"<< endl;
    cout <<"\n[3] Acids are your Friends"<<endl;
    cout <<"[4] Pass the microscope"<< endl;
    cout <<"\n[5] Surprise Me :)"<< endl;
    cout <<"[6] I have done enough :("<< endl;
    cin >>ch;
    while(ch!='6'){
        if(ch =='1'){
                system("PAUSE");
                system("CLS");
            cout <<setw(30)<< "***You have chosen to be tested on Mathematics***"<< endl;

        }else if(ch =='2'){
                system("PAUSE");
                system("CLS");
                cout << setw(20)<< "So, you like Physics "<< playerName << endl;
                physics:Sleep(100);
                        system("cls");
                    while(choice!='y'){
                        int tries = 0;
                        char choice = 'x';
                        char optionAnswer;
                        Questions quest1;

                        std::cout << "\nLEVEL 1"<< endl;
                        char answer1('b');
                        quest1.phyQuest1();
                         cout <<setw(5)<< "(a) 5000kg/m3" << setw(11)<<"(b) 5500kg/m3\n"
                <<setw(5)<<"(c)  5600kg/m3" << setw(11)<<"(d) 5505kg/m3\n";
                    cin>> optionAnswer;


if(optionAnswer == answer1){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
        points+=5;
            tries-=0;
drawLine(10,'*');
    cout << tries;
    }else{
    cout << "Wrong Answer"<< endl;
        tries++;
            cout << tries;
        }

 if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
    cout << "...Press [x] to end --- Press any key to start again..."<< endl;
        cin>> choice;
            if(choice =='x'){
                cout << "\nDo you want to quit game? <y/n>"<< endl;
                    cin >>choice;
            if(choice =='y')
            break;
            }else{
    goto physics;
    }
}
char answer2('a');
quest1.phyQuest2();
 cout <<setw(5)<< "(a) 98N " << setw(11)<<"(b) 89N\n"
                <<setw(5)<<"(c) 107N " << setw(11)<<"(d) 97N\n";
                    cin>> optionAnswer;


if(optionAnswer == answer2){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
        points+=5;
            tries-=0;
drawLine(10,'*');
    cout << tries;
    }else{
    cout << "Wrong Answer"<< endl;
        tries++;
            cout << tries;
        }

 if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
    cout << "...Press [x] to end --- Press any key to start again..."<< endl;
        cin>> choice;
            if(choice =='x'){
                cout << "\nDo you want to quit game? <y/n>"<< endl;
                    cin >>choice;
            if(choice =='y')
            break;
            }else{
    goto physics;
    }
}




                    }

        }else if(ch =='3'){
                system("PAUSE");
                system("CLS");
                cout <<"!!If you selected this, it means you know strong acids are corrosive!!"<< endl;

        }else if(ch=='4'){
                system("PAUSE");
                system("CLS");
                cout <<setw(30)<< "Biology! Biology!! Biology!!!"<<endl;

        }else if(ch=='5'){
                system("PAUSE");
                system("CLS");
                cout << "No one has ever solved the Michelle's Mystery"<< endl;
                cout << "P.S: `Cos it doesn't exist :)"<< endl<<endl;

point: while(choice != 'y'){
int tries = 0;
char choice = 'x';
char optionAnswer;
Questions quest1;



        cout << setw(20)<<"\nWelcome to Rookie Level, "<< playerName << endl;
        cout << "You will have to work hard to get to next level"<< endl;

char answer1('a');
quest1.question1();
            cout <<setw(5)<< "(a) Isaac Newton " << setw(11)<<"(b) J.J Thompson\n"
                <<setw(5)<<"(c) Michael A. Faraday " << setw(11)<<"(d) Ernest Rutherford\n";
                    cin>> optionAnswer;


if(optionAnswer == answer1){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
        points+=5;
            tries-=0;
drawLine(10,'*');
    cout << tries;
    }else{
    cout << "Wrong Answer"<< endl;
        tries++;
            cout << tries;
        }

 if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
    cout << "...Press [x] to end --- Press any key to start again..."<< endl;
        cin>> choice;
            if(choice =='x'){
                cout << "\nDo you want to quit game? <y/n>"<< endl;
                    cin >>choice;
            if(choice =='y')
            break;
            }else{
    goto point;
    }
}


char answer2('a');
quest1.question2();
    cout <<setw(5)<< "(a) Fajan's Rule" << setw(11)<< " (b) Law of conservation of Mass\n"
        <<setw(5)<<"(c) Guy-Lussac's Law" << setw(11)<<" (d) Charles Law\n";
            cin>>optionAnswer;
if(optionAnswer == answer2){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
        points+=5;
            tries-=0;
drawLine(10,'*');
cout << tries;
}else{
    cout << "Wrong Answer"<< endl;
        tries++;
            cout << tries;

}  if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
    cout << "...Press [x] to end --- Press any key to start again..."<< endl;
        cin>> choice;

   if(choice =='x'){

        cout << "\nDo you want to quit game? <y/n>"<< endl;
        cin >>choice;
        if(choice =='y')
    break;
    }else{
        goto point;
    }
}



string answer3("ozone");
string answer30("OZONE");
    quest1.question3();
        cin>>wordAnswer;
if(wordAnswer == answer3){
    cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
        points+=5;
    tries-=0;
drawLine(10,'*');
cout << tries;
}
else if(wordAnswer==answer30){
        cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
        points+=5;
    tries-=0;
drawLine(10,'*');
cout << tries;
}else{
        cout << "Wrong Answer"<< endl;
    tries++;
cout << tries;

}
if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
            cout << "...Press [x] to end --- Press any key to start again..."<< endl;
                cin>> choice;
if(choice =='x'){
    cout << "\nDo you want to quit game? <y/n>"<< endl;
        cin >>choice;
            if(choice =='y')
            break;
}else{

    goto point;
        }
    }


char answer4('c');
quest1.question4();
cout <<setw(5)<< "(a) Abraham Lincoln" << setw(10)<< "(b) Leonardo DaVinci\n"
        <<setw(5)<<"(c) Neil Amstrong" << setw(11)<<" (d) Elon Musk\n";
cin>>optionAnswer;
if(optionAnswer == answer4){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
    points+=5;
    tries-=0;
drawLine(10,'*');
cout << tries;

}else{
    cout << "Wrong Answer"<< endl;
    tries++;
    cout << tries;

} if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
            cout << "...Press [x] to end --- Press any key to start again..."<< endl;
                cin>> choice;
if(choice =='x'){
    cout << "\nDo you want to quit game? <y/n>"<< endl;
        cin >>choice;
            if(choice =='y')
            break;
}else{
    goto point;
        }
    }
 if(points >=10){


    cout << "\n\n";
        drawLine(40,'-');
            cout <<"\nCONGRATULATIONS, YOU HAVE WON THIS LEVEL!..\n";
            drawLine(40,'*');
            cout << "\nWow, you are so smart, "<< playerName << endl;
        cout << "You have "<<points << "Points"<< endl;
    }else{
    cout << "Come on, you can do better than this, "<< playerName << endl;
cout << "You have "<<points << "Points"<< endl;
    }

    cout << "\n\n"<<endl;



point2:system("PAUSE");
        system("CLS");
while(choice !='y'){
        drawLine(30, '=');
cout << "\n\t\tLEVEL 2\n";
drawLine(30,'=');

cout << "\n\nYou are doing well, "<< playerName << endl;

char answer5('d');
quest1.question5();
 cout <<setw(5)<< "(a) Leonardo" << setw(10)<< "(b) Raphael\n"
        <<setw(5)<<"(c) Donatello" << setw(11)<<" (d) Michelangelo\n";


    cin>>optionAnswer;
if(optionAnswer == answer5){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
    points+=10;
    tries-=0;
drawLine(10,'*');
cout << tries;
}else{
    cout << "Wrong Answer"<< endl;
    tries++;
    cout << tries;
    goto point;

}  if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
            cout << "...Press [x] to end --- Press any key to start again..."<< endl;
                cin>> choice;
if(choice =='x'){
    cout << "\nDo you want to quit game? <y/n>"<< endl;
        cin >>choice;
            if(choice =='y')
            break;
}else{
    goto point2;
        }
    }
char answer6('b');
quest1.question6();
cout <<setw(5)<< "(a) H2O" << setw(10)<< "(b) C6-H12-O6\n"
        <<setw(5)<<"(c) CH4" << setw(11)<<" (d) C2-H5-OH\n";


    cin>>optionAnswer;
if(optionAnswer == answer6){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
    points+=5;
    tries-=0;
drawLine(10,'*');
break;
cout << tries;
}else{
    cout << "Wrong Answer"<< endl;
    tries++;
    cout << tries;

} if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
            cout << "...Press [x] to end --- Press any key to start again..."<< endl;
                cin>> choice;
if(choice =='x'){
    cout << "\nDo you want to quit game? <y/n>"<< endl;
        cin >>choice;
            if(choice =='y')
            break;
}else{
    goto point2;
        }
    }

}


point3:system("PAUSE");
        system("CLS");
while(choice!='y'){


    cout << "\nWelcome to Maestro Level, "<< playerName << endl;
    char answer7('c');
quest1.question7();
cout <<setw(5)<< "(a) Cristiano Ronaldo" << setw(10)<< "(b) Lionel Messi\n"
        <<setw(5)<<"(c) Luka Modric" << setw(11)<<" (d) El Matador\n";


    cin>>optionAnswer;
if(optionAnswer == answer7){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
    points+=5;
    cout << tries;
    tries-=0;
drawLine(10,'*');

cout << tries;
break;
}else{
    cout << "Wrong Answer"<< endl;
    tries++;
    cout << tries;
}
if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
            cout << "...Press [x] to end --- Press any key to start again..."<< endl;
                cin>> choice;
if(choice =='x'){
    cout << "\nDo you want to quit game? <y/n>"<< endl;
        cin >>choice;
            if(choice =='y')
            break;
}else{
    goto point3;
        }
    }
}

point4: while(choice!='y'){
    cout << "\nWelcome to Legend Level, "<< playerName << endl;
    char answer8('c');
quest1.question8();
cout <<setw(5)<< "(a) Cristiano Ronaldo" << setw(10)<< "(b) Lionel Messi\n"
        <<setw(5)<<"(c) Jeff Bezoz" << setw(11)<<" (d) El Matador\n";


    cin>>optionAnswer;
if(optionAnswer == answer8){
   cout << "\n";
drawLine(10,'*');
    cout << "\nCorrect!!!"<< endl;
    points+=5;
    cout << tries;
    tries-=0;
drawLine(10,'*');

cout << tries;
break;
}else{
    cout << "Wrong Answer"<< endl;
    tries++;
    cout << tries;

}  if(tries>=MAX_TRIES){
    tries-=2;
        cout << "\n!!You do not have anymore chances!!\n";
    cout << "...Press [x] to end --- Press any key to start again..."<< endl;
        cin>> choice;

   if(choice =='x'){

        cout << "\nDo you want to quit game? <y/n>"<< endl;
        cin >>choice;
        if(choice =='y')
    break;
    }else{

    goto point4;
    }
}
break;

    }
    break;

            }

        }
        break;
    }
}







void Intro(){
    cout <<setw(20);
        drawLine(40,'=');
            cout << "\n\t\t\t\tWelcome to Game"<< endl;
    cout << setw(20);
        drawLine(40,'=');
            cout << "\n";
                drawLine(40,'/');
                drawLine(40,'\\');
    cout << "\n";
rules();
}
void rules(){
    cout << endl;
    drawLine(80, '=');
cout << "\n*The rules are simple:\n";

cout <<"\n**You have 2 tries, once exhausted, you will start again\n";

cout <<"\n***If you get a wrong answer in the boss round, you restart form last checkpoint.\n";
    drawLine(80,'=');
}

void drawLine(int x, char symbol){
    for(int i=0;i<x;i++){
        cout << symbol;
    }
}

