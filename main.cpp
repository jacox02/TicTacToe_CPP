#include <iostream>
#include <string>
#include <stdlib.h>
#include "GameStatus.h"
#include "PositionStatus.h"

using namespace std;
// Board Matrix
string BoardVector[3][3] = {
    {"1", "2", "3"},
    {"4", "5", "6"},
    {"7", "8", "9"}};
// Players information
string PlayerXName = "";
string PlayerOName = "";

string Player1Symbol;
string Player2Symbol;

// General game status
int CurrentGameStatus = STILL_PLAYING;
int CurrentTurn = IS_X_TURN;

void GetPlayersData()
{
    cout << "Player 1, please enter your name: " << endl;
    cin >> PlayerXName;

    cout << "Player 1, please select between X or O: " << endl;
    cin >> Player1Symbol;

    if (Player1Symbol == 'X')
    {
        Player2Symbol = 'O';
    }
    else
    {
        Player2Symbol = 'X';
    }

    cout << "Player 2, please enter your name: " << endl;
    cin >> PlayerOName;

    if (!Player2Symbol)
    {
        cout << "Player 2, please select between X or O: " << endl;
        cin >> Player2Symbol;
    }

    cout << "Player 1 name is: " << PlayerXName << " And his simbol is " << Player1Symbol << endl;
    cout << "Player 2 name is: " << PlayerOName << " And his simbol is " << Player2Symbol << endl;
}
int CheckWhoWon()
{

    int Winner;

    if ((BoardVector[0][0] ==
             BoardVector[0][1] &&
         BoardVector[0][1] ==
             BoardVector[0][2]) &&
        (BoardVector[0][0] == Player1Symbol &&
         BoardVector[0][1] == Player1Symbol &&
         BoardVector[0][2] == Player1Symbol))
    {
        Winner = X_PLAYER_WON;
    }
    else if ((BoardVector[1][0] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[1][2]) &&
             (BoardVector[1][0] == Player1Symbol &&
              BoardVector[1][1] == Player1Symbol &&
              BoardVector[1][2] == Player1Symbol))
    {
        Winner = X_PLAYER_WON;
    }
    else if ((BoardVector[2][0] ==
                  BoardVector[2][1] &&
              BoardVector[2][1] ==
                  BoardVector[2][2]) &&
             (BoardVector[2][0] == Player1Symbol &&
              BoardVector[2][1] == Player1Symbol &&
              BoardVector[2][2] == Player1Symbol))
    {
        Winner = X_PLAYER_WON;
    }
    else if ((BoardVector[0][0] ==
                  BoardVector[1][0] &&
              BoardVector[1][0] ==
                  BoardVector[2][0]) &&
             (BoardVector[0][0] == Player1Symbol &&
              BoardVector[1][0] == Player1Symbol &&
              BoardVector[2][0] == Player1Symbol))
    {
        Winner = X_PLAYER_WON;
    }
    else if ((BoardVector[0][1] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][1]) &&
             (BoardVector[0][1] == Player1Symbol &&
              BoardVector[1][1] == Player1Symbol &&
              BoardVector[2][1] == Player1Symbol))
    {
        Winner = X_PLAYER_WON;
    }
    else if ((BoardVector[0][2] ==
                  BoardVector[1][2] &&
              BoardVector[1][2] ==
                  BoardVector[2][2]) &&
             (BoardVector[0][2] == Player1Symbol &&
              BoardVector[1][2] == Player1Symbol))
    {
        Winner = X_PLAYER_WON;
    }
    else if ((BoardVector[0][0] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][2]) &&
             (BoardVector[0][0] == Player1Symbol &&
              BoardVector[1][1] == Player1Symbol &&
              BoardVector[2][2] == Player1Symbol))
    {
        Winner = X_PLAYER_WON;
    }
    else if ((BoardVector[0][2] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][0]) &&
             (BoardVector[0][2] == Player1Symbol &&
              BoardVector[1][1] == Player1Symbol &&
              BoardVector[2][0] == Player1Symbol))
    {
        Winner = X_PLAYER_WON;
    }
    else if ((BoardVector[0][0] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][2]) &&
             (BoardVector[0][0] == Player2Symbol &&
              BoardVector[1][1] == Player2Symbol &&
              BoardVector[2][2] == Player2Symbol))
    {
        Winner = O_PLAYER_WON;
    }
    else if ((BoardVector[0][2] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][0]) &&
             (BoardVector[0][2] == Player2Symbol &&
              BoardVector[1][1] == Player2Symbol &&
              BoardVector[2][0] == Player2Symbol))
    {
        Winner = O_PLAYER_WON;
    }
    else if ((BoardVector[0][0] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][2]) &&
             (BoardVector[0][0] == Player2Symbol && BoardVector[1][1] == Player2Symbol && BoardVector[2][2] == Player2Symbol))
    {
        Winner = O_PLAYER_WON;
    }
    else if ((BoardVector[0][0] ==
                  BoardVector[1][0] &&
              BoardVector[1][0] ==
                  BoardVector[2][0]) &&
             (BoardVector[0][0] == Player2Symbol && BoardVector[1][0] == Player2Symbol && BoardVector[2][0] == Player2Symbol))
    {
        Winner = O_PLAYER_WON;
    }
    else if ((BoardVector[0][1] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][1]) &&
             (BoardVector[0][1] == Player2Symbol && BoardVector[1][1] == Player2Symbol && BoardVector[2][1] == Player2Symbol))
    {
        Winner = O_PLAYER_WON;
    }
    else if ((BoardVector[0][2] ==
                  BoardVector[1][2] &&
              BoardVector[1][2] ==
                  BoardVector[2][2]) &&
             (BoardVector[0][2] == Player2Symbol && BoardVector[1][2] == Player2Symbol && BoardVector[2][2] == Player2Symbol))
    {
        Winner = O_PLAYER_WON;
    }
    else if ((BoardVector[0][0] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][2]) &&
             (BoardVector[0][0] == Player2Symbol && BoardVector[1][1] == Player2Symbol && BoardVector[2][2] == Player2Symbol))
    {
        Winner = O_PLAYER_WON;
    }
    else if ((BoardVector[0][2] ==
                  BoardVector[1][1] &&
              BoardVector[1][1] ==
                  BoardVector[2][0]) &&
             (BoardVector[0][2] == Player2Symbol && BoardVector[1][1] == Player2Symbol && BoardVector[2][0] == Player2Symbol))
    {
        Winner = O_PLAYER_WON;
    }


    if (Winner == O_PLAYER_WON) {
        cout << PlayerOName << "Won! :D" << endl;
    } else {
        cout << PlayerXName << "Won! :D" << endl;
    }
    exit(1);
}
int CheckForWin()
{
    if (BoardVector[0][0] == BoardVector[0][1] && BoardVector[0][1] == BoardVector[0][2])
    {
        return 1;
    }
    else if (BoardVector[1][0] == BoardVector[1][1] && BoardVector[1][1] == BoardVector[1][2])
    {
        return 1;
    }
    else if (BoardVector[2][0] == BoardVector[2][1] && BoardVector[2][1] == BoardVector[2][2])
    {
        return 1;
    }
    else if (BoardVector[0][0] == BoardVector[1][0] && BoardVector[1][0] == BoardVector[2][0])
    {
        return 1;
    }
    else if (BoardVector[0][1] == BoardVector[1][1] && BoardVector[1][1] == BoardVector[2][1])
    {
        return 1;
    }
    else if (BoardVector[0][2] == BoardVector[1][2] && BoardVector[1][2] == BoardVector[2][2])
    {
        return 1;
    }
    else if (
        BoardVector[0][0] != "1" && BoardVector[0][1] != "2" && BoardVector[0][2] != "3" && BoardVector[1][0] != "4" && BoardVector[1][1] != "5" && BoardVector[1][2] != "6" && BoardVector[2][0] != "7" && BoardVector[2][1] != "8" && BoardVector[2][2] != "9")
    {
        CheckWhoWon();
        return GAME_ENDED;
    }
    else
    {
        return STILL_PLAYING;
    }
}
void PrintTicTacBoard()
{
    cout << "PLAYER - 1 " + PlayerXName + " "
         << "[" << Player1Symbol << "]" << endl;
    cout << "PLAYER - 2 " + PlayerOName + " "
         << "[" << Player2Symbol << "]" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << BoardVector[0][0] << "  |  " << BoardVector[0][1] << "  |  " << BoardVector[0][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << BoardVector[1][0] << "  |  " << BoardVector[1][1] << "  |  " << BoardVector[1][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << BoardVector[2][0] << "  |  " << BoardVector[2][1] << "  |  " << BoardVector[2][2] << endl;
    cout << "     |     |     " << endl;
}

void PlayPosition(string positionToPlay)
{
    char CurrentPlayerSign = CurrentTurn == IS_X_TURN ? Player1Symbol : Player2Symbol;

    if (BoardVector[0][0] == "1" && BoardVector[0][0] == positionToPlay)
    {
        BoardVector[0][0] = CurrentPlayerSign;
    }
    else if (BoardVector[0][1] == "2" && BoardVector[0][1] == positionToPlay)
    {
        BoardVector[0][1] = CurrentPlayerSign;
    }
    else if (BoardVector[0][2] == "3" && BoardVector[0][2] == positionToPlay)
    {
        BoardVector[0][2] = CurrentPlayerSign;
    }
    else if (BoardVector[1][0] == "4" && BoardVector[1][0] == positionToPlay)
    {
        BoardVector[1][0] = CurrentPlayerSign;
    }
    else if (BoardVector[1][1] == "5" && BoardVector[1][1] == positionToPlay)
    {
        BoardVector[1][1] = CurrentPlayerSign;
    }
    else if (BoardVector[1][2] == "6" && BoardVector[1][2] == positionToPlay)
    {
        BoardVector[1][2] = CurrentPlayerSign;
    }
    else if (BoardVector[2][0] == "7" && BoardVector[2][0] == positionToPlay)
    {
        BoardVector[2][0] = CurrentPlayerSign;
    }
    else if (BoardVector[2][1] == "8" && BoardVector[2][1] == positionToPlay)
    {
        BoardVector[2][1] = CurrentPlayerSign;
    }
    else if (BoardVector[2][2] == "9" && BoardVector[2][2] == positionToPlay)
    {
        BoardVector[2][2] = CurrentPlayerSign;
    }

    CheckForWin();
}

void CaptureMovement()
{
    string currentMovementPosition;
    string currentPlayer;

    cout << "Do a movement on a empty position" << endl;
    cin >> currentMovementPosition;
    PlayPosition(currentMovementPosition);
}

void StartGame()
{
    do
    {
        if (CurrentTurn == IS_X_TURN)
        {
            cout << "Player " << PlayerXName << " Is your turn" << endl;
        }
        else
        {
            cout << "Player " << PlayerOName << " Is your turn" << endl;
        }
        CurrentTurn == IS_X_TURN ? CurrentTurn = IS_O_TURN : CurrentTurn = IS_X_TURN;
        CaptureMovement();
        PrintTicTacBoard();
    } while (CurrentGameStatus != GAME_ENDED);
}

int main()
{
    GetPlayersData();
    PrintTicTacBoard();
    StartGame();
    return EXIT_SUCCESS;
}