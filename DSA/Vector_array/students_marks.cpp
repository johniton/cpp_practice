#include<iostream>
#include<vector>
using namespace std;

/*void addstudent();  DONE
void updateScore();
void avgScore();
void highestAvg();
void display();      DONE
*/
void display(vector<vector<int>> vec);
void addStudent(vector<vector<int>>& vec);
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
	cout<<"\n Choose \n 1] Add a student \n 2] Update the Student's Score \n 3] Calculate the avg of the student \n 4] Highest marks \n 5] Display Students \n 6] Exit \n ";
	cin>>choice;

	switch(choice){
		case 1:addStudent(vec); break;
		case 2:break;
		case 3:break;
		case 4:break;
		case 5:display(vec);break;
		default:break;
	}

	}while(choice!=6);

}

void display(vector<vector<int>> vec){
	for(int i=0;i<vec.size();i++){
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





