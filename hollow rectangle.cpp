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
        if(i==0 || i==rows-1 || j==0 || j==column-1){
        	cout<<"*";
		}
		else{
			cout<<" ";
		}
        
    }
    cout<< endl;
 }

return 0;
}
