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
    cout<<"\t\t\t" << "\n\t\t\tEnter customer ID:\t";
    cin >> Id;
    cout<<"\t\t\t" << "\n\t\t\tEnter name:\t\t";
    cin >> name;
    cout<<"\t\t\t" << "\n\t\t\tEnter age:\t\t";
    cin >> age;
    cout<<"\t\t\t" << "\n\t\t\tEnter address:\t\t";
    cin >> add;
    cout<<"\t\t\t" << "\n\t\t\tEnter gender:\t\t";
    cin >> gender;
    cout<<"\t\t\t" << "\n\t\tYour details are saved\n" << endl;
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
        cout<<"\t\t\t" << (a + 1) << "\t\t\t. Flight to " << flightN[a] << endl;
    }

    cout<<"\t\t\t" << "\n\t\t\tWelcome to the Airlines!" << endl;
    cout<<"\t\t\t" << "\t\t\tEnter the number of the country of which you want to book the flight: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            cout<<"\t\t\t" << "\n\t\t\t___________________Welcome to Dubai Airlines__________________________\n" << endl;
            cout<<"\t\t\t" << "\t\t\tYour comfort our priority. Enjoy the journey!" << endl;
            cout<<"\t\t\t" << "\t\t\tFollowing are the flights\n" << endl;
            cout<<"\t\t\t" << "\t\t\t1.DUB - 498" << endl;
            cout<<"\t\t\t" << "\t\t\t\t011-7-2023  8:00AM  10hrs  400 $" << endl;
            cout<<"\t\t\t" << "\t\t\t2.DUB - 658" << endl;
            cout<<"\t\t\t" << "\t\t\t\t011-7-2023  4:00AM  12hrs  300 $" << endl;
            cout<<"\t\t\t" << "\t\t\t3.DUB - 528" << endl;
            cout<<"\t\t\t" << "\t\t\t\t011-7-2023  11:00AM  11hrs  350 $" << endl;
            cout<<"\t\t\t" << "\n\t\t\tSelect the flight you want to book : ";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 400;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight DUB - 498" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 300;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight DUB - 658" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else if (choice1 == 3)
            {
                charges = 350;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight DUB - 528" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else
            {
                cout<<"\t\t\t" << "\t\t\tInvalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout<<"\t\t\t" << "\t\t\tPress any key to go back to the main menu: " << endl;
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
            cout<<"\t\t\t" << "\n\t\t\t___________________Welcome to Canadian Airlines__________________________\n" << endl;
            cout<<"\t\t\t" << "\t\t\tYour comfort our priority. Enjoy the journey!" << endl;
            cout<<"\t\t\t" << "\t\t\tFollowing are the flights\n" << endl;
            cout<<"\t\t\t" << "\t\t\t1.CAD - 198" << endl;
            cout<<"\t\t\t" << "\t\t\t\t012-7-2023  2:00PM  20hrs  400 $" << endl;
            cout<<"\t\t\t" << "\t\t\t2.CA - 208" << endl;
            cout<<"\t\t\t" << "\t\t\t\t013-7-2023  4:00PM  22hrs  500 $" << endl;
            cout<<"\t\t\t" << "\t\t\t3.CA - 118" << endl;
            cout<<"\t\t\t" << "\t\t\t\t015-7-2023  11:00APM  21hrs  450 $" << endl;
            cout<<"\t\t\t" << "\n\t\t\tSelect the flight you want to book : ";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 400;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight CA - 198" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 500;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight CA - 208" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else if (choice1 == 3)
            {
                charges = 450;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight CA - 118" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else
            {
                cout<<"\t\t\t" << "\t\t\tInvalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout<<"\t\t\t" << "\t\t\tPress any key to go back to the main menu: ";
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
            cout<<"\t\t\t" << "\n\t\t\t___________________Welcome to UK Airlines__________________________\n" << endl;
            cout<<"\t\t\t" << "\t\t\tYour comfort our priority. Enjoy the journey!" << endl;
            cout<<"\t\t\t" << "\t\t\tFollowing are the flights\n" << endl;
            cout<<"\t\t\t" << "\t\t\t1.UK - 798" << endl;
            cout<<"\t\t\t" << "\t\t\t\t012-7-2023  10:00AM  14hrs 400 $" << endl;

            cout<<"\t\t\t" << "\n\t\t\tSelect the flight you want to book : ";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 400;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight UK - 798" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else
            {
                cout<<"\t\t\t" << "\t\t\tInvalid input, shifting to the previous menu" << endl;
                flights();
            }

            cout<<"\t\t\t" << "\t\t\tPress any key to go back to the main menu: " << endl;
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
            cout<<"\t\t\t" << "\n\t\t\t___________________Welcome to Australian Airlines__________________________\n" << endl;
            cout<<"\t\t\t" << "\t\t\tYour comfort our priority. Enjoy the journey!" << endl;
            cout<<"\t\t\t" << "\t\t\tFollowing are the flights\n" << endl;
            cout<<"\t\t\t" << "\t\t\t1.US - 567" << endl;
            cout<<"\t\t\t" << "\t\t\t\t20-7-2023  9:00AM  18hrs  400 $" << endl;
            cout<<"\t\t\t" << "\t\t\t2.US - 617" << endl;
            cout<<"\t\t\t" << "\t\t\t\t21-7-2023  1:00PM  19hrs  500 $" << endl;

            cout<<"\t\t\t" << "\n\t\t\tSelect the flight you want to book : ";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 400;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight US - 567" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 500;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight US - 617" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else
            {
                cout<<"\t\t\t" << "\t\t\tInvalid input, shifting to the previous menu" << endl;
                flights();
            }

            cout<<"\t\t\t" << "\t\t\tPress any key to go back to the main menu: " << endl;
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
            cout<<"\t\t\t" << "\n\t\t\t___________________Welcome to European Airlines__________________________\n" << endl;
            cout<<"\t\t\t" << "\t\t\tYour comfort our priority. Enjoy the journey!" << endl;
            cout<<"\t\t\t" << "\t\t\tFollowing are the flights\n" << endl;
            cout<<"\t\t\t" << "\t\t\t1.AS - 698" << endl;
            cout<<"\t\t\t" << "\t\t\t\t18-7-2023  7:00AM  9hrs 500 $" << endl;
            cout<<"\t\t\t" << "\t\t\t2.AS - 658" << endl;
            cout<<"\t\t\t" << "\t\t\t\t19-7-2023  2:00PM  11hrs 550 $" << endl;

            cout<<"\t\t\t" << "\n\t\t\tSelect the flight you want to book : ";
            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 500;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight AS - 698" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else if (choice1 == 2)
            {
                charges = 550;
                cout<<"\t\t\t" << "\n\t\t\tYou have successfully booked the flight AS - 658" << endl;
                cout<<"\t\t\t" << "\t\t\tYou can go back to the menu and take the ticket " << endl;
            }
            else
            {
                cout<<"\t\t\t" << "\t\t\tInvalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout<<"\t\t\t" << "\t\t\tPress any key to go back to the main menu: " << endl;
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
            cout<<"\t\t\t" << "\t\t\tInvalid Input, Shifting you to the main menu !" << endl;
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
			outf << "\t\t\t____________XYZ Airlines___________" << endl;
			outf << "\t\t\t_______________Ticket______________" << endl;
			outf << "\t\t\t___________________________________" << endl;

			outf << "\nCustomer ID: " << Details::Id << endl;
			outf << "Customer Name: " << Details::name << endl;
			outf << "Customer Gender:" << Details::gender << endl;
			outf << "\nDescription" << endl << endl;

			if (Registeration::choice == 1)
			{
				destination = "Dubai";
			}

			else if (Registeration::choice == 2)
			{
				destination = "Canada";
			}

			else if (Registeration::choice == 3)
			{
				destination = "UK";
			}

			else if (Registeration::choice == 4)
			{
				destination = "USA";
			}

			else if (Registeration::choice == 5)
			{
				destination = "Australia";
			}

			else if (Registeration::choice == 6)
			{
				destination = "Europe";
			}

			outf << "Destination:\t\t" << destination << endl;
			outf<< "Flight cost :\t\t" << Registeration::charges << " $" << endl;
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
				cout<<"\t\t\t" << "\t\t\tFile error!" << endl;
			}
			while (!ifs.eof())
			{
				ifs.getline(arr, 100);
				cout<<"\t\t\t" <<"\t\t\t"<< arr << endl;
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

	cout<<"\t\t\t" << "\n\t\t\t_____________Welcome to Air Reservation System____________\n"
		 << endl;
	cout<<"\t\t\t" << "\t\t\t________________________Main Menu_________________________" << endl;
	cout<<"\t\t\t" << "\t\t\t\t\t\t _______________________________________________" << endl;

	cout<<"\t\t\t" << "\t|\t\t\t\t\t\t|" << endl;

	cout<<"\t\t\t" << "\t\t\t\t|\t Press 1 to add the Customer Details \t|" << endl;

	cout<<"\t\t\t" << "\t\t\t\t|\t Press 2 for Flight Registeration \t|" << endl;

	cout<<"\t\t\t" << "\t\t\t\t|\t Press 3 for Ticket and Charges \t|" << endl;
	cout<<"\t\t\t" << "\t\t\t\t|\t Press 4 to Exit                   \t|" << endl;
	//cout<<"\t\t\t" << "\t|\t                                   \t|" << endl;
	cout<<"\t\t\t" << "\t\t\t\t|_______________________________________________|" << endl;

	cout<<"\t\t\t" << "\n\t\t\tEnter your choice: ";
	cin >> lchoice;
	Details d;
	Registeration r;
	ticket t;
	switch (lchoice)
	{
	case 1:
	{
		cout<<"\t\t\t" << "\n\t\t\t______Customer Details_______\n";
		d.information();
		cout<<"\t\t\t" << "\t\t\tPress any key to go back to main menu: ";
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
		cout<<"\t\t\t" << "\t\t\t_____Flight Registeration_____\n"<< endl;
		r.flights();
		break;
	}
	case 3:
	{
		cout<<"\t\t\t" << "\n\t\t\t______Ticket and Charges_____\n"
			 << endl;
		t.Bill();
		cout<<"\t\t\t" << "\t\t\tYour ticket is printed, you can collect it \n " << endl;
		cout<<"\t\t\t" << "\t\t\tPress 1 to display your ticket: ";
		cin >> back;
		if (back == 1)
		{
			t.dispBill();

			cout<<"\t\t\t" << "\t\t\tPress any key to go back to main menu: ";
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
		cout<<"\t\t\t" << "\n\n\t\t\t\t_____Thank you ____" << endl;
		break;
	}
	default:
	{
		cout<<"\t\t\t" << "\t\t\tInvalid input, Please try again!\n"
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