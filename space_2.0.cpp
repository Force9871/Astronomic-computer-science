#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_color(const std::string& text) {
    // Generate random color (between 30 and 37)
    int color = rand() % 8 + 30;
    std::cout << "\033[1;" << color << "m" << text << "\033[0m\n";
}

int main() {
    int 
     int menu_option = 2
    while (menu_option !1) {
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
    double earthWeight;

    int planetChoice;

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
           std::cout << "              \n";
            std::cout << "             \n";
            std::cout << "Do you want to quit? (1) or do you want to insert another weight? (2)\n";
            std::cin >> menu_option;
            
            if (menu_option == 1) {
                return 0;
            }
    } 
    return 0;
}
