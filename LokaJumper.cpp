// Project: Loka Jumper
// Author:  Murali Krishna Magesan
// Date:    15 September 2022

//            _____           _______                   _____                    _____                             _____                    _____                    _____                    _____                    _____                    _____
//           /\    \         /::\    \                 /\    \                  /\    \                           /\    \                  /\    \                  /\    \                  /\    \                  /\    \                  /\    \
//          /::\____\       /::::\    \               /::\____\                /::\    \                         /::\    \                /::\____\                /::\____\                /::\    \                /::\    \                /::\    \
//         /:::/    /      /::::::\    \             /:::/    /               /::::\    \                        \:::\    \              /:::/    /               /::::|   |               /::::\    \              /::::\    \              /::::\    \
//        /:::/    /      /::::::::\    \           /:::/    /               /::::::\    \                        \:::\    \            /:::/    /               /:::::|   |              /::::::\    \            /::::::\    \            /::::::\    \
//       /:::/    /      /:::/~~\:::\    \         /:::/    /               /:::/\:::\    \                        \:::\    \          /:::/    /               /::::::|   |             /:::/\:::\    \          /:::/\:::\    \          /:::/\:::\    \
//      /:::/    /      /:::/    \:::\    \       /:::/____/               /:::/__\:::\    \                        \:::\    \        /:::/    /               /:::/|::|   |            /:::/__\:::\    \        /:::/__\:::\    \        /:::/__\:::\    \
//     /:::/    /      /:::/    / \:::\    \     /::::\    \              /::::\   \:::\    \                       /::::\    \      /:::/    /               /:::/ |::|   |           /::::\   \:::\    \      /::::\   \:::\    \      /::::\   \:::\    \
//    /:::/    /      /:::/____/   \:::\____\   /::::::\____\________    /::::::\   \:::\    \             _____   /::::::\    \    /:::/    /      _____    /:::/  |::|___|______    /::::::\   \:::\    \    /::::::\   \:::\    \    /::::::\   \:::\    \
//   /:::/    /      |:::|    |     |:::|    | /:::/\:::::::::::\    \  /:::/\:::\   \:::\    \           /\    \ /:::/\:::\    \  /:::/____/      /\    \  /:::/   |::::::::\    \  /:::/\:::\   \:::\____\  /:::/\:::\   \:::\    \  /:::/\:::\   \:::\____\
//  /:::/____/       |:::|____|     |:::|    |/:::/  |:::::::::::\____\/:::/  \:::\   \:::\____\         /::\    /:::/  \:::\____\|:::|    /      /::\____\/:::/    |:::::::::\____\/:::/  \:::\   \:::|    |/:::/__\:::\   \:::\____\/:::/  \:::\   \:::|    |
//  \:::\    \        \:::\    \   /:::/    / \::/   |::|~~~|~~~~~     \::/    \:::\  /:::/    /         \:::\  /:::/    \::/    /|:::|____\     /:::/    /\::/    / ~~~~~/:::/    /\::/    \:::\  /:::|____|\:::\   \:::\   \::/    /\::/   |::::\  /:::|____|
//   \:::\    \        \:::\    \ /:::/    /   \/____|::|   |           \/____/ \:::\/:::/    /           \:::\/:::/    / \/____/  \:::\    \   /:::/    /  \/____/      /:::/    /  \/_____/\:::\/:::/    /  \:::\   \:::\   \/____/  \/____|:::::\/:::/    /
//    \:::\    \        \:::\    /:::/    /          |::|   |                    \::::::/    /             \::::::/    /            \:::\    \ /:::/    /               /:::/    /            \::::::/    /    \:::\   \:::\    \            |:::::::::/    /
//     \:::\    \        \:::\__/:::/    /           |::|   |                     \::::/    /               \::::/    /              \:::\    /:::/    /               /:::/    /              \::::/    /      \:::\   \:::\____\           |::|\::::/    /
//      \:::\    \        \::::::::/    /            |::|   |                     /:::/    /                 \::/    /                \:::\__/:::/    /               /:::/    /                \::/____/        \:::\   \::/    /           |::| \::/____/
//       \:::\    \        \::::::/    /             |::|   |                    /:::/    /                   \/____/                  \::::::::/    /               /:::/    /                  ~~               \:::\   \/____/            |::|  ~|
//        \:::\    \        \::::/    /              |::|   |                   /:::/    /                                              \::::::/    /               /:::/    /                                     \:::\    \                |::|   |
//         \:::\____\        \::/____/               \::|   |                  /:::/    /                                                \::::/    /               /:::/    /                                       \:::\____\               \::|   |
//          \::/    /         ~~                      \:|   |                  \::/    /                                                  \::/____/                \::/    /                                         \::/    /                \:|   |
//           \/____/                                   \|___|                   \/____/                                                    ~~                       \/____/                                           \/____/                  \|___|

