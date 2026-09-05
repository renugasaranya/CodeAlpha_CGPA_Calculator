#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int semesters;
int n;
float grade[50];
float credit[50];
int coursesInSemester[10];
int totalCourses=0;
float totalCredits=0;
float totalGradePoints=0;
cout<<"Enter number of semesters:";
cin>>semesters;
for(int s=1;s<=semesters;s++)
{
cout<<"\nEnter number of courses inSemester"<<s<<":";
cin>>n;
coursesInSemester[s-1]=n;
float semesterCredits=0;
float semesterGradePoints=0;
for(int i=0;i<n;i++)
{
cout<<"\nCourse"<<i+1<<endl;
cout<<"Enter grade point:";
cin>>grade[totalCourses];
cout<<"Enter credit:";
cin>>credit[totalCourses];
semesterCredits+=credit[totalCourses];
semesterGradePoints+=
grade[totalCourses]* credit[totalCourses];
totalCourses++;
}
float GPA=semesterGradePoints/semesterCredits;
cout<<"\nSemester"<<s<<"Result\n";
cout<< fixed << setprecision(2);
cout<<"Total Credits:"<<semesterCredits<<endl;
cout<<"Total Grade Points: "<<semesterGradePoints << endl;
cout<<"GPA:"<<GPA<<endl;
totalCredits+=semesterCredits;
totalGradePoints+=semesterGradePoints;
}
cout<<"\nGRADES\n";
int position=0;
for(int s=0;s<semesters;s++)
{
cout<<"\nSemester"<<s+1<<":\n";
for(int i=0;i<coursesInSemester[s];i++)
{
cout<<"Course"<<i+1<<":"<<grade[position]<<endl;
position++;
}
}
float CGPA=totalGradePoints/totalCredits;
cout<<"\nFinal CGPA:"<<fixed<<setprecision(2)<<CGPA<<endl;
return 0;
}