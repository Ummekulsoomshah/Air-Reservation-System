#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
//#include <graphics.h>
#include <windows.h>
using namespace std;
void MainMenu();
class Management
{
public:
	Management()
	{
		MainMenu();
	}
};
class Details
{
public:
	static string name, gender;
	int phoneNo;
	int age;
	string add;
	static int Id;
	char arr[100];

	void information()
	{
		cout<<"\t\t\t" << "\nEnter customer ID: ";
		cin >> Id;
		cout<<"\t\t\t" << "\nEnter name: ";
		cin >> name;
		cout<<"\t\t\t" << "\nEnter age: ";
		cin >> age;
		cout<<"\t\t\t" << "\nEnter address: ";
		cin >> add;
		cout<<"\t\t\t" << "\nEnter gender: ";
		cin >> gender;
		cout<<"\t\t\t" << "\nYour details are saved\n"
			 << endl;
	}
};

int Details::Id;
string Details::name;
string Details::gender;
class Registeration
{
public:
	static int choice;
	int choice1;
	int back;
	static float charges;

	void flights()
	{
		string flightN[] = {"Dubai", "Canada", "UK", "Australia", "Europe"};

		for (int a = 0; a < 5; a++)
		{
			cout<<"\t\t\t" << (a + 1) << ". Flight to " << flightN[a] << endl;
		}

		cout<<"\t\t\t" << "\n    Welcome to the Airlines!" << endl;
		cout<<"\t\t\t" << "    Enter the number of the country of which you want to book the flight: ";
		cin >> choice;

	
		switch (choice)
		{
		case 1:
		{
            cout<<"\t\t\t"<<"\n"<<endl;
			cout<<"\t\t\t" << "╔══════════════════════════════════════════════════════════╗" << endl;
            cout<<"\t\t\t" << "║                                                          ║" << endl;
            cout<<"\t\t\t" << "║     W E L C O M E   T O   D U B A I   A I R L I N E S    ║" << endl;
            cout<<"\t\t\t" << "║                                                          ║" << endl;
            cout<<"\t\t\t" << "║       Your comfort our priority. Enjoy the journey!      ║" << endl;
            cout<<"\t\t\t" << "║       Following are the flights available to Dubai:      ║" << endl;
            cout<<"\t\t\t" << "║                                                          ║" << endl;
            cout<<"\t\t\t" << "║         1. DUB - 498                                     ║" << endl;
            cout<<"\t\t\t" << "║            011-7-2023  8:00AM  10hrs  400 $              ║" << endl;
            cout<<"\t\t\t" << "║         2. DUB - 658                                     ║" << endl;
            cout<<"\t\t\t" << "║            011-7-2023  4:00AM  12hrs  300 $              ║" << endl;
            cout<<"\t\t\t" << "║         3. DUB - 528                                     ║" << endl;
            cout<<"\t\t\t" << "║            011-7-2023  11:00AM  11hrs  350 $             ║" << endl;
            cout<<"\t\t\t" << "║                                                          ║" << endl;
            cout<<"\t\t\t" << "║           Select the flight you want to book:            ║" << endl;
            cout<<"\t\t\t" << "╚══════════════════════════════════════════════════════════╝" << endl;
			cin >> choice1;
			if (choice1 == 1)
			{
				charges = 400;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight DUB - 498" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else if (choice1 == 2)
			{
				charges = 300;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight DUB - 658" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else if (choice1 == 3)
			{
				charges = 350;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight DUB - 528" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else
			{
				cout<<"\t\t\t" << "Invalid input , shifting to the previous menu" << endl;
				flights();
			}
			cout<<"\t\t\t" << "Press any key to the main menu: " << endl;
			cin >> back;
			if (back == 1)
			{
				MainMenu();
			}
			else
			{
				MainMenu();
			}
			break;
		}
		case 2:
		{   cout<<"\t\t\t"<<"\n"<<endl;
			cout<<"\t\t\t" << "╔════════════════════════════════════════════════════════════╗" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║  W E L C O M E   T O   C A N A D I A N    A I R L I N E S  ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║        Your comfort our priority. Enjoy the journey!       ║" << endl;
            cout<<"\t\t\t" << "║        Following are the flights available to Canada:      ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║         1. CAD - 198                                       ║" << endl;
            cout<<"\t\t\t" << "║            012-7-2023  2:00PM  20hrs  400 $                ║" << endl;
            cout<<"\t\t\t" << "║         2. CAD - 208                                       ║" << endl;
            cout<<"\t\t\t" << "║            013-7-2023  4:00PM  22hrs  500 $                ║" << endl;
            cout<<"\t\t\t" << "║         3. CAD - 528                                       ║" << endl;
            cout<<"\t\t\t" << "║            015-7-2023  11:00PM  21hrs  450 $               ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║             Select the flight you want to book:            ║" << endl;
            cout<<"\t\t\t" << "╚════════════════════════════════════════════════════════════╝" << endl;
			cin >> choice1;
			if (choice1 == 1)
			{
				charges = 400;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight CA - 198" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else if (choice1 == 2)
			{
				charges = 500;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight CA - 208" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else if (choice1 == 3)
			{
				charges = 450;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight CA - 118" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else
			{
				cout<<"\t\t\t" << "Invalid input , shifting to the previous menu" << endl;
				flights();
			}
			cout<<"\t\t\t" << "Press any key to the main menu: ";
			cin >> back;
			if (back == 1)
			{
				MainMenu();
			}
			else
			{
				MainMenu();
			}
			break;
		}
		case 3:
		{
			cout<<"\t\t\t"<<"\n"<<endl;
			cout<<"\t\t\t" << "╔════════════════════════════════════════════════════════════╗" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║        W E L C O M E   T O   U K    A I R L I N E S        ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║        Your comfort our priority. Enjoy the journey!       ║" << endl;
            cout<<"\t\t\t" << "║          Following are the flights available to UK:        ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║          1. UK - 798                                       ║" << endl;
            cout<<"\t\t\t" << "║             012-7-2023  10:00AM  14hrs 400 $               ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║             Select the flight you want to book:            ║" << endl;
            cout<<"\t\t\t" << "╚════════════════════════════════════════════════════════════╝" << endl;
			cin >> choice1;
			if (choice1 == 1)
			{
				charges = 400;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight UK - 798" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else
			{
				cout<<"\t\t\t" << "Invalid input , shifting to the previous menu" << endl;
				flights();
			}

			cout<<"\t\t\t" << "Press any key to the main menu: " << endl;
			cin >> back;
			if (back == 1)
			{
				MainMenu();
			}
			else
			{
				MainMenu();
			}
			break;
		}
		case 4:
		{
			cout<<"\t\t\t"<<"\n"<<endl;
			cout<<"\t\t\t" << "╔══════════════════════════════════════════════════════════════╗" << endl;
            cout<<"\t\t\t" << "║                                                              ║" << endl;
            cout<<"\t\t\t" << "║ W E L C O M E   T O   A U S T R A L I A N    A I R L I N E S ║" << endl;
            cout<<"\t\t\t" << "║                                                              ║" << endl;
            cout<<"\t\t\t" << "║         Your comfort our priority. Enjoy the journey!        ║" << endl;
            cout<<"\t\t\t" << "║       Following are the flights available to Australia:      ║" << endl;
            cout<<"\t\t\t" << "║                                                              ║" << endl;
            cout<<"\t\t\t" << "║          1. AS - 567                                         ║" << endl;
            cout<<"\t\t\t" << "║             020-7-2023  9:00AM  18hrs  400 $                 ║" << endl;
            cout<<"\t\t\t" << "║          2. AS - 617                                         ║" << endl;
            cout<<"\t\t\t" << "║             21-7-2023  1:00PM  19hrs  500 $                  ║" << endl;
            cout<<"\t\t\t" << "║                                                              ║" << endl;
            cout<<"\t\t\t" << "║             Select the flight you want to book:              ║" << endl;
            cout<<"\t\t\t" << "╚══════════════════════════════════════════════════════════════╝" << endl;
			cin >> choice1;
			if (choice1 == 1)
			{
				charges = 400;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight AS - 567" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else if (choice1 == 2)
			{
				charges = 500;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight AS - 617" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else
			{
				cout<<"\t\t\t" << "Invalid input , shifting to the previous menu" << endl;
				flights();
			}

			cout<<"\t\t\t" << "Press any key to the main menu: " << endl;
			cin >> back;
			if (back == 1)
			{
				MainMenu();
			}
			else
			{
				MainMenu();
			}
			break;
		}

		case 5:
		{
			cout<<"\t\t\t"<<"\n"<<endl;
			cout<<"\t\t\t" << "╔════════════════════════════════════════════════════════════╗" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║  W E L C O M E   T O   E U R O P I A N    A I R L I N E S  ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║        Your comfort our priority. Enjoy the journey!       ║" << endl;
            cout<<"\t\t\t" << "║        Following are the flights available to Europe:      ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║          1. EU - 698                                       ║" << endl;
            cout<<"\t\t\t" << "║             18-7-2023  7:00AM  9hrs 500 $                  ║" << endl;
            cout<<"\t\t\t" << "║          2. EU - 658                                       ║" << endl;
            cout<<"\t\t\t" << "║             19-7-2023  2:00PM  11hrs 550 $                 ║" << endl;
            cout<<"\t\t\t" << "║                                                            ║" << endl;
            cout<<"\t\t\t" << "║             Select the flight you want to book:            ║" << endl;
            cout<<"\t\t\t" << "╚════════════════════════════════════════════════════════════╝" << endl;
			cin >> choice1;
			if (choice1 == 1)
			{
				charges = 500;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight EU - 698" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else if (choice1 == 2)
			{
				charges = 550;
				cout<<"\t\t\t" << "\nYou have successfully booked the flight EU - 658" << endl;
				cout<<"\t\t\t" << "You can go back to menu and take the ticket " << endl;
			}
			else
			{
				cout<<"\t\t\t" << "Invalid input , shifting to the previous menu" << endl;
				flights();
			}
			cout<<"\t\t\t" << "Press any key to the main menu: " << endl;
			cin >> back;
			if (back == 1)
			{
				MainMenu();
			}
			else
			{
				MainMenu();
			}
			break;
		}
		
		default:
		{
			cout<<"\t\t\t" << "Invalid Input, Shifting you to the main menu !" << endl;
			MainMenu();
			break;
		}
		}
	}
};

float Registeration ::charges;
int Registeration ::choice;

class ticket : public Registeration, Details
{
public:
	void Bill()
	{
		string destination = "";
		ofstream outf("records.txt");
		{
			outf << "╔══════════════════════════════════════════════════════════╗" << endl;
            outf << "║                   XYZ Airlines - Ticket                  ║" << endl;
            outf << "╠══════════════════════════════════════════════════════════╣" << endl;
            outf << "║                                                          ║" << endl;
            outf << "║         Customer ID: " << Details::Id << "               ║" << endl;
            outf << "║         Customer Name: " << Details::name << "           ║" << endl;
            outf << "║         Customer Gender: " << Details::gender << "       ║" << endl;
            outf << "║                                                          ║" << endl;

            if (Registeration::choice == 1)
            {
                destination = "Dubai";
            }
            // Add similar cases for other destinations...

            outf << "║         Destination: " << destination << "               ║" << endl;
            outf << "║         Flight cost: " << Registeration::charges << " $  ║" << endl;
            outf << "║                                                          ║" << endl;
            outf << "╚══════════════════════════════════════════════════════════╝" << endl;
		}
		outf.close();
	}
	// display reciept
	void dispBill()
	{
		ifstream ifs("records.txt");
		{
			if (!ifs)
			{
				cout<<"\t\t\t" << "File error!" << endl;
			}
			while (!ifs.eof())
			{
				ifs.getline(arr, 100);
				cout<<"\t\t\t" << arr << endl;
			}
		}
		ifs.close();
	}
};

void MainMenu()
{
	int lchoice;
	int schoice;
	int back;

	cout<<"\t\t\t" << "╔══════════════════════════════════════════════════════════╗" << endl;
    cout<<"\t\t\t" << "║              Welcome to Air Reservation System           ║" << endl;
    cout<<"\t\t\t" << "╠══════════════════════════════════════════════════════════╣" << endl;
    cout<<"\t\t\t" << "║                                                          ║" << endl;
    cout<<"\t\t\t" << "║          Press 1 to add Customer Details                 ║" << endl;
    cout<<"\t\t\t" << "║          Press 2 for Flight Registration                 ║" << endl;
    cout<<"\t\t\t" << "║          Press 3 for Ticket and Charges                  ║" << endl;
    cout<<"\t\t\t" << "║          Press 4 to Exit                                 ║" << endl;
    cout<<"\t\t\t" << "║                                                          ║" << endl;
    cout<<"\t\t\t" << "╚══════════════════════════════════════════════════════════╝" << endl;

	cout<<"\t\t\t" << "\nEnter your choice: ";
	cin >> lchoice;
	Details d;
	Registeration r;
	ticket t;
	switch (lchoice)
	{
	case 1:
	{
		cout<<"\t\t\t" << "╔══════════════════════════════════════════════════════════╗" << endl;
        cout<<"\t\t\t" << "║                   Customer Details                       ║" << endl;
        cout<<"\t\t\t" << "╚══════════════════════════════════════════════════════════╝" << endl;
		d.information();
		cout<<"\t\t\t" << "Press any key to go back to main menu: ";
		cin >> back;
		if (back == 1)
		{
			MainMenu();
		}
		else
		{
			MainMenu();
		}
		break;
	}
	case 2:
	{
		cout<<"\t\t\t" << "╔══════════════════════════════════════════════════════════╗" << endl;
        cout<<"\t\t\t" << "║                  Flight Registration                     ║" << endl;
        cout<<"\t\t\t" << "╚══════════════════════════════════════════════════════════╝" << endl;
		r.flights();
		break;
	}
	case 3:
	{
		cout<<"\t\t\t" << "╔══════════════════════════════════════════════════════════╗" << endl;
        cout<<"\t\t\t" << "║                    Ticket and Charges                    ║" << endl;
        cout<<"\t\t\t" << "╚══════════════════════════════════════════════════════════╝" << endl;
		t.Bill();
		cout<<"\t\t\t" << "Your ticket is printed, you can collect it \n " << endl;
		cout<<"\t\t\t" << "Press 1 to display your ticket: ";
		cin >> back;
		if (back == 1)
		{
			t.dispBill();

			cout<<"\t\t\t" << "Press any key to go back to main menu: ";
			cin >> back;
			if (back == 1)
			{
				MainMenu();
			}
			else
			{
				MainMenu();
			}
		}

		else
		{
			MainMenu();
			//break();
		}
		break;
		
	}
	case 4:
	{
		cout<<"\t\t\t" << "╔══════════════════════════════════════════════════════════╗" << endl;
        cout<<"\t\t\t" << "║                       Thank you                          ║" << endl;
        cout<<"\t\t\t" << "╚══════════════════════════════════════════════════════════╝" << endl;
		break;
	}
	default:
	{
		cout<<"\t\t\t" << "Invalid input, Please try again!\n"
			 << endl;
		MainMenu();
		break;
	}

	}
}

    int main()
	{
		HWND console = GetConsoleWindow();
		ShowWindow(console, SW_MAXIMIZE);
		Management Mobj;
		//system("Color 04");
		getch();
		return 0;
    }