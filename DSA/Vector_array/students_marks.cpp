#include <cmath>
#include<iostream>
#include<vector>
using namespace std;


void highestAvgScore(vector<vector<int>>& vec);
void avgScoreStudent(vector<vector<int>>& vec);
void display(vector<vector<int>> vec);
void avgScoreClass(vector<vector<int>> vec);
void addStudent(vector<vector<int>>& vec);
void updateScore(vector<vector<int>>& vec);
int main(){
	int rows,columns;
	cout<<"\n Enter number of Students and Subjects:";
	cin>>rows>>columns;
	
	vector<vector<int>> vec(rows,vector<int>(columns));
	for(int i=0;i<vec.size();i++){
			cout<<"\n Enter Student "<<i+1<<" marks in "<<columns<<" Subjects:";
		for(int j=0;j<vec[i].size();j++){
			cin>>vec[i][j];
		
		}
	}

	cout<<endl;

	int choice;
	do
	{
	cout<<"\n Choose \n 1] Add a student \n 2] Update the Student's Score \n 3] Calculate the avg of the student \n 4] Highest avg \n 5]Display avg of class \n 6] Display Students \n 7] Exit \n ";
	cin>>choice;
	switch(choice){
		case 1:addStudent(vec); break;
		case 2:updateScore(vec); break;
		case 3:avgScoreStudent(vec); break;
		case 4:highestAvgScore(vec);break;
		case 5:avgScoreClass(vec);break;
		case 6:display(vec);break;
		default:break;
	}

	}while(choice!=7);

}

void display(vector<vector<int>> vec){
	for(int i=0;i<vec.size();i++){
		cout<<"\n Student"<<i+1<<":";
		for(int j=0;j<vec[i].size();j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}

}

void addStudent(vector<vector<int>>& vec){
	cout<<"\n Enter Number of Subjects:";
	int sub;
	cin>>sub;
	cout<<"\n Enter the marks in "<<sub<<" Subjects:";
	vec.push_back(vector<int> (sub));
	for(int j=0;j<sub;j++){
		cin>>vec[vec.size()-1][j];
	}	

}
void updateScore(vector<vector<int>>& vec){
	cout<<"\n Enter student Number whose score you want to update:";
	int no;
	cin>>no;
	cout<<"\n Enter marks of "<<vec[no-1].size()<<" Subjects:";
	for(int j=0;j<vec[no -1].size();j++){
			cin>>vec[no-1][j];
	}
}


void avgScoreClass(vector<vector<int>> vec){
	int counter=0;
	float sum=0;
	for(int i=0;i<vec.size();i++){
		counter++;
		for(int j=0;j<vec[i].size();j++)
			sum+=vec[i][j];
	}

	cout<<"\n Average of class = "<<sum/counter;
	

}

void avgScoreStudent(vector<vector<int>>& vec){
 	cout<<"\n Enter Student number:";
	int no;
	float sum=0;
	cin>>no;
		for(int j=0;j<vec[no -1].size();j++){
			sum+=vec[no-1][j];
	}
	cout<<"\n Average of student = "<<sum/vec[no-1].size();
	}
void highestAvgScore(vector<vector<int>>& vec){
	float max=0,avg,sum=0;
	int index,j;
		for(int i=0;i<vec.size();i++){
			sum=0;
			for( j=0;j<vec[i].size();j++){
				sum+=vec[i][j];
			}
			avg=sum/vec[i].size();
			if (max<avg){
				max=avg;
				index=i;
			}
		}
		cout<<"\n Highest avg is of student "<<index+1<<"which is "<<max;
}


