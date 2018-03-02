#include<iostream>
#include<stdlib.h>
using namespace std;

class bubblesort
{
    public:
    void sort(int a[], int l)     //func for bubble sort
    {
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<(l-i-1);j++)
            {
                if(a[j]>a[j+1])
                {
                    int t = a[j+1];
                    a[j+1] = a[j];
                    a[j] = t;
                }
            }
        }
    }
};

int main(){
    int x;
    srand(time(NULL));            // intializing
    cout<<"Enter size";
    cin>>x;
    int b[x];
    bubblesort c;
    for(int i=0;i<x;i++){
        b[i]= rand() % x ;   // producing random no. to create a test array
        cout<<b[i]<<"\t";
    }
    c.sort(b,x);
    cout<<endl;
    for(int i=0;i<x;i++){
        cout<<b[i]<<"\t";
    }
    return 0;
}