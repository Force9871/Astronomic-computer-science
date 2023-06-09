#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
double earthWeight;
int planetChoice;
int planetChoice_2;
int age;
int menu_option = 3;
void calc_weight();
void calc_age();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void print_color(const std::string& text) {
    // Generate random color (between 31 and 37)
    int color = rand() % 7 + 31;
    std::cout << "\033[1;" << color << "m" << text << "\033[0m\n";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void calc_weight() {
     srand(time(0));  // Seed the random number generator

    print_color("  _________                                          .__       .__     __   ");
    print_color(" /   _____/__________    ____  ____   __  _  __ ____ |__| ____ |  |___/  |_ ");
    print_color(" \\_____  \\____ \\__  \\ _/ ___\\/ __ \\  \\ \\/ \\/ // __ \\|  |/ ___\\|  |  \\   __\\");
    print_color(" /        \\  |_> > __ \\\\  \\__\\  ___/   \\     /\\  ___/|  / /_/  >   Y  \\  |  ");
    print_color("/_______  /   __(____  /\\___  >___  >   \\/\\_/  \\___  >__\\___  /|___|  /__|  ");
    print_color("        \\/|__|       \\/     \\/    \\/               \\/  /_____/      \\/      ");
    print_color("                        __               __                                 ");
    print_color("_____________  ____    |__| ____   _____/  |_                               ");
    print_color("\\____ \\_  __ \\/  _ \\   |  |/ __ \\_/ ___\\   __\\                              ");
    print_color("|  |_> >  | \\(  <_> )  |  \\  ___/\\  \\___|  |                                ");
    print_color("|   __/|__|   \\____/\\__|  |\\___  >\\___  >__|                                ");
    print_color("|__|               \\______|    \\/     \\/                                    ");
    print_color("                                                                            ");
    print_color("                                                                            ");
    

    

    print_color("What is your weight on earth?");
    std::cin >> earthWeight;

    print_color("Planet destination:");
    print_color("W == weight");
    print_color("1 = Earth, W x 1");
    print_color("2 = Mercury, W x 0.38");
    print_color("3 = Venus, W x 0.91");
    print_color("4 = Mars, W x 0.38");
    print_color("5 = Jupiter, W x 2.34");
    print_color("6 = Saturn, W x 1.06");
    print_color("7 = Uranus, W x 0.92");
    print_color("8 = Neptune, W x 1.19");

    std::cin >> planetChoice;

    switch (planetChoice) {
        case 2 :
            print_color("Your weight on Mercury would be " + std::to_string(earthWeight * 0.38) + " kilos");
            break;
        case 3 :
            print_color("Your weight on Venus would be " + std::to_string(earthWeight * 0.91) + " kilos");
            break;
        case 4 :
            print_color("Your weight on Mars would be " + std::to_string(earthWeight * 0.38) + " kilos");
            break;
        case 5 :
            print_color("Your weight on Jupiter would be " + std::to_string(earthWeight * 2.34) + " kilos");
            break;
        case 6 :
            print_color("Your weight on Saturn would be " + std::to_string(earthWeight * 1.06) + " kilos");
            break;
        case 7 :
            print_color("Your weight on Uranus would be " + std::to_string(earthWeight * 0.92) + " kilos");
            break;
        case 8 :
            print_color("Your weight on Neptune would be " + std::to_string(earthWeight * 1.19) + " kilos");
            break;
        default :
            print_color("Unknown");
            break;
          
    } 
     std::cout << "              \n";
            std::cout << "             \n";
            print_color("Do you want to quit? (1), do you want to insert another weight? (2) or do you want to enter a new age value (4)");
            std::cin >> menu_option;
            
            if (menu_option == 1) {
                exit(0);
} else if (menu_option == 2) {
    system ("clear");
    calc_weight();
} else {
    system("clear");
    calc_age();
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void calc_age() {
    srand(time(0));  // Seed the random number generator

   print_color("  _________                                          .__       .__     __   ");
   print_color(" /   _____/__________    ____  ____   __  _  __ ____ |__| ____ |  |___/  |_ ");
   print_color(" \\_____  \\____ \\__  \\ _/ ___\\/ __ \\  \\ \\/ \\/ // __ \\|  |/ ___\\|  |  \\   __\\");
   print_color(" /        \\  |_> > __ \\\\  \\__\\  ___/   \\     /\\  ___/|  / /_/  >   Y  \\  |  ");
   print_color("/_______  /   __(____  /\\___  >___  >   \\/\\_/  \\___  >__\\___  /|___|  /__|  ");
   print_color("        \\/|__|       \\/     \\/    \\/               \\/  /_____/      \\/      ");
   print_color("                        __               __                                 ");
   print_color("_____________  ____    |__| ____   _____/  |_                               ");
   print_color("\\____ \\_  __ \\/  _ \\   |  |/ __ \\_/ ___\\   __\\                              ");
   print_color("|  |_> >  | \\(  <_> )  |  \\  ___/\\  \\___|  |                                ");
   print_color("|   __/|__|   \\____/\\__|  |\\___  >\\___  >__|                                ");
   print_color("|__|               \\______|    \\/     \\/                                    ");
   print_color("                                                                            ");
   print_color("                                                                            ");
   
    print_color("What is your age?");
    std::cin >> age;

print_color("1 = Earth, A x 1");
print_color("2 = Mercury, A x 4.15");
print_color("3 = Venus, A x 1.61");
print_color("4 = Mars, A x 0.53");
print_color("5 = Jupiter, A x 0.08");
print_color("6 = Saturn, A x 0.03");
print_color("7 = Uranus, A x 0.01");
print_color("8 = Neptune, A x 0.006");

    std::cin >> planetChoice_2;

    switch (planetChoice_2) {
        case 2 :
            print_color("Your age if you were born on Mercury would be " + std::to_string(age * 4.15) + " years");
            break;
        case 3 :
            print_color("Your age if you were born on Venus would be " + std::to_string(age * 1.61) + " years");
            break;
        case 4 :
            print_color("Your age if you were born on Mars would be " + std::to_string(age * 0.53) + " years");
            break;
        case 5 :
            print_color("Your age if you were born on Jupiter would be " + std::to_string(age * 0.08) + " years");
            break;
        case 6 :
            print_color("Your age if you were born on Saturn would be " + std::to_string(age * 0.03) + " years");
            break;
        case 7 :
            print_color("Your age if were born on Uranus would be " + std::to_string(age * 0.01) + " years");
            break;
        case 8 :
            print_color("Your age if you were born on Neptune would be " + std::to_string(age * 0.006) + " years");
            break;
        default :
            print_color("Unknown");
            break;
    }
            std::cout << "              \n";
            std::cout << "             \n";
            print_color("Do you want to quit? (1), do you want to insert another weight? (2) or do you want to enter a new age value (4)");
            std::cin >> menu_option;
            
            if (menu_option == 1) {
                exit(0);
} else if (menu_option == 2) {
    system ("clear");
    calc_weight();
} else {
    system("clear");
    calc_age();
}
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


}
int main() {
    srand(time(0));  // Seed the random number generator

   print_color("  _________                                          .__       .__     __   ");
   print_color(" /   _____/__________    ____  ____   __  _  __ ____ |__| ____ |  |___/  |_ ");
   print_color(" \\_____  \\____ \\__  \\ _/ ___\\/ __ \\  \\ \\/ \\/ // __ \\|  |/ ___\\|  |  \\   __\\");
   print_color(" /        \\  |_> > __ \\\\  \\__\\  ___/   \\     /\\  ___/|  / /_/  >   Y  \\  |  ");
   print_color("/_______  /   __(____  /\\___  >___  >   \\/\\_/  \\___  >__\\___  /|___|  /__|  ");
   print_color("        \\/|__|       \\/     \\/    \\/               \\/  /_____/      \\/      ");
   print_color("                        __               __                                 ");
   print_color("_____________  ____    |__| ____   _____/  |_                               ");
   print_color("\\____ \\_  __ \\/  _ \\   |  |/ __ \\_/ ___\\   __\\                              ");
   print_color("|  |_> >  | \\(  <_> )  |  \\  ___/\\  \\___|  |                                ");
   print_color("|   __/|__|   \\____/\\__|  |\\___  >\\___  >__|                                ");
   print_color("|__|               \\______|    \\/     \\/                                    ");
   print_color("                                                                            ");
   print_color("                                                                            ");
   
    if (menu_option == 3) {
        print_color("Do you want to exit? (1), enter a weight value? (2) or do you want to enter a age value?(4)");
        std::cin >> menu_option;
        if (menu_option == 2) {
            system("clear");
            calc_weight();
        } else if (menu_option == 4) {
            system("clear");
            calc_age();
        }
    }

}
