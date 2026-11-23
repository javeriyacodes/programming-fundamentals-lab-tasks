/*
lab  : 01
name : javeriya
rollno: SE-06-2026
date  :   23-nov-2026
purpose:  bug hunt fix
*/
#include<iostream>
using namespace std;            //BUG 01: missing ; after std
 int main()
 {
 	cout<<"Welcome to the lab!"<<endl;   //BUG 02: missing ; after endl
    cout<< "Today we learn \"c++\"." <<endl;   //BUG 03 : capital C in cout 
    cout<< "Files are in C:\lab01"<< endl;
    cout<< "Bye!" <<endl;                                // BUG 04: missing "
    return 0;
	 }
 
