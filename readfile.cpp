#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
    string line;
    string arr[100]; 
    int i=0;
    ifstream myfile ("example.txt");
    if (myfile.is_open()){
        while(getline(myfile,line)){
            cout<< line << '\n';
            arr[i] = line;
            i++;
        }
        myfile.close();
    }
    else{
        cout << "unable to open file";
    }
    int lines=i;
    int sum =0;
    for(i=0;i<lines;i++){
        sum += stoi( arr[i]);
    }
    cout << sum << endl;
    return 0;

}
