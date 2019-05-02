/*
 * Project Title:
 * CHESS
 * Description: The game is basically similar to regular chess game.
 *
 * INTERESTING FACTS ABOUT OUR PROGRAM:
 *
 * @ The program can print the board after every turn.
 * @ The game can be played by two users.
 * @ The game has a user friendly coordinate system that helps the users to make each move.
 * @ The program has colored pieces to differentiate between two users: RED and BLUE.
 * @ The game has just 3 functions in the main.
 *
 * Developers:
 * - Christian Myers - myers2ci@mail.uc.edu
 * - Arunesh Mishra - mishraa5@mail.uc.edu
 * - Matthew Elaban - elabanmc@mail.uc.edu
 *
 * Special Instructions:
 * - Read the intruction throughout the game carefully.
 *
 * Developer comments:
 * Developer 1: Christian Myers
 * This project forced my hand to understand OOP and I learned how to actually apply it. This code is not perfect at all, but I think overall I am proud of our progress.
 * Developer 2: Arunesh Mishra
 * This game gave me a chance to work on my logical skills. Building graphics and the coordinate system of the game was the most interesting part for me.
 * Developer 3: Matthew Elaban
 * This project was quite interesting. It improved my design and thinking skills as the whole game required to design and develop logics.
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <string>
#include <windows.h>

using namespace std;

int board[8][8];

const int pawn = 100;
const int rook = 305;
const int knight = 300;
const int bishop = 500;
const int queen = 900;
const int king = 2000;


// This is how we check the if the any player has made the checkmate move and see if any player has won the game.
class Check{
   public:
void RunGame(){
   bool kingr = true;
   bool kingb = true;
   while(kingr == false||kingb==false){
       continue;
   }}
};

// This class runs the game including all the fuctions.
class Chess1{
// Color attributes for the color of the chess board
    public:

char* Color(int color=7, char* Message = ""){
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
  return Message;
}

// fuction to start the game, asks the user to input to start the game or not
void startofGame(){

    char introQuestion;
    cout << endl;
    cout<<" READ CAREFULLY    "<<endl;
    cout<<" **************    "<<endl<<endl;
    cout<<" Please Maximise your window before typing anything!    "<<endl;
    cout<<" ***************************************************    "<<endl<<endl;
    cout<<endl;
    cout<<" *** WELCOME TO C++ CHESS ***"<<endl<<endl;
    cout<<" Would you like to play the game?(Y/N): ";
    cin >> introQuestion;
        if (introQuestion == 'Y'){
            string message = " ********* C++ Chess *********\n\n";


    int i = 0;
    while(message[i] != '\0'){
        cout << message[i];
        Sleep(15);
        i++;
        if(message[i] == '\n'){
            Sleep(500);
        }
    }
    int j = 0;
    string beginGame = "0";
    string game = "Press 1 to begin game: \0";
      cout<<endl;
      cout<<" *******************************************************************"<<endl<<endl;
      cout<<"        IMPORTANT INFORMATION:     "<<endl<<endl;
      cout<<"        CASE SENSITIVE! "<<endl;
      cout<<"        The board below will be your Coordinate system.     "<<endl;
      cout<<"        You will use this system to play the game"<<endl;
       cout<<endl;
       cout<<"      _____ _____ _____ _____ _____ _____ _____ _____ ";
         for(int y=8; y  > 0; y--){
                         cout<<endl<<"     |a"<<y<<"   |b"<<y<<"   |c"<<y<<"   |d"<<y<<"   |e"<<y<<"   |f"<<y<<"   |g"<<y<<"   |h"<<y<<"   |";
                         cout<<endl<<"     |     |     |     |     |     |     |     |     |";

                     for(int x=1; x < 9; ++x){
                         //cout<<"|  ";
                         cout<<" ";
                         cout<<"  ";
                     }
                     cout<<"|  "<<endl<<"     |_____|_____|_____|_____|_____|_____|_____|_____|";
                 }
                 cout<<endl<<endl<<"        a     b     c     d     e     f     g     h   "<<endl<<endl;

    while(game[j] != '\0'){
        cout << game[j];
        Sleep(15);
        j++;
    }
    cin >> beginGame;

    while(beginGame != "1") {
        cout << "Press 1 to begin game: ";
        cin >> beginGame;
    }

    if(beginGame == "1") {
        system("CLS");
           cout<<endl;
           cout<<"*******************************************************************"<<endl<<endl;
           cout<<"        Here is your Coordinate system.     "<<endl;
           cout<<"        For example: typing 'b2b3' will move the pawn from b2 to b3"<<endl<<endl;
           cout<<"      _____ _____ _____ _____ _____ _____ _____ _____ ";
             for(int y=8; y  > 0; y--){
                             cout<<endl<<"     |a"<<y<<"   |b"<<y<<"   |c"<<y<<"   |d"<<y<<"   |e"<<y<<"   |f"<<y<<"   |g"<<y<<"   |h"<<y<<"   |";
                             cout<<endl<<"     |     |     |     |     |     |     |     |     |";

                         for(int x=1; x < 9; ++x){
                             //cout<<"|  ";
                             cout<<" ";
                             cout<<"  ";
                         }
                         cout<<"|  "<<endl<<"     |_____|_____|_____|_____|_____|_____|_____|_____|";
                     }
                     cout<<endl<<endl<<"        a     b     c     d     e     f     g     h   "<<endl<<endl;
                     cout<<endl;
                    cout<<" HOW THE GAME WORKS: "<<endl<<endl;
                    cout<<" Type your first move eg: 'b2b3'. You will then see the updated board"<<endl<<endl;
                     cout << Color(3," R N B Q K B N R ")<<endl;
                     cout << Color(3," P P P P P P P P")<<endl;
                     cout<<Color(7," - - - - - - - - ")<<endl;
                     cout<<" - - - - - - - - "<<endl;
                     cout<<" - - - - - - - - "<<endl;
                     cout<<" - - - - - - - - "<<endl;
                     cout << Color(4," P P P P P P P P ")<<endl;
                     cout << Color(4," R N B Q K B N R ")<<endl;
                     cout<<endl;
                     Color();

        cout << "Player 1 move coordinates (eg: b2b3 ): ";
    }
}
else if(introQuestion == 'N'){
    cout << endl;
    cout << " GOODBYE  ";
}
}

const int start[8][8] = {rook, knight, bishop, queen, king, bishop, knight, rook, pawn, pawn, pawn, pawn, pawn, pawn, pawn, pawn, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -rook, -knight, -bishop, -queen, -king, -bishop, -knight, -rook};
void SetColor(int value){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

void setup (void) {
int i, j;
for(i = 0; i < 8; i++){
 for(j = 0; j < 8; j++){
     board[i][j] = start[i][j];
 }
}
}

// this is the print board function, it prints the board after evry turn
void printb (void) {
 cout<<endl;
    cout<<"*******************************************************************"<<endl<<endl;
    cout<<"        Here is your Coordinate system.     "<<endl;
    cout<<"        Type 'print' to print the board"<<endl;
    cout<<"        Type 'exit' to exit the game"<<endl;
    cout<<"        For example: typing 'b2b3' will move the pawn from b2 to b3"<<endl<<endl;
    cout<<"      _____ _____ _____ _____ _____ _____ _____ _____ ";
      for(int y=8; y  > 0; y--){
                      cout<<endl<<"     |a"<<y<<"   |b"<<y<<"   |c"<<y<<"   |d"<<y<<"   |e"<<y<<"   |f"<<y<<"   |g"<<y<<"   |h"<<y<<"   |";
                      cout<<endl<<"     |     |     |     |     |     |     |     |     |";

                  for(int x=1; x < 9; ++x){
                      //cout<<"|  ";
                      cout<<" ";
                      cout<<"  ";
                  }
                  cout<<"|  "<<endl<<"     |_____|_____|_____|_____|_____|_____|_____|_____|";
              }
              cout<<endl<<endl<<"        a     b     c     d     e     f     g     h   "<<endl<<endl;

int a, b;
// case structures that define color of each piece of the code
string piece;
for(a = 7; a > -1; a--){
    cout << endl;
    for(b = 0; b < 8; b++){
        switch (board[a][b]){
        case 0:
        piece = "-";
        SetColor(7);
        break;

        case pawn:
        piece = "P";
        SetColor(4);
        break;

        case knight:
        piece = "N";
        SetColor(4);
        break;

        case rook:
        piece = "R";
        SetColor(4);
        break;

        case bishop:
        piece = "B";
        SetColor(4);
        break;

        case queen:
        piece = "Q";
        SetColor(4);
        break;

        case king:
        piece = "K";
        SetColor(4);
        break;

        case -pawn:
        piece = "P";
        SetColor(3);
        break;

        case -knight:
        piece = "N";
        SetColor(3);
        break;

        case -rook:
        piece = "R";
        SetColor(3);
        break;

        case -bishop:
        piece = "B";
        SetColor(3);
        break;

        case -queen:
        piece = "Q";
        SetColor(3);
        break;

        case -king:
        piece = "K";
        SetColor(3);
        break;
        }
        cout << " " << piece << " ";
    }
}
}

// Validate move function, it checks the move for each piece
// Currently it can correctly chech the move for pawn, bishop and rook and tell the user if its legal or not.
// However the code doesn't work for bishop, quuen and he king
// We tried different approaches and asked helped from senior students too but couldn't get it working.

bool validateMove(int x1, int y1, int x2, int y2) {
   int i,a,b,a1,b1;
   for(a = 7; a > -1; a--){
       cout << endl;
       for(b = 0; b < 8; b++){
           switch (board[a][b]){

           case 0:
           return false;

           // Check for pawn
           case -pawn:
               if(abs(y2-y1) == 1){
                   return true;
               }
               else {
                   cout<<"Illegal move, Enter again: ";
                   return false;
               }
           break;

           /*case -knight:
               if(abs(y2 - y1) == 2){
                   if(abs(x2 - x1) == 1){
                       return true;
                   }
                   else{
                       cout<<"Illegal move, Enter again: ";
                       return false;
                   }
               }
               else if (abs(x2 - x1) == 2) {
                   if(abs(y2 - y1) == 1){
                       return true;
                       }
                       else{
                           cout<<"Knight made illegal move, Enter again: ";
                           return false;
                       }
               }
               else {
                   cout<<"Knight made illegal move, Enter again: ";
                   return false;
               }*/



           /*case rook:
               if (b1 == b){
                   for(i = a + 1; i < a1; i++){
                       if(board[a1][i] != 0){
                           return false;
                       }
                   }
                   for(i = a - 1; i > a1; i--){
                       if(board[a1][i] != 0)
                           return false;
                   }
               }
               else if(a1 == a){
                   for(i = b + 1; i < b1; i++){
                       if(board[b1][i] != 0)
                           return false;
                   }
                   for(i = b - 1; i > b1; i--){
                       if(board[b1][i] != 0){
                           return false;
                   }
               }
               }
               else{
                   return false;
               }
           case bishop:
               if(abs(a1 - a) != abs(b1 - b)){
                   return false;
               }
               if((a<a1)&&(b<b1)){
                   for(i = 1;(i + a) < a1; i++){
                       if(board[b + i][a + i] != 0){
                           return false;
                   }
               }
               }
               else if((a>a1)&&(b>b1)){
                   for(i = 1;(a - i)>a1; i++){
                       if(board[b-i][a-i] != 0){
                           return false;
                   }
               }
               }
               else if((a>a1)&&(b<b1)){
                   for( i = 1; (a-i)>a1; i++){
                       if(board[b-i][a-i] != 0){
                           return false;
                   }
                   }
               }
               else if((a<a1)&&(b>b1)){
                   for(i = 1; (b - i)>b1; i++){
                       if(board[b-i][a+i] != 0){
                           return false;
                       }
                   }
               }
           break;
           case queen:
               if(abs(a1 - a) != abs(b1 - b)){
                   return false;
               }
               else if((a<a1)&&(b<b1)){
                   for(i = 1;(i + a) < a1; i++){
                       if(board[b + i][a + i] != 0){
                           return false;
                   }
               }
               }
               else if((a>a1)&&(b>b1)){
                   for(i = 1;(a - i)>a1; i++){
                       if(board[b-i][a-i] != 0){
                           return false;
                   }
               }
               }
               else if((a>a1)&&(b<b1)){
                   for( i = 1; (a-i)>a1; i++){
                       if(board[b-i][a-i] != 0){
                           return false;
                   }
                   }
               }
               else if((a<a1)&&(b>b1)){
                   for(i = 1; (b - i)>b1; i++){
                       if(board[b-i][a+i] != 0){
                           return false;
                       }
                   }
               }
               else if (b1 == b){
                   for(i = a + 1; i < a1; i++){
                       if(board[a1][i] != 0){
                           return false;
                       }
                   }
                   for(i = a - 1; i > a1; i--){
                       if(board[a1][i] != 0)
                           return false;
                   }
               }
               else if(a1 == a){
                   for(i = b + 1; i < b1; i++){
                       if(board[b1][i] != 0)
                           return false;
                   }
                   for(i = b - 1; i > b1; i--){
                       if(board[b1][i] != 0){
                           return false;
                   }
               }
           }
           case king:
               if((a1 = a + 1) || (a1 = a - 1) || (b1 = b + 1) || (b1 = b -1) || ((a1 = a + 1) && (b1 = b + 1)) || ((a1 = a - 1) && (b1 = b + 1)) || ( (a1 = a+1) && (b1 = b-1) ) || ((a1 = a -1) && (b1 = b -1))){
                                              return true;}
           break;
           case -knight:
               if(a1 == a + 2 || a1 == a - 2){
                   if(b1 == b + 1 || b1 == b - 1){
                       return true;
                   }
                   else{
                       return false;
                   }
               }
               if(b1 == b + 2 || b1 == b - 2){
                   if(a1 == a + 1 || a1 == a - 1){
                       return true;
                       }
                       else{
                           return false;
                       }
               }
           case -rook:
               if (b1 == b){
                   for(i = a + 1; i < a1; i++){
                       if(board[a1][i] != 0){
                           return false;
                       }
                   }
                   for(i = a - 1; i > a1; i--){
                       if(board[a1][i] != 0)
                           return false;
                   }
               }
               else if(a1 == a){
                   for(i = b + 1; i < b1; i++){
                       if(board[b1][i] != 0)
                           return false;
                   }
                   for(i = b - 1; i > b1; i--){
                       if(board[b1][i] != 0){
                           return false;
                   }
               }
               }
               else{
                   return false;
               }
           case -bishop:
               if(abs(a1 - a) != abs(b1 - b)){
                   return false;
               }
               if((a<a1)&&(b<b1)){
                   for(i = 1;(i + a) < a1; i++){
                       if(board[b + i][a + i] != 0){
                           return false;
                   }
               }
               }
               else if((a>a1)&&(b>b1)){
                   for(i = 1;(a - i)>a1; i++){
                       if(board[b-i][a-i] != 0){
                           return false;
                   }
               }
               }
               else if((a>a1)&&(b<b1)){
                   for( i = 1; (a-i)>a1; i++){
                       if(board[b-i][a-i] != 0){
                           return false;
                   }
                   }
               }
               else if((a<a1)&&(b>b1)){
                   for(i = 1; (b - i)>b1; i++){
                       if(board[b-i][a+i] != 0){
                           return false;
                       }
                   }
               }
           break;
           case -queen:
               if(abs(a1 - a) != abs(b1 - b)){
                   return false;
               }
               else if((a<a1)&&(b<b1)){
                   for(i = 1;(i + a) < a1; i++){
                       if(board[b + i][a + i] != 0){
                           return false;
                   }
               }
               }
               else if((a>a1)&&(b>b1)){
                   for(i = 1;(a - i)>a1; i++){
                       if(board[b-i][a-i] != 0){
                           return false;
                   }
               }
               }
               else if((a>a1)&&(b<b1)){
                   for( i = 1; (a-i)>a1; i++){
                       if(board[b-i][a-i] != 0){
                           return false;
                   }
                   }
               }
               else if((a<a1)&&(b>b1)){
                   for(i = 1; (b - i)>b1; i++){
                       if(board[b-i][a+i] != 0){
                           return false;
                       }
                   }
               }
               else if (b1 == b){
                   for(i = a + 1; i < a1; i++){
                       if(board[a1][i] != 0){
                           return false;
                       }
                   }
                   for(i = a - 1; i > a1; i--){
                       if(board[a1][i] != 0)
                           return false;
                   }
               }
               else if(a1 == a){
                   for(i = b + 1; i < b1; i++){
                       if(board[b1][i] != 0)
                           return false;
                           break;
                   }
                   for(i = b - 1; i > b1; i--){
                       if(board[b1][i] != 0){
                           return false;
                   }
               }
           }
           break;
           case -king:
               if((a1 = a + 1) || (a1 = a - 1) || (b1 = b + 1) || (b1 = b -1) || ((a1 = a + 1) && (b1 = b + 1)) || ((a1 = a - 1) && (b1 = b + 1)) || ( (a1 = a+1) && (b1 = b-1) ) || ((a1 = a -1) && (b1 = b -1))){
                                              return true;}
           }*/
}}}}

