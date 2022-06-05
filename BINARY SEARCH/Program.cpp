//
//  main.cpp
//  BinarySearch.cpp
//
//  Created by MD AMANULLAH on 16/04/22.
//

#include <iostream>
using namespace std;
 

int Binary_Search(int A[] ,int n,int key)
{
    int l=1;
    int h=n;
    
    while(l<=h)
    {
        int mid=(l+h)/2;
        if (key == A[mid])
        {
            cout<<"index of element is "<<mid<<endl;
            return mid;
        }
        else if(key < A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return 0;
    
}

int main()
{
    int n;
    
    cout<<"Enter size of array ";
    cin>>n;
    
    int A[n];
    cout<<"Enter ELEMENTS OF ARRAY";
    for(int i=1;i<=n;i++)
    {
       
        cin>>A[i];
    }
    cout<<"Elements are \n";
    for(int i=1;i<=n;i++)
    {
    
        cout<<A[i]<<" "<<endl;
    }
    int key;
    
    cout<<"enter key element ";
    cin>>key;
    
    Binary_Search(A, n, key);
    cout<<"key elements is "<<key<<endl;

    
}
