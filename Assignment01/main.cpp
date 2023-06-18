/*
Rachael Savage
CSC275 C++ 2
Prof Tony Hinton
6/17/23
*/

#include <iostream> //lib
#include <string>
#include "CategoryAnimal1.h" //custom class. It's like import modules in python
#include "CategoryAnimal2.h"
#include "CategoryAnimal3.h"

void intro();
void instruction();

int main() {
    // Introduction
    std::cout << "\n\n*******************************************************************************************************" << std::endl;
    std::cout << "                      WELCOME TO CREATURE DETECTIVE GAME" << std::endl;
    std::cout << "************************************************************************************************************\n" << std::endl;
    //call the intro func without func type, just the name
    intro();

    std::cout << "      \n========================= HERE IS HOW TO PLAY ==========================\n" << std::endl;
    instruction(); // call the instruction func name only

    //create a string var for user name
    std::string playerFullName;
    std::cout << "Please enter your full name to start the game: ";
    std::getline(std::cin, playerFullName); //accept user input using getline func to get a line of text
    //display the message text + the user name
    std::cout << "Welcome, " << playerFullName << "!\n" << std::endl;

    // Create an instance of ParentClassAnimal with a name
    ParentClassAnimal animal00("L"); 
    ParentClassAnimal animal11("P");
    ParentClassAnimal animal22("K");
    ParentClassAnimal animal33("O");
    ParentClassAnimal animal44("K");
    ParentClassAnimal animal55("S");

   
    std::cout << "\nLIST OF HINT FOR ANIMAL NAME\n" << std::endl;
    // Access the name using the Name() method
    std::cout << "Animal name: " << animal00.Name() << std::endl; 
    std::cout << "Animal name: " << animal11.Name() << std::endl;
    std::cout << "Animal name: " << animal22.Name() << std::endl;
    std::cout << "Animal name: " << animal33.Name() << std::endl;
    std::cout << "Animal name: " << animal44.Name() << std::endl;
    std::cout << "Animal name: " << animal55.Name() << std::endl;

    // Call the Talking() method to make the animal talk
    animal00.Talking(); 
    //animal00.Talking();
    //animal00.Talking();
    //animal00.Talking();


    std::cout << "\n" << std::endl;
    // Create animal objects
    //CategoryAnimal1 mammal01("\nTiger\n");
    CategoryAnimal1 animal1("Lion", "I'm the king of jungle", "I'm a powerful predator", "cat is my relative");
    CategoryAnimal2 animal2("Penguin", "I have wings but cannot fly", "I walk waddiling", "I love winter");
    CategoryAnimal3 animal3("Koala", "I come from Australia", "I have cuddly appearance", "I have big ears");
    CategoryAnimal1 animal4("Octopus", "Ocean is my home", "I can change my color and shape", "I'm pretty smart");
    CategoryAnimal2 animal5("Kangaroo", "I can hop", "I have pouch", "Australia");
    CategoryAnimal3 animal6("Stone crab", "I belong to crustacean cat.", "my name relates to rock", "I have exoskeleton");

    //mamal action
    //mammal01.makeSound("\ngruuuuhhhh\n");
    // create vars for user to play again and set the guess score = 0 to count later
    bool playAgain = true;
    int correctGuesses = 0;
    int incorrectGuesses = 0;
    //game loop to display animal names that allow user to choose
    while (playAgain) {
        std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "          \nTYPE IN THE NUMBER TO GUESS (1-6):\n" << std::endl;
        std::cout << "\nType the animal name with the first capital letter\n" << std::endl;
        std::cout << "1. Animal1" << std::endl;
        std::cout << "2. Animal2" << std::endl;
        std::cout << "3. Animal3" << std::endl;
        std::cout << "4. Animal4" << std::endl;
        std::cout << "5. Animal5" << std::endl;
        std::cout << "6. Animal6" << std::endl;
        std::cout << "\n" << std::endl;
        //create var choice to accept user input
        int choice;
        std::cin >> choice;
        /*
        The first line of code is a pointer variable named animal for the ParentClassAnimal*
        and set it = the value nullptr 
        This pointer will be used to point to an instance .
        
        */
        ParentClassAnimal* animal = nullptr;
        std::string animalHint; //string var
        std::string animalCorrectDialog; //string variable to display a message when user guess correct
        std::string animalIncorrectDialog;//store message incorrect guess

        //use switch statement for 6 animal options
        switch (choice) {
        case 1:
            animal = &animal1; //assigns the address of the animal1 object categoryAnimal1
            animalHint = "Hint: This animal is the king of the jungle, relates to cat, and a powerful predator.";
            animalCorrectDialog = "Animal1 says: Hooray! You guessed my name right!";
            animalIncorrectDialog = "Animal1 says: Oops! That's not my name.";
            break; //terminates the execution of the current case block and exits the switch statement.
        case 2:
            animal = &animal2;
            animalHint = "Hint: This animal loves cold environment, waddling walking, and have wings but cannot fly.";
            animalCorrectDialog = "Animal2 says: That's correct! Good job!";
            animalIncorrectDialog = "Animal2 says: Nope, that's not my name.";
            break;
        case 3:
            animal = &animal3;
            animalHint = "Hint: This animal is native to Australia, have cute ears, and furry cuddle appearance.";
            animalCorrectDialog = "Animal3 says: You got it! Well done!";
            animalIncorrectDialog = "Animal3 says: Oh no, that's not my name.";
            break;
        case 4:
            animal = &animal4;
            animalHint = "Hint: This animal is a very smart ocean creature with the ability to change shape and color.";
            animalCorrectDialog = "Animal4 says: Yay! You guessed my name correctly!";
            animalIncorrectDialog = "Animal4 says: Oops! That's not my name.";
            break;
        case 5:
            animal = &animal5;
            animalHint = "Hint: This animal is a iconic of Australia, can hop very fast, and keep their baby in their pouch.";
            animalCorrectDialog = "Animal5 says: That's it! You guessed my name!";
            animalIncorrectDialog = "Animal5 says: Nope, that's not my name.";
            break;
        case 6:
            animal = &animal6;
            animalHint = "Hint: This animal is a type of crustacean, with exoskeleton, and the name relates to rock";
            animalCorrectDialog = "Animal6 says: Congratulations! You got my name right!";
            animalIncorrectDialog = "Animal6 says: Oh no, that's not my name.";
            break;
        default:
            std::cout << "Invalid choice. Try again." << std::endl; //handle errors
            continue;
        }

        std::cout << animalHint << std::endl; //display hint

        std::cout << "Can you guess who am I? ";
        std::string guess; //var to store user guess input
        std::cin.ignore(); //discards any remaining characters in the input buffer.
        std::getline(std::cin, guess); //reads a line of text from the user's input and stores it in the guess var

        //use if statement to check uer guess and comepare
        if (guess == animal->Name()) {
            //calls the UpdateScore() function on the animal object and increases its score by 1
            animal->UpdateScore(1);
            std::cout << animalCorrectDialog << std::endl;//displays a message stored in the animalCorrectDialog
            correctGuesses++; //incre the counter for correct guesses by 1
        }
        else {
            std::cout << animalIncorrectDialog << std::endl;
            incorrectGuesses++; //increments the counter for incorrect guesses by 1.
        }
        //displays the current score of the animal after the guess has been evaluated and display on screne
        std::cout << "Current score: " << animal->GetScore() << std::endl;

        //The code block below allows user to play gain after each guess
        std::cout << "Do you want to play again? (y/n): ";
        char playAgainChoice;
        std::cin >> playAgainChoice;

        playAgain = (playAgainChoice == 'y' || playAgainChoice == 'Y'); //handle capitale/lowercase letter input
    }

    // display a Game summary
    std::cout << "\n-----------------------------------------------------------------------------------------------\n" << std::endl;
    std::cout << "\t\tHERE IS THE SUMMARY OF YOUR GAME\n" << std::endl;
    std::cout << "Player Name: " << playerFullName << std::endl;
    std::cout << "Correct guesses: " << correctGuesses << std::endl; //display the sum score
    std::cout << "Incorrect guesses: " << incorrectGuesses << std::endl;

    return 0;
}

