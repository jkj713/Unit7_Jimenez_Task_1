//Unit7_Jimenez_Task_1 Dr_T 2-24-2020 STRUCTs C++
#include <iostream>
using namespace std;

//declare structs above int main()
struct timeOfDay
{
short Hour;
short Minute;
short Second;
};

struct appDate
{
short dayOfMonth;
short month;
int year;
};

struct event 
{
string eventName;
timeOfDay eventTime;
appDate eventDate;
bool isUrgent;
//save space here for our toString() override
};

int main()
{
 timeOfDay t; //declare instance of the struct
 t.Hour = 7; //put data in the struct
 t.Minute = 11;
 t.Second = 17;
 cout << "\nCurrent Time: " << endl; //print current data in the struct
 cout << t.Hour << ":" << t.Minute <<  ":" << t.Second << endl;

appDate a;
a.dayOfMonth = 13;
a.month = 7;
a.year = 1994;
cout << "\nMy birthdate is: " << endl;
cout << a.month << "/" << a.dayOfMonth << "/" << a.year << endl; 

event eOne;
eOne.eventName = "Birthday of Dr_T";
eOne.isUrgent = true;
//set the event day
eOne.eventDate.dayOfMonth = 24; //instance.memberStruct.memberVariable
eOne.eventDate.month = 2;
eOne.eventDate.year = 2020;
//set the event time
eOne.eventTime = t; //use data from t to populate eOne.eventTime

//print all elements of the event, eOne, to the screen
cout << "\nElements in the event eOne: " << endl;
cout << "Event Name: " << eOne.eventName << endl;

string status = "";
eOne.isUrgent = true;
status = (eOne.isUrgent) ?  "yes" : "no";
cout << "Is the event Urgent: " << status << endl;

cout << "Day: " << eOne.eventDate.month << "/" 
                << eOne.eventDate.dayOfMonth << "/" 
                << eOne.eventDate.year;
cout << "\nTime: " <<eOne.eventTime.Hour << ":" 
                  << eOne.eventTime.Minute << ":" 
                  << eOne.eventTime.Second;
 return 0;
}