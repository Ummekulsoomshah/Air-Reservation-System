#include<iostream>
#include<string>
using namespace std;

class Details
{
public:
	string gender;
	string name;
	int phoneNo;
	int age;
	string add;
	int Id;
	char arr[100];

void information()
{
    cout<<"\t\t\t" << "\nEnter customer ID: ";
    cin >> Id;
    cin.ignore();  // Ignore the newline character left in the input buffer

    cout<<"\t\t\t" << "\nEnter name: ";
    std::getline(std::cin, name);

    cout<<"\t\t\t" << "\nEnter age: ";
    cin >> age;
    cin.ignore();  // Ignore the newline character left in the input buffer

    cout<<"\t\t\t" << "\nEnter address: ";
    std::getline(std::cin, add);

    cout<<"\t\t\t" << "\nEnter gender: ";
    std::getline(std::cin, gender);

    cout<<"\t\t\t" << "\nYour details are saved\n" << endl;
}

};
int main(){
	Details d;
	d.information();
}