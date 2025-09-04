#include<iostream>
using namespace std;
int main(){
    int n,marks;
    cout<<"Enter number of students: ";
    cin>>n;

    int arr[n][5]={};
    cout<<"You have to enter marks for each student \n";
    for(int i=0;i<n;i++){    //students
        cout<<"Enter marks for "<<i+1<<" student= ";
        for(int j=0;j<5;j++){    //marks
            cin>>arr[i][j];
        }
    }

    //total and average
    for(int i=0;i<n;i++){
        int total=0;
        for(int j=0;j<5;j++){
            total+=arr[i][j];
        }
        float avg=(float)total/5;
    
    //highest and lowest
   
    int highest=arr[i][0];
    int lowest=arr[i][0];
    for(int j=1;j<5;j++){
        if(arr[i][j]>highest){
            highest=arr[i][j];
        }
        if(arr[i][j]<lowest){
            lowest=arr[i][j];
        }
    }

    char grade;
    if(avg>=90) grade='A';
    else if(avg>=80) grade='B';
    else if(avg>=70) grade='C';
    else if(avg>=60) grade='D';
    else grade='F';
    
     cout<<"Student "<<i+1<<"=>" 
    <<" total= "<<total
    <<", avg= "<<avg
    <<", highest= "<<highest
    <<", lowest= "<<lowest
    <<", grade= "<<grade
    <<endl;
}
   return 0;
}