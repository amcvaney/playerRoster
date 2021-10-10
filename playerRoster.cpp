
// Author : Abigayle McVaney
// Description: Take structured array data and display in different formats.


#include <iostream>
#include <iomanip>

using namespace std;

//structure for the player data
struct player
{
    int number;
    string name;
    int points;
};


//prototypes for the program (defined in later code)
int pointTotal(player roster[], int );
int mostPoints(player roster[], int );
void TABLE(player roster[], int );
void sortTable(player roster[], int);

int main()
{
    //SIZE is the size of the array
    const int SIZE = 11;
    //Returned variable from the pointTotal function
    int total;
    //Returned variable from the mostPoints function
    int mostP;
    
    //Declaring the size of the array
    player roster[SIZE];
    
    //Array data
    roster[0] = {7, "Cristiano Ronaldo", 31};
    roster[1] = {10, "Wayne Rooney", 37};
    roster[2] = {17, "Neymar", 29};
    roster[3] = {8, "Andres Iniesta", 32};
    roster[4] = {19, "Robin van Persie", 20};
    roster[5] = {10, "Linonel Messi", 43};
    roster[6] = {6, "Xavi Hernandez", 36};
    roster[7] = {10, "Mesut Ozil", 38};
    roster[8] = {10, "Didier Drogba", 35};
    roster[9] = {9, "Fernando Torres", 29};
    roster[10] = {10, "Kaka", 17};


    
    cout << "Team of F C B" << endl;
    cout <<endl;
    cout << "The Players of the team are:" << endl;
    cout << endl;
    
    //calling the TABLE function
    TABLE(roster, SIZE);
    cout << endl;
    
    //Returned variable from function
    total = pointTotal(roster, SIZE);
    
    cout << "Total Points earned by the team is " << total << endl;
    cout << endl;
    
    //Returned variable from function
    mostP = mostPoints(roster, SIZE);
    
    cout << "The Name and the Number of the player who has ";
    cout << "scored the most points : " << endl;
    cout << endl;
    cout << "Name of the player is : \t";
    cout << roster[mostP].name << endl;
    cout << "His Number is : " << roster[mostP].number << endl;
    cout << endl;
    cout << endl;
    cout << "The Sorted Records are" << endl;
    cout << endl;
    
    //Call The function sortTable
    sortTable(roster, SIZE);
    TABLE(roster, SIZE);
    
    cout << endl;
    cout << endl;
    cout << "Prepared by Abigayle McVaney" << endl;
    cout << "F C B - 2018" << endl;
    
    cout<<endl;
    cout<<endl;
    return 0;
}

//Function for the most points by which player
int mostPoints(player roster[], int SIZE)
{   int highest = roster[0].points;
    int mostP = 0;
    for(int i=0; i< SIZE; i++)
    {
        if(roster[i].points > highest)
        {   highest = roster[i].points;
            mostP = i;
        }
    }
return mostP;
}

//Function that generates the total points from players
int pointTotal(player roster[], int SIZE)
{
    int total=0;
    
    for(int i=0; i < SIZE; i++)
    {
        total += roster[i].points;
    }
return total;
}

//Function to generate the table held in the array
void TABLE(player roster[], int SIZE)
{
    cout << "Player  Number          Player Name           Points Scored";
    cout << endl;
    cout << endl;
    for(int i =0; i < SIZE; i++)
    {cout <<"\t\t"<< setw(15) << left << roster[i].number << setw(30);
     cout << left<< roster[i].name;
     cout << left <<roster[i].points << endl;
    }
}

//Function to generate the sorted table
void sortTable(player roster[], int SIZE)
{
  player temp;

  for(int i = 0; i < SIZE; i++)
    for(int j = 0 ; j < SIZE ; j++)
     if( roster[i].points > roster[j].points)
    { temp = roster[i];
      roster[i] = roster[j];
      roster[j] = temp;
    }
}


