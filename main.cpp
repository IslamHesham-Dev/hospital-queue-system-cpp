#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


string hospital[20][5][2] = {""};
string specialization, name, status;

int menu(){
    int choice = -1;
    while(choice = -1){
        cout<<"Enter your choice:"<<endl;
        cout<<"1) Add new patient"<<endl;
        cout<<"2) Print all patients"<<endl;
        cout<<"3) Get next patient"<<endl;
        cout<<"4) Exit"<<endl;

        cin>>choice;

        if(choice < 1 || choice > 4){
            cout<<"Invalid choice. Try again"<<endl;
            choice = -1;
        }

        return choice;
    }
}

void read_patient(){
    cout<<"Enter specialization, name, status: ";
    cout<<endl;
    cin>>specialization>>name>>status;
    cout<<endl;
    int i = stoi(specialization)-1;

    int counter = 0;
    for(int z = 0; z < 5; ++z){
        if(hospital[i][z][0].empty()){
            ++counter;
        }
    }

    if(counter >= 1 && counter <= 5){
        if(status == "0"){
            for(int j = 0; j < 5; ++j){
                if(hospital[i][j][0].empty()){
                    hospital[i][j][0] = name;
                    hospital[i][j][1] = status;
                    break;
                }
            }
        } else if(status == "1"){
            for(int x = 5 - counter; x > 0; --x){
                hospital[i][x][0] = hospital[i][x-1][0];
                hospital[i][x][1] = hospital[i][x-1][1];
            }
            hospital[i][0][0] = name;
            hospital[i][0][1] = status;
        } else{
            cout<<"Invalid status number. Try again"<<endl;
        }
    } else{
        cout<<"Sorry we can't add more patients for this specialization"<<endl;
        cout<<endl;
    }
}

void print_patients(){
    cout<<"****************************"<<endl;
    for(int i = 0; i < 20; ++i){
        if(!hospital[i][0][0].empty()){
            int patients = 0;
            for(int j = 0; j < 5; ++j){
                if(!hospital[i][j][0].empty()){
                    ++patients;
                }
            }
            cout<<"There are "<<patients<<" patients in specialization "<<i+1<<endl;
            for(int x = 0; x < 5; ++x){
                if(!hospital[i][x][0].empty()){
                    cout<<hospital[i][x][0]<<" ";
                    if(hospital[i][x][1] == "0"){
                        cout<<"regular"<<endl;
                    } else if(hospital[i][x][1] == "1"){
                        cout<<"urgent"<<endl;
                    }
                }
            }
            cout<<endl;
        }
    }
}

void next_patient(){
    cout<<"Enter specialization: "<<endl;
    string spec;
    cin>>spec;

    if(hospital[stoi(spec)-1][0][0].empty()){
        cout<<"No patients at the moment. Have rest, Dr"<<endl;
        cout<<endl;
    } else{
        cout<<hospital[stoi(spec)-1][0][0]<<" please go with the Dr"<<endl;
        cout<<endl;
        for(int i = 0; i < 4; ++i){
            hospital[stoi(spec)-1][i][0] = hospital[stoi(spec)-1][i+1][0];
            hospital[stoi(spec)-1][i][1] = hospital[stoi(spec)-1][i+1][1];
        }
        hospital[stoi(spec)-1][4][0] = "";
        hospital[stoi(spec)-1][4][1] = "";
    }
}

void hospital_system(){
    while(true){
        int choice = menu();

        if(choice == 1){
            read_patient();
        } else if(choice == 2){
            print_patients();
        } else if(choice == 3){
            next_patient();
        } else{
            break;
        }
    }
}

int main(){
    hospital_system();

    return 0;
}
