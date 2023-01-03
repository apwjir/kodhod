#include<iostream>
using namespace std;
#include<string>

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int stu = 0;
	string grade = "1";
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << stu+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A"){
			count[0]++;
			stu++;
			}
		else if(grade == "B"){
			count[1]++;
			stu++;
			}
		else if(grade == "C"){
			count[2]++;
			stu++;
			}
		else if(grade == "D"){
			count[3]++;
			stu++;
			}
			else if(grade == "F"){
			count[4]++;
			stu++;}
			else if(grade == "0"){
				break;
			}
		else cout << "Wrong input. Please input again.\n";
		
	}while(true);
	
	
	cout << "In total "<< stu << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}
