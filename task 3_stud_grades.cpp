#include<iostream>
using namespace std;

int main()
{
    char stud_name[20];
    int marks[30];
    int n,i,s;
    int max=-1;
    int min=-1;
    
    cout<<"Enter number of students: ";
    cin>>n;
    for(i=1; i<=n; i++) 
    {
        cout<<"Enter student's name: ";
        cin>>stud_name;
        cout<<"Enter student's marks: ";
        cin>>marks[i];
        s=s+marks[i];
    }
    int avg=s/n;
    cout<<"The average of grades is: "<<avg<<endl;
    
    //max=marks[0];
    for (i=1;i<=n;i++)
    {
        if (marks[i]>max)
            max=marks[i];
    }
    min=marks[0];
    for (i=1; i<=n; i++)
    {
        if (marks[i]<min)
            min=marks[i];
    }
    cout<<"Maximum grades obtained: "<<max<<endl;
    cout<<"Minimum grades obtained: "<<min<<endl;
}