#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 float total_point,score,ex,Total_Score=0,Total_points_possible=0,percent;
 cout<<"How many exercises to input?  ";
 cin>>ex;
 for(int i=1;i<=ex;i++)
 {
     cout<<"Score received for exercise :";
     cin>>score;
     cout<<"Total points possible for exercise:";
     cin>>total_point;
     Total_Score+=score;
     Total_points_possible+=total_point;
    }
     percent= ((Total_Score)/(Total_points_possible))*100;
     cout<<"Your total is :" <<Total_Score<<" out of "<<Total_points_possible<<" or "<<percent<<"%";






    return 0;
}
