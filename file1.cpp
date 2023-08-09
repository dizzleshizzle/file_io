#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream myfile;
    myfile.open("example.txt");
    //myfile.open("example.txt", ios::out|ios::app|ios::binary);
    if(myfile.is_open()){
        cout<< "file is open"<< endl;
    }
    myfile <<"writing this to a file.\n";
    myfile <<"and again writing this to a file.\n";
    myfile.close();
    return 0;

}
