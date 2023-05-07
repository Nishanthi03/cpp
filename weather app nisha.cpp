/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string email,location;
    int option;
    cout<<"\nEnter your email:";
    cin>>email;
    cout<<"\n Enter your current location:";
    cin>>location;
    cout<<"\n There are seven categories of weather report";
    cout<<"\n You can choose any of the option given below";
    cout<<"\n1.Today's weather report \n2.Yesterday's weather report \n3.Tommorrow's weather report \n 4.week wise weather report \n5.week wise sunny days weather report \n6.Rainy days weather report \n 7. snow falls in this week";
    cout<<"\nEnter your option:";
    cin>>option;
    switch(option)
    {
    case 1:
    cout<<"\nMorning it is quite sunny 25°c and from evening it seems like rainy";
    break;
    case 2: 
    cout<<"\n It was cloudy between 20°c to 26° c";
    break;
    case 3:
    cout<<"\n It seems to be rainy for continuosly 2 days. \n so, the schools and collages will be leave.\n Keep on touch with this app";
    break;
    case 4:
    cout<<"\n Total report of this  week \n monday-Quite sunny \n Tuesday-Rainy from morning to evening \nwednesday-symtoms for tsunami \nThursday-mostly cloudy at 8am \n Friday -snow falls may come so, may be holiday\n saturday-partially cloud \n sunday-sunny";
    break;
    case 5:
    cout<<"\nsunny days of this week-sunday,monday";
    break;
    case 6:
    cout<<"\nRainy day of the week-tuesday";
    break;
    case 7:
    cout<<"\nsnow falls in this week -friday";
    break;
    }
  return 0;    
}
    
    
    
    
    
    
    
    
    
    
    
    

