#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main(){
  
    srand(time(NULL));

    char playerChoice;
    int computerChoice;
    int playerScore = 0, computerScore = 0;
    string choices[] = {"Rock", "Paper", "Scissor"};
    int rounds;

    cout<<"----------Welcome to Rock, Paper, Scissor Game!----------"<<endl<<endl;
    cout<<"Enter total number of rounds: ";
    cin>>rounds;
	
	cout<<"Choose: \nR for Rock\nP for Paper\nS for Scissors\n";

    for (int i = 0; i < rounds; ++i) {
        cout<<"\nRound "<<i + 1<<" of "<<rounds<<endl;
        
        cout<<"\n";
       
        cout<<"Enter your choice: ";
        cin>>playerChoice;
        
        playerChoice = toupper(playerChoice);
        
        
        if (playerChoice != 'R' && playerChoice != 'P' && playerChoice != 'S') {
            cout<<"Invalid choice! Please choose R, P, or S."<<endl;
            --i; 
            continue;
        }
 
        computerChoice = rand() % 3;
        if(computerChoice==0){
        	cout<<"Computer Choice : R"<<endl;
		}
		else if(computerChoice==1){
        	cout<<"Computer Choice : P"<<endl;
		}
		else{
			cout<<"Computer Choice : S"<<endl;
		}

        
        if ((playerChoice == 'R' && computerChoice == 2) ||
            (playerChoice == 'P' && computerChoice == 0) ||
            (playerChoice == 'S' && computerChoice == 1)) {
            cout << "You win this round!" << endl;
            ++playerScore;
        }
        else if ((playerChoice == 'R' && computerChoice == 1) ||
                 (playerChoice == 'P' && computerChoice == 2) ||
                 (playerChoice == 'S' && computerChoice == 0)) {
            cout << "You lose this round!" << endl;
            ++computerScore;
        }
        else {
            cout << "This round is a tie!" << endl;
        }
    }

    
    cout<<"\n----Final Scores----"<<endl<<endl;
    cout<<"You: "<<playerScore<<endl;
    cout<<"Computer: "<<computerScore<<endl;

    if (playerScore > computerScore) {
        cout<<"Congratulations! You won the game!"<<endl;
    } 
    else if (computerScore > playerScore) {
        cout<<"Sorry! The computer won the game."<<endl;
    } 
    else {
        cout<<"The game is a tie!"<<endl;
    }

    return 0;
}

