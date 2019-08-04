/*Register and Login*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch;
	string user, pass ,user1 ,pass1 ;
	do
	{
		cout << "//////////Menu//////////\n";
		cout << "1.Register\n";
		cout << "2.Login\n";
		cout << "Q.Exit\n";
		cout << "Enter menu : ";
		cin >> ch;
		if (ch == '1')
		{
			cout << "*******Register*******\n";	
			cout << "Input Username : ";
			cin >> user;
			cout << "Input Password : ";
			cin >> pass;
		}
		if (ch == '2')
		{
			cout << "*******Login*******\n";	
			cout << "Input Username : ";
			cin >> user1;
			cout << "Input Password : ";
			cin >> pass1;
			if(user1 == user && pass1 == pass)
			{
				cout << "Username or password correct ^___^\n";
			}
			else
			{
				cout << "!!!!Username or password incorrect Please try again!!!!\n";
			}
		}
		if(ch == 'Q')
		{
			cout << "Exit.\n";
			break ;
		} 
	}
	while(ch != false);	
	return 0;
}