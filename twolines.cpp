#include <iostream>
#include <string>
#include <fstream>


using namespace std;

void readfile(string filename, string arr[], string brr[], string ips[], int counter[]){
    ifstream myfile (filename);
    string line;
    bool first = true;
    bool ip = false;
    int icounter = 0; //erste reihe zaehler
    int jcounter= 0; //zweite reihe zaehler
    int kcounter  = 0; //ip zaehler
    //first true, ip false =erste reihe
    //first false, ip false = zweite reihe
    //first true/false , ip true = ip
    cout << "variablen iniziert" << endl;    
    while(getline(myfile, line)){
        //checke ob man schon im ip segment der datei ist
        if(line == "ips:"){
            ip = true;
            cout << "ip = true" <<endl;
        }
        else{
            //lese erste reihen aus und speicher sie in arr
            if((first == true) && (ip == false)){
                arr[icounter] = line;
                cout << "arr:" << arr[icounter] << icounter << endl;
                icounter++;
                first = false;
            }
            //lese zweite reihen aus und speicher sie in arr
            else{
                if((first == false) && (ip == false)){
                brr[jcounter] = line;
                cout << "brr:" << brr[jcounter] << jcounter << endl;
                jcounter++;
                first = true;
                }
            }
            //lese ips aus
            if(ip == true){
                ips[kcounter] = line;
                cout << "ips:" << kcounter << endl;
                kcounter++;
            }
        }
    }
    myfile.close();    
    counter[0] = icounter;
    counter[1] = jcounter;
    counter[2] = kcounter;
}




int main(){
    string erstezeilen[10];
    string zweitezeilen[10];
    string ips[10];
    int counter[3]; 

    cout << "starte das einlesen..."<< endl;
    readfile("test.txt", erstezeilen, zweitezeilen, ips, counter);
    cout << "erstezeilen: "<< endl; 
    for(int i = 0; i < counter[0]; i++){
        cout << erstezeilen[i] << endl;
    }

    cout << "zweitezeilen: "<< endl; 
    for(int j = 0; j < counter[1]; j++){
        cout << zweitezeilen[j] << endl;

    }

    cout << "ips: "<< endl; 
    for(int k = 0; k < counter[2]; k++){
        cout << ips[k] << endl;

    }


    return 0;
}
