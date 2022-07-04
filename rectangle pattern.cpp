#include<iostream>
using namespace std;
int main()
{
 //print pattern of rectangle
 int rows,column;
 cout<<"Enter Rows\n";
 cin>>rows;
 cout<<"Enter Column\n";
 cin>>column;
 for(int i=0;i<rows;i++){
    for(int j=0;j<column;j++){
        cout<<"*";
        
    }
    cout<< endl;
 }

return 0;
}
