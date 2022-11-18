#include <iostream>
#include <Windows.h> 

using namespace std;

int main() 
{
	int x , z, y = 2000, bar1 = 177, bar2 = 219;  
	string name;   
	cout <<"Hotel Rooms Reservation v1.0.0.0 beta written by Jonathan brahmi\n";
	while (y != 0) 
	{
		cout <<"\nEnter your name?"; 
		cin >>name; 
		cout <<"\nEnter Reservation number?"; 
		cin >>x;
	  cout <<"\nEnter your name?"; 
		cin >>name; 
		cout <<"\nEnter Reservation number?"; 
		cin >>z; 
	   break;
	} 
	cout <<"\nProcessing...\n";
	for (int i = 0; i < 25; i++) 
		cout << (char)bar1; 
	
	cout <<"\r"; 
	
	for (int i = 0; i < 25; i++) 
	{
		cout << (char)bar2;  
		Sleep(150);
	}  
	cout <<"\n"; 
	if (x == z) 
	{
		cerr <<"\nError: This Reservation number is already take choose another one";   
	}
	else if (x != z){
		clog <<"\nWelcome, to our hotel \n";  
		
	}  
	cout <<"\nGuest name: "<<name<<" Guest Room: "<<x;  
	cout <<"\nGuest name: "<<name<<" Guest Room: "<<z; 
 	cout <<"\n";
	cout <<"\nPress any key for continue"; 
  cin.ignore(); 
  cin.get();
  return 0;

}
