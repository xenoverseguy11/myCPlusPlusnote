#include <iostream>
#include <string_view>
#include <string>


std::string getChoice()
{
    std::string input;
    std::getline(std::cin, input);
    return input;
}


int getDamage(int damage, int& health)
{
    health = health - damage;
    return health;
}


void print(std::string_view message)
{
    std::cout << message;
}

void marineStory()
{
    int health{ 100 };
    print("\n");
    print("you are now a Marine! \n");
    print("\n");
    print("you were born in the new world right on sphinx village 17 years ago, with 100 health! \n");
    print("now you are 17 years old, and you successfuly want to become a Marine\n");
    print("so you tell your parents about it");
    print("the parents tell you to not, because its very risky \n");
    print("how would you respond? \n");
    print("\n");
    print("argue{ a }, agree{ y }, silently run away{ r } \n");
    std::string choice1{ getChoice() };
    if (choice1 == "a")
    {
        print("you argued with your parents, you told them being a marine means to save the world from pirates \n");
        print("but they tell you that working under a evil organization is very tedious \n");
        print("the father gets mad, and screams at you, you kept screaming back \n");
        print("your father is secretely a former pirate, he grabs the bat and kills you \n");
        print("he grabs your corpse and throws it away near the river \n");
        getDamage(100, health);
        std::cout << "your health became a tedious " << health << '\n';
        print("Bad Ending..... \n");
    }
    else if (choice1 == "y")
    {
        print("you badly agreed with your parents \n");
        print("your father tries to calm you because you are very sad \n");
        print("your father gets you to engineering instead \n");
        print("Normal Ending.... \n");
    }
    else if (choice1 == "r")
    {
        print("you stopped talking with them, now your parents are confused \n");
        print("its night time, you decide to run away and achieve your dream \n");
        print("you know if you ran away with nothing you wont survive \n");
        print("so you would have to bring food, drinks, clothes, and a map with you \n");
        print("you go to the kitchen and steal meat, fruits, vegetables, water, beer, and you go to the wardrobe to steal clothes \n");
        print("you silently run away, you have every core thing needed to survive \n");
        print("on your way, you meet little whitebeard \n");
        print("he offers you to be his right hand man of his pirate crew \n ");
        print("however you tell him no, he is an angry kid \n");
        print("he threatens to attack you \n");
        print("so what will you do? \n");
        print("1)attack{k}, 2)leave him alone{any key} \n");
        std::string choice2{ getChoice() };
        if (choice2 == "k")
        {
            print("you attacked little wb with your bare hands \n");
            print("however whitebeard instantly attacks you. he is of a unknown race, he attacked you so hard, your health got down to \n");
            std::cout << getDamage(90, health);
            print("you instantly got injured, you decide to stop your dream \n");
            print("you grab a rock and just hit it hardly with your head \n");
            print("you got hurt badly, now you DIED \n");
            print("WASTED ENDING.... \n");

        }
        else
        {
            print("you left him alone \n");
            print("however there isnt a marine base so you would want to apply a position for the marines \n");
            print("so you decide to build a boat \n");
            print("what materials would you use? \n");
            print("stone{s}, wood{w}\n");
            std::string choicee{ getChoice() };
            if (choicee == "s")
            {
                print("you tried to build a boat from stone, but it didnt click \n");
                print("you tried using cement but it didnt work well and made the boat stiffy piece of brick \n");
                print("eventually you hopped on it, but the boat kept rolling and rolling until you fell accidently and drowned \n");
                std::cout << "your health went down from 100 to " << getDamage(100, health);
                print("you eventually died \n");
                print("WORST ENDING .... \n");
            }
            else
            {
                print("you gathered up wood from the trees you chopped \n");
                print("you assembled the nicely, now you hop on it and embark on your adventure! \n");
                print("after 10 hours of exhausting trip with the handmade boat, you find the nearest marine hq \n");
                print("once you landed on it, you went to the marines and begged them for work \n");
                print("the marines looked at you, weak, stick, lanky frame \n");
                print("they didnt accept you, and told you you'd only work as a choreboy \n");
                print("you got furious, what would you do? \n");
                print("attack{a} or beg{any key} \n");
                std::string choicep{ getChoice() };
                if (choicep == "a")
                {
                    print("you tried to attack them \n");
                    print("but you are messing up with a nuke while being a baby \n");
                    print("marines, being under a evil organization, immediately killed a mouse like you \n");
                    print("you died with no remaining health \n");
                    print("worst ending .... \n");
                }


            }


        }

    }
}


void printAdventureMSG()
{
    print("Welcome to the One Piece text adventure! \n");
    print("Pick your class \n");
    print("-Marine: type 'm' \n");
    print("-Pirate: type 'p' \n");
    std::string choice = getChoice();
    if (choice == "m" || choice == "M")
    {
        marineStory();
    }
}





int main()
{

    printAdventureMSG();

    return 0;
}