#include <iostream> // Preprocessor Directive
#include <sstream>
#include <string>
#include <ctime>
using namespace std;



/******************************************************************************
 *                           Local Data Types
 ******************************************************************************/
enum LOKAS
{
    PATALA,
    RASATALA,
    MAHATALA,
    TALATALA,
    SUTALA_LOKA,
    VITALA_LOKA,
    ATALA_LOKA,
    BHU_LOKA,
    BHUVAR_LOKA,
    SVAR_LOKA,
    MAHAR_LOKA,
    JANA_LOKA,
    TAPA_LOKA,
    SATYA_LOKA,
    BHU_LOKA_TRANSITION,
    MAHAKAILASA,
    MAX_NUM_LOKAS
};

/******************************************************************************
 *                           Local Define
 ******************************************************************************/
#define LokaStringArray =   { "Patala" , "Rasatala"   , "Mahatala", "Talatala" , "Sutala"  , "Vitala"  , "Atala"    ,    \
                              "Bhuloka", "Bhuvarloka" , "Svarloka", "Maharloka", "Janaloka", "Tapaloka", "Satyaloka",    \
                              "Bhuloka", "Mahakailasa"                                                                   \
                            }

/******************************************************************************
 *                            Global Functions
 ******************************************************************************/
void PrintGameStartupScreen()
{

    // Intro Image
    std:: cout << R"(
*********************************************************************************************************************************
*                                     __       _              __                                                                *
*                                    / /  ___ | | ____ _      \ \ _   _ _ __ ___  _ __   ___ _ __                               *
*                                   / /  / _ \| |/ / _` |      \ \ | | | '_ ` _ \| '_ \ / _ \ '__|                              *
*                                  / /__| (_) |   < (_| |   /\_/ / |_| | | | | | | |_) |  __/ |                                 *
*                                  \____/\___/|_|\_\__,_|   \___/ \__,_|_| |_| |_| .__/ \___|_|                                 *
*                                                                                                                               *
*********************************************************************************************************************************
                    )";

    // Print welcome messages to the terminal
    std::cout << "You are a Cosmic Being stuck in Patala Loka and looking to find a way back to Mahakailasa..." << std::endl; //An example of Expression Statement
    std::cout << "                      Using the initiation into the Universe of Numbers by SPH Sri Nithyananda Paramashivam," << std::endl;
    std::cout << "                        Ascend to Mahakailasa by solving the combination challenge on each Loka ...\n" << std::endl;
}

void PrintLokaIntro(int LokaIndex, string* LokaArray)
{
    if (LokaIndex == PATALA)
    {
        // Do Nothing
    }
    else if (LokaIndex == BHU_LOKA_TRANSITION)
    {
        // Print closing messages to the terminal
        std::cout <<"**********************************************************************************************************************************" << std::endl; //An example of Expression Statement
        std::cout <<"*                                           You are one step away from reaching Mahakailasa!                                     *" << std::endl; //An example of Expression Statement
        std::cout <<"*   With your human birth on Bhuloka, you now have the choice of Dharma, Adharma or going beyond both...What will you decide?    *" << std::endl;
        std::cout <<"*                                      If you want to reach Mahakailasa...you know what to do!                                   *" << std::endl;
        std::cout <<"**********************************************************************************************************************************" << std::endl;
    }
    else
    {
        std::cout << "You have reached " << LokaArray[LokaIndex] << ". To get one step closer to Mahakailasa, solve the combination challenge of " << LokaArray[LokaIndex] << std::endl;
    }
}

