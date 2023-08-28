#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
void savedata(){
    ofstream myfile;
    myfile.open("config.txt");
    //daten schreiben
    myfile << textBox1->text <<endl;
    myfile << textBox1->text <<endl;
    myfile << textBox1->text <<endl;

    myfile.close();

}
*/

int main(){
    cout << "start:\n";
    ofstream myfile;
    cout << "oeffne datei";
    myfile.open("test2.txt");
    myfile << "test";
    myfile << "\n";
    myfile << "\n";
    myfile << "\n";
    myfile << "test";
    myfile.close(); 

    return 0;
}
