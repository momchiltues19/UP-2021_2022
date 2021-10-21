#include <iostream>

using namespace std;

int main()
{
    bool partOfCompany, workEnoughTime;
    bool getPaid = partOfCompany && workEnoughTime;

    bool freeFromTasks, passTasks, passTheory;
    bool passSubject = (freeFromTasks || passTasks) && passTheory;

    bool hungry, isMidnight, isCloudy;
    bool willEat = hungry || (isMidnight && !isCloudy);

    bool enoughSleep, sleepy, needToWork, wantToWork;
    bool happy = (enoughSleep || !sleepy) && (!needToWork || wantToWork);

    return 0;
}