bool PlayGame(int LevelDifficulty)
{
    // Declare 3 number code
    const int CodeA = rand() % (3 + 1) + 1;        // An example of Declaration Statement
    const int CodeB = rand() % (3 + 1) + 1;
    const int CodeC = rand() % (3 + 1) + 1;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl; //An example of Expression Statement
    std::cout <<"There are 3 numbers in this loka" << std::endl; //An example of Expression Statement
    std::cout <<"The numbers add-up to: " << CodeSum << std::endl;
    std::cout <<"The numbers multiply to give: " << CodeProduct << std::endl;
    // std::cout <<"Enter the 3 numbers with a space in between each number, and when you are ready press Enter" << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        if (LevelDifficulty != BHU_LOKA_TRANSITION)
        {
            std::cout << "\n--------------------------You answered correctly, you may proceed on your cosmic journey!-----------------\n" << std::endl;
        }
        return true;
    }
    else
    {
        std::cout << "\nYou have answered incorrectly! You will need to take another janma starting from the previous Loka" << std::endl;
        std::cout << "Remember, Paramashiva will only test, but He will never deny." << std::endl;
        std::cout << "Vibrating with the Mahavakya of Om Nithyananda Paramashivoham, let us make our way to Mahakailasa!\n" << std::endl;

        return false;
    }
}

