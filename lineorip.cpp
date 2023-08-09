#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//void refi(string filename,string arr[]);
void wrfi(string filename,char** brr){

}
int linenumbers(string filename){
    ifstream myfile (filename);
    string line;
    int i =0;
    int lines =0;
    while(getline(myfile, line)){
        lines++;
    }
    myfile.close();
    return lines;
}

//put all lines in of the file and put them into array arr
//untill the seperator string and then puts all remaining lines
//into array brr
void refi(string filename, string seperator, string arr[], string brr[]){
    int lines = linenumbers(filename);
    bool firsthalf = true;
    string line;
    int i =0;
         
    ifstream myfile (filename);
    while(getline(myfile,line)){
        if(line == seperator){
            firsthalf = false;
            i = 0;
        }

        if(firsthalf){
            arr[i] = line;
            i++;
        }

        else{
            brr[i] = line;
            i++;
        }

    }

    myfile.close();    
}

int main(){
    string arr[20];
    string brr[20];
    string filename = "test.txt";
    //wrfi("test", arr);
    refi("test.txt","ip:", arr, brr);
    for(int i = 0; i <linenumbers(filename)/2;i++){
        cout << arr[i] << endl;
    }

    for(int i = 0; i <=linenumbers(filename)/2;i++){
        cout << brr[i] << endl;
    }
}


