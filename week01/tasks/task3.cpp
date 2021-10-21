#include <iostream>

using namespace std;

int main()
{
    
    bool partOfCompany, workEnoughTime;
    cout << "Are you part of the company?" << endl;
    cin >> partOfCompany;
    cout << "Do you work enough time?" << endl;
    cin >> workEnoughTime;
    bool getPaid = partOfCompany && workEnoughTime;
    cout << boolalpha;
    cout << "You will get paid. - " << getPaid << endl;


    bool freeFromTasks, passTasks, passTheory;
    cout << "Are you free from tasks exam?" << endl;
    cin >> freeFromTasks;
    cout << "Did you pass the tasks exam?" << endl;
    cin >> passTasks;
    cout << "Did you pass the theory exam?" << endl;
    cin >> passTheory;
    bool passSubject = (freeFromTasks || passTasks) && passTheory;
    cout << "You will pass this subject. - " << passSubject << endl;


    bool hungry, isMidnight, isCloudy;
    cout << "Are you hungry?" << endl;
    cin >> hungry;
    cout << "Is it midnight?" << endl;
    cin >> isMidnight;
    cout << "Is it cloudy?" << endl;
    cin >> isCloudy;
    bool willEat = hungry || (isMidnight && !isCloudy);
    cout << "You will eat. - " << willEat << endl;


    bool enoughSleep, sleepy, needToWork, wantToWork;
    cout << "Did you sleep enough?" << endl;
    cin >> enoughSleep;
    cout << "Are you sleepy now?" << endl;
    cin >> sleepy;
    cout << "Do you need to work?" << endl;
    cin >> needToWork;
    cout << "Do you want to work?" << endl;
    cin >> wantToWork;
    bool happy = (enoughSleep || !sleepy) && (!needToWork || wantToWork);
    cout << "You are happy. - " << happy << endl;

    return 0;
}