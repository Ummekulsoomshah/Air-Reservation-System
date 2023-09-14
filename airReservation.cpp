#include <iostream>
using namespace std;
bool isperfectno(int num){
	int sum=0;
	for (int i=0;i<num;i++){
		if(num%i==0){
			sum+=i;
		}
	}
    return sum==num;
}

int main() {
	
	int num;
	cin >> num;    //Reading input from STDIN
	if(isperfectno(num)){
		cout<<"\t\t\t"<<"YES"<<endl;
	}else {
	cout<<"\t\t\t"<<"NO"<<endl;
	}
}