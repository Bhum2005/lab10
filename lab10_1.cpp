#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int student=0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << student+1 <<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A') {// if grade is A
			count[0]=count[0]+1;
			student++;
			//Do something
		}else if(grade=='B') {
			count[1]=count[1]+1;
			student++;
		}else if(grade=='C') {
			count[2]=count[2]+1;
			student++;
		}else if(grade=='D') {
			count[3]=count[3]+1;
			student++;
		}else if(grade=='F') {
			count[4]=count[4]+1;\
			student++;
		}
		else if(grade=='0'){

		}
		else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again."<<endl;
		} 
	}while(grade!='0');
	
	
	cout << "In total "<<student<<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
