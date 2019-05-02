#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


// Declaring variables that will be used in the program.
int userL, curU_Y, curU_X,currd_X,currd_Y, muskx, musky;
int bound [15][15];
bool musk = false;
bool lose = false;

// Below are random numbers generations for different locations of user, Elon musk, Roadster
int numrand(){
    srand((unsigned)time(0));
    int i;
    i = (rand()%15)+1;
    return i;
}

int mX(){
   int muskX;
   muskX = rand() % 15 + 1;
   return muskX;
}

int mY(){
   int muskY;
   muskY = rand() % 15 + 1;
   return muskY;
}
int uX(){
   int userX;
   userX = rand() % 15 + 1;

   return userX;
}

int uY(){
   int userY;
   userY = rand() % 16 + 1;

   return userY;
}

int rdx(){
    int rdX;
    rdX = rand() % 16 + 1;
    return rdX;
}

int rdy(){
    int rdY;
    rdY = numrand();

    return rdY;
}

// Checking if user encountered Elon Musk, first time and checking what to do if user faces Elon musk for second time.
int checkmusk(int uX, int uY,int MX, int MY, bool musk, bool lose){
    cout<<musk<<endl;
    if (musk){
        MX = mX();
        MY = mY();
        if (((uX < MX+1) || (uX<MX-1)) && ((uY < MY+1) || (uY<MY-1))){
            cout<<"You have met Elon Musk. You lose!!!"<<endl;
            lose = true;

        }
    }
    else{
        if ((uX == MX) && (uY == MY)){
            cout<<"You have woken up Eon Musk, you have one more chance!!!"<<endl;
            musk = true;
            cout<<musk<<endl;
        }
    }
}

// Different hints for the user when the user gets closer to the roadster
int hint(int U_X, int U_Y, int D_X, int D_Y){
    if (((U_X < D_X+2) || (U_X<D_X-2)) && ((U_Y < D_Y+2) || (U_Y<D_Y-2))){
        cout<<"\n ****You are getting warmer!**** \n"<<endl;
    }
    else if (((U_X < D_X+4) || (U_X<D_X-4)) && ((U_Y < D_Y+4) || (U_Y<D_Y-4))){
        cout<<"\n ****You are getting colder!**** \n"<<endl;
    }
    else {
        cout<<"\n ****You are getting freezing!**** \n"<<endl;
    }
}

// Construction of the graphics for the Board. # represents location of the user.
int board(int userX, int userY){
    int wd = 17, hi =17;

    // A rectangle of 17 by 17 with boundaries 16 by 16 
    userX++;userY++;
    for (int i = 1 ; i<= hi; i++){
        for (int j = 1; j<=wd; j++){
            if (( i ==1 || i == hi ) || (j ==1 || j == wd ))
                    cout<<"*  ";
            else if (j == userX && i ==userY ){
                cout<<"#  ";
            }
            else {
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    // Assigning the random location that were generated above to the variables.
    currd_X = rdx();
    currd_Y = rdy();

    muskx = mX();
    musky = mY();

    curU_X = uX();
    curU_Y = uY();

    // While loop to play the game until the user's location and the roadster's locations are same.  
    while((currd_X != curU_X) || (currd_Y != curU_Y) || lose){
        
        // You can comment in these statemnets to check my program and see the live location of user, Elon Musk and Roadster. 
        
        //cout<<"roadster x: "<<currd_X<<endl;
        //cout<<"roadster y: "<<currd_Y<<endl;
        //cout<<"************"<<endl;
        //cout<<"user x: "<<curU_X<<endl;
        //cout<<"user y: "<<curU_Y<<endl;
        //cout<<"************"<<endl;
        //cout<<"musk x: "<<muskx<<endl;
        //cout<<"musk y: "<<musky<<endl;


        // Calling all the functions in the main to rum the program in the correct order.
        checkmusk(curU_X, curU_Y, muskx, musky, musk, lose);

        hint(curU_X,curU_Y,currd_X,currd_Y);

        board(curU_X,curU_Y);

        // Playing the game with (0,0) as the top left Origin. 
        
        char step;
        cout<<"Enter your next step (q to Quit): ";
        cin>> step;

        if (step == 's'){
            curU_Y+=1;
        }
        else if(step == 'a'){
            curU_X-=1;
        }
        else if(step == 'd'){
            curU_X+=1;
        }
        else if(step == 'w'){
            curU_Y-=1;
        }
        else if(step == 'q'){
            cout<<"You Quit!"<<endl;
        }
    }
    if (lose){
        cout<<"You lost!"<<endl;
    }
    else{
        cout<<"\n ***** You saved the Roadster! ***** \n"<<endl;
    }
    return 0;
}