void oneTurn(){
   using namespace std;
   string passd;
   int moveCount = 1;

   while(1) {
       getline (cin, passd);
       if (passd.substr(0,4) == "exit"){
           break;
       }
       if (passd.substr(0,5) == "print"){
           printb();
       }
       if(passd.substr(0,3) == "new"){
           setup();
       }
       if(passd.substr(0,1) >= "a" && passd.substr(0,1) <= "h" && passd.substr(1,1) >= "1" && passd.substr(1,1) <= "8" && passd.substr(2,1) >= "a" && passd.substr(2,1) <= "h" && passd.substr(3,1) >= "1" && passd.substr(3,1) <= "8"){
           int a, b, a1, b1, x1,y1,x2,y2;
           bool v;

           a = passd[0] - 'a';
           //cout<<"a: "<<a<<"  "<<passd[0]<<endl;
           b = passd[1] - '1';
           //cout<<"b: "<<b<<"  "<<passd[1]<<endl;
           a1 = passd[2] - 'a';
           //cout<<"a1: "<<a1<<"  "<<passd[2]<<endl;
           b1 = passd[3] - '1';
           //cout<<"b1: "<<b1<<"  "<<passd[3]<<endl;

           x1 = a;
           //cout<<"x1: "<<x1<<endl;
           y1 = b;
           //cout<<"y1: "<<y1<<endl;
           x2 = a1;

           y2 = b1;

           v = validateMove(x1,y1, x2, y2);

           if(v == true){
               board[b1][a1] = board[b][a];
               board[b][a] = 0;

               printb();
               cout << endl << endl;

               if (moveCount % 2 != 0){
                   SetColor(3);
                   cout << " Player 2 move coordinates: ";
                        }
                            else{
                    SetColor(4);
                   cout << " Player 1 move coordinates: ";
                        }
                            moveCount = moveCount + 1;
               }
           else {
               continue;
           }
   }
   }
}};
int main (void) {
    Chess1 c1;

   c1.startofGame();
   c1.setup();
   c1.oneTurn();

}
