#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDie()
{
    int roll;
    roll = (rand() % 6) + 1;
    return roll;
}

int main()
{
        int numD, accB = 100, wager;
        char x;
        srand(time(0));
        cout<<"Do you want to pay the game? (Y/N): ";
        cin>>x;
        cout<<"Account Balance $"<<accB<<endl;
        cout<<"Enter wager (0 to exit): ";
        cin>>wager;

        while(wager>0){
            while(x == 'Y' || x == 'y'){
                while(wager>0){
                    cout<<"Enter your point value (1 - 6): ";
                    cin>>numD;

                    for(int i = 0; i < 3; ++i){
                        int random = rollDie();
                        if (random == numD ){
                            cout<<"Roll # "<< i+1 << " is "<<random<<endl;
                            cout<<"** You win! **"<<endl;
                            cout<<"Account Balance $"<<accB+wager<<endl;
                            accB += wager;
                            break;
                        }
                        else {
                            cout<<"Roll # "<< i+1 << " is "<<random<<endl;
                            if(i == 2) {
                                cout<<"** You lose! **"<<endl;
                                cout<<"Account Balance $"<<accB-wager<<endl;
                                accB -= wager;
                            }
                        }
                    }
                    cout<<"Do you want to pay the game? (Y/N): ";
                    cin>>x;
                    cout<<"Enter wager (0 to exit): ";
                    cin>>wager;
                }
            }
}
    return 0;
}