//move the func prototype outside of main and put in{} for the body to store lengthy text
//to display the func, must call its name (without func typ void) in the int main func
void intro() {
    std::cout << "Welcome to the amazing world of Creature Sleuths! " << std::endl;
    std::cout << "In this game, your mission is to guess the names of different animals based on the clues provided. " << std::endl;
    std::cout << "Pay close attention to the hints." << std::endl;
    std::cout << "Use your knowledge and intuition to solve the animal mysteries." << std::endl;
    std::cout << "Are you ready to embark on an exciting adventure where you become a detective of the animal kingdom?" << std::endl;
    std::cout << "Read the game rules carefully before you proceed" << std::endl;
    
}
//move the func prototype outside of main and put in{} for the body to store lengthy text
// to display the func, must call its name(without func typ void) in the int main func
void instruction() {
    std::cout << "First, you will be presented with a list of animals to choose from." << std::endl;
    std::cout << "After selected the animal, it will display 3 hints to narrow down possibilities." << std::endl;
    std::cout << "Once you have chosen an animal to guess, type in its name and hit enter." << std::endl;
    std::cout << "If your guess is correct, you'll earn points and a celebration from the animal itself!" << std::endl;
    std::cout << "But if your guess is incorrect, don't worry! Animals are friendly and will encourage you to keep trying." << std::endl;
    std::cout << "The more you play, the more points you'll earn.\n" << std::endl;
    std::cout << "So, are you ready to become a true Creature Sleuth?" << std::endl;
    std::cout << "Put on your detective hat to sharpen your guessing skills" << std:: endl;
    std::cout << "Now let the adventure begin!\n\n" << std::endl;
    std::cout << "" << std::endl;

}