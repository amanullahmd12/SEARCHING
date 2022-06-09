//
//  main.cpp
//  linear search.cpp
//
//  Created by MD AMANULLAH on 04/11/21.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter size of array : "<<endl;
    cin>>n;
    int A[n] ;
    int key;
    cout<<"Enter    Elements of array :"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    cout<<"Enter key Eelement \n";
    cin>>key;
    
    for (int i=0;i<n;i++)
    {
        if(key == A[i])
        {
            cout<<"Element found at index \n "<<i<<endl;
            exit(0);
        }
    }
    cout<<"Element not found\n";
    return 0;
}
