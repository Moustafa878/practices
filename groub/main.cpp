#include <iostream>

using namespace std;

int main()
{
    int temp1,temp2,temp3,counter1,counter2;
    cout<<"enter the desired temperature : ";
    cin>>temp1 >>temp2 >>temp3;
    if (temp1==1 && (temp2!=1 || temp2!=4 ||temp2!=7) && (temp3!=1 ||temp3!=4 || temp3!=7))
    {
        cout<<99<<"\n"<<200;
    }
    else if (temp1==4 && (temp2!=1 || temp2!=4 ||temp2!=7) && (temp3!=1 ||temp3!=4 || temp3!=7))
    {
        cout<<399<<"\n"<<500;
    }
    else if (temp1==7 && (temp2!=1 || temp2!=4 ||temp2!=7) && (temp3!=1 ||temp3!=4 || temp3!=7))
    {
        cout<<699<<"\n"<<800;
    }
    else if ((temp2==1 || temp2==4 || temp2==7) && (temp1!=1 && temp1!=4 && temp1!=7 && temp3!=1 && temp3!=4 && temp3!=7))
    {
        cout<<temp1<<temp2-1<<9<<"\n";
        cout<<temp1<<temp2+1<<0<<"\n";
    }
    else if ((temp3==1 || temp3==4 || temp3==7) && (temp1!=1 && temp1!=4 && temp1!=7 && temp2!=1 && temp2!=4 && temp2!=7))
    {
        cout<<temp1<<temp2<<temp3-1<<"\n";
        cout<<temp1<<temp2<<temp3+1<<"\n";
    }
    else if ((temp3==1 || temp3==4 || temp3==7) && (temp1!=1 && temp1!=4 && temp1!=7) && (temp2==1 || temp2==4 || temp2==7))
    {
        cout<<temp1<<temp2-1<<temp3-1<<"\n";
        cout<<temp1<<temp2+1<<temp3+1<<"\n";
    }
    else if ((temp1!=1 || temp1!=4 || temp1!=7) && (temp2!=1 || temp2!=4 ||temp2!=7) && (temp3!=1 ||temp3!=4 || temp3!=7))
    {
        cout<<temp1<<temp2<<temp3<<"\n";
    }
    return 0;
}
