/*
 Babysitter Kata
 
 Background
 ----------
 This kata simulates a babysitter working and getting paid for one night.  The rules are pretty straight forward:
 
 The babysitter
 - starts no earlier than 5:00PM
 - leaves no later than 4:00AM
 - gets paid $12/hour from start-time to bedtime
 - gets paid $8/hour from bedtime  to midnight
 - gets paid $16/hour from midnight to end of job
 - gets paid for full hours (no fractional hours)
 
 
 Feature:
 As a babysitter
 In order to get paid for 1 night of work
 I want to calculate my nightly charge
 */

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int st;
    int end;
    int bed;
    cout <<"This program will calculate payment for 1 night of work as a babysitter.\n -$12/hour from start-time to bedtime\n -$8/hour from bedtime  to midnight\n -$16/hour from midnight to end of job\n please input whole numbers with no suffix\n ie '9:00 PM' ='9'" <<endl;
    cout <<"Input start time between 5 pm and 4 am" <<endl;
    cin >>st;
    cout <<"Input bedtime between start and midnight (if endtime was before bedtime please input end time as bedtime"<<endl;
    cin >>bed;
    cout <<"Input end time between 5 pm and 4 am" <<endl;
    cin >>end;
    cout << "nightly charge is: $" <<total_owed (st, end, bed) <<endl;
    
    return 0;
}
