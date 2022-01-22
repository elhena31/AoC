#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>


using namespace std;


int main () {


string line,line1, line0;
vector<string> unos;
vector<string> ceros;


ifstream file;
file.open("DiagnReport.txt");


    for (int i = 0; i < 12; i++)
    {   
        getline(file, line);
        if(line[0] == '1'){unos.push_back(line);}
        else{ceros.push_back(line);}
         
    }
   
return 0;
}