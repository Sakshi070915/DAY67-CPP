#include <iostream>
using namespace std;

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand()%100)+1;

    cout<<"\n**************** NUMBER GUESSING GAME ****************\n";
    do{
        cout<<"Guess the number between (1-100): ";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"Too High"<<endl;;
        }
        else if(guess<num){
            cout<<"Too Low"<<endl;;
        }
        else{
            cout<<"\nCORRECT NUMBER!!! \nNo. of tries: "<<tries<<endl;;
        }
    }while(guess!=num);
    cout<<"************************************************";
    return 0;
}