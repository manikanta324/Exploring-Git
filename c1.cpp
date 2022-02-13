#include<bits/stdc++.h>
using namespace std;

int main()
{
   ifstream indata;
   int num;
   indata.open("test1.txt");
   int column=0;
   if(!indata) 
   { 
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }
   
   indata >> num;
   
   while ( !indata.eof() ) 
   {
      cout << "\nThe next number is " << num << endl;
      indata >> num;
	column++; 
   }

   indata.close();
   cout << "End-of-file reached.." << endl;


   ifstream indata1;
   string line;
   int count=0;

   indata1.open("test1.txt");

    while (getline(indata1, line))
    {
        ++count;
    }

cout << "\n\n\nNumber of rows in text file: " << count	;
cout << "\n\n\nNumber of cloumns in text file: " << (column/count)	;

    indata1.close();


   return 0;
}