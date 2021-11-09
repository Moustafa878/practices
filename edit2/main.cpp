#include <iostream>
#include <string>
using namespace std;

int main()
{
    char arr1[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char arr2[27];

    string key;
    string text;

    int i=5;

    cout << "Enter the key word :";
    while(true)
    {
        cin >> key;
        if(key.size()!=5)
        {
            cout << "Enter a word of 5 characters :";
            continue;
        }
        break;
    }

    for(int j=0 ; j<5 ; j++)
    {
        arr2[j]=key[j];
    }

    for(int j=0 ; j<26 ; j++)
    {
        bool check_exist = true;
        for(int l=0 ; l<5 ; ++l)
        {
            if(arr2[l]==arr1[j])
            {
                check_exist = false;
                break;
            }
        }
        if(check_exist == true)
        {
            arr2[i]=arr1[j];
            i = i + 1;
        }
    }

    cout << "Enter your message :";
    cin.ignore();
    getline (cin,text);

    for(int j=0 ; j < text.length() ; ++j)
    {
        for(int l=0 ; l < 26 ; ++l)
        {
            if(text[j]==arr1[l])
            {
                text[j]=arr2[l];
            }
        }
    }
    cout << "The Encrypted Message is :" << text << endl;


    return 0;
}