void PrintGameCompletionScreen()
{
    // Print closing messages to the terminal
    std::cout <<"**********************************************************************************************************************************************************" << std::endl; //An example of Expression Statement
    std::cout <<"*               CONGRATULATIONS! WITH YOUR WILL PERSISTENCE AND PARAMASHIVA'S GRACE YOU HAVE REACHED MAHAKAILASA TO MERGE WITH PARAMASHIVA               *" << std::endl; //An example of Expression Statement
    std::cout <<"*                                                      PRESS ANY KEY TO RECEIVE HIS DARSHAN!                                                             *" << std::endl;
    std::cout <<"**********************************************************************************************************************************************************" << std::endl;
    std::cin.get();

    // Intro Image
    std:: cout << R"(
                   .    ................ . .....      (((((((((((/ ##(((####(.      . ....,,,..................,,..,
                   .   .......,,,....  ....,....     /(((////////..*//////////.     ..............,,,,,,..........,,
                                     .........     ,*////////////,./////(///////.         ..............,,,,,,,,,...
                    ........................      ,*,,*****///(((..(((((((////****      ..................,,,,,,,,..
                       ........    .....      .  .,,,,**,.  ..////*/(/,.. ..,***,,,     ...................,,,,,....
                            .......... .     .,. .,*/*,**,**,,..////,.,****//***//* .,. .... ....,.................,
                    ...........         ..   .,,..,*/*.......,*,.((,*//,..,,,.,///*.,*,.............,,,,,,,,........
                  .........        .   ..    ..,..,/((((((((((/*,((*//((((((((((((/../.  ...  ...................,,,
                          .......   .. ...    .*,.,*((((((((((/**((/*(((((((((((((*.,.....,,.....,,...........,,,,..
                        .......     ...  ...   .,.,,/((((((((***((((**/#(((((((((/*,,..................,,,,,,,.....,
                 .......        .... ....  ....*.,.,*(((((((/***((((***/(((((((((/.*,....  .......... ..............
                        .. .....   ....... ...,,  ,.,////((((((/**,*///((/((((((/,  *,  ............,,.......,,,,,,,
                  .........  ............... .// ,/ .,*///(///,*,**,,,/(/(((((/*.(..// ..................,,,,,..,,,,
                 .           .......... ..... */(//. .,**////,,/*,,,/,,///(((/, ./(((/................,,......,,,,,,
                 ...  ..,,......*/,.  ........ *(/*    .,**////*,,,,*////(//*..  ,/(/ ...   .    ........,,,,,.,,,,,
                   .,  .. .****.  .........     //*  ..  .,****(//////////,....  ./(/ .   ....,,,,,.. .,,,,,........
                 ... .,,,..,,,,....,..               ...... .,**********..,,...           ....... ...,...,,.........
                .... ,,,,,.****.,*,...                 ......      .....,*,,,,.        ....... .....................
                 .., ,,.   */**. .*,,.            . ..             .  ..,,..               .........,,.........,,,,.
                ..,, .,,*,.,***,,,...      ...      ...... .      *           ....  .,    .......... ...... .,,,,...
                   .  .....,,,,.....     .... ...         ,,,,...*/......,,..    ..*..        .....,................
                       ....,,,,....    .,,..      ......         /(            .,. ................          .... ..
                          .,*,,.       ,,..            ..,,.....,//,..........,.      ........................ .   .
                  .   ... .****,   .. .,,,.      ..  .......    //(( .   ......,....  .*.,,,,,,,,,,,,...............
                 .. ...... ,*/*,  .., .,,,.  .    ...*.....,..*/(///(*...,.,.,,*,,,,. ...,,,,,,,,,,,,...............
                ........... ,,,,, ... ....    ..  .,(*.,,,,**,./(/((/.,.*,.,,,,,*/,.  .....,,,,,,,..................
                ............ .,,,.   .....      .///*,,,,**,,.*/(////*..,./,,,,,,**/,. .......,,,,,,,,,.............
                .............  ...,.....   .  ,((//,,,,,,(/**//(//(/////*/(*,,,,,..**/* ..,,......,,,,,.............
                ................        .....////,  .,,,,,*((/////(///////,,,,..    *///..,.......,.................
                 ...........................////,      .,,,,.///////(/*......   ..,,,////...,.......................
                 ..........................,/(//,.,.  ..   , .,(////(/  .   , . .,,,,////,.........................
                   .   ....................,/////,.,,,,... ... //////,     ..,,,,,,,//*//,.........................
                        ....................///////*...,,,,,,//////////,...,,,,,,,*/////,.......,,,.................
                          ...................,///////(//////////////(/(////////////*///,......,,,,,..............
                           ..................  .**/***********///////////////******/*.  ...,..,,,,.............
                            .................     ..,*******//*/***/**///*******,,.     ..,.,,,,.............
                               ..............     ... ....    .,*,.,,.     ........     ..,,,,............
                                            .     . ,. .   ....,,*****,,,,..    ....    ..,,...........
                                                  ......,,,......,,,,,,..,,,,... ..    ...........
                                                ...,,,,.,,,,,.,,,,**********,..,*..,,..  .
                                       ....  .....,,,,,,,,,,,...,...,,,,...,,,*,.**.,,.... .......
                                         ....,,,,,,,,,,,,,...**///**,..*,*,.  ...,,,,....
                                          .......,,,,,,,,,,,,,,,,,,,,,....,,......,........
                                               .........,,,,...  .,,,,*,.,,,..**.,,.....


                    )";
}


// bool isValidNumber(const std::string& input)
// {
//     std::istringstream iss(input);
//     double number;
//     char remaining;

//     // Attempt to extract a double from the input
//     if (!(iss >> number))
//     {
//         return false;
//     }

//     // Check if there is any remaining character after the number
//     if (iss >> remaining)
//     {
//         return false;
//     }

//     // Check if the number is within a valid range (optional)
//     // Modify the range as needed for your specific requirements
//     // if (number < 0 || number > 100) {
//     if (number < 0.0)
//     {
//         return false;
//     }

//     return true;
// }


// Main function introduces player to the story, initialises a few variables and prints out the sum and product to player.
int main()          // Main Function
{
    srand(time(NULL));      // Sets up new random number based on PC time

    int LokaIndex = PATALA;
    string Loka[MAX_NUM_LOKAS] LokaStringArray;

    string* LokaPtr = Loka;

    PrintGameStartupScreen();
    while (LokaIndex < (MAX_NUM_LOKAS - 1))    // Loop game until
    {
        PrintLokaIntro(LokaIndex, LokaPtr);
        bool bLevelComplete;

        bLevelComplete = PlayGame(LokaIndex);
        std::cin.clear();   // Clears any errors
        std::cin.ignore();  // Discards the buffer

        if (bLevelComplete)
        {
            LokaIndex++;  // Increase level difficulty
        }
        else
        {
            if (LokaIndex != PATALA)
            {
                LokaIndex--;
            }
            // LokaIndex = PATALA; // CHALLENGE MODE!
        }
    }

    PrintGameCompletionScreen();
    cin.get();

    return 0;       // Return Statement
}