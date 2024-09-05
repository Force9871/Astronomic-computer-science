#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int planet_type;
double earthWeight;
int planetChoice;
int planetChoice_2;
int age;
int menu_option = 3;
void calc_weight();
void calc_age();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void print_color(const std::string& text) {

    int color = rand() % 7 + 31;
    std::cout << "\033[1;" << color << "m" << text << "\033[0m\n";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void calc_weight() {
     srand(time(0));

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
    

    

    print_color("Enter the celestial body type: ");
    print_color("Celestial body type:");
    print_color("1 = Planets");
    print_color("2 = Moons");
    print_color("3 = Stars");
    print_color("4 = Dwarf planets");
    std::cin >> planet_type;

    // 1 == Planets
    // 2 == Moons
    // 3 == Stars
    // 4 == Dwarf planets
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (planet_type == 1) {
        system("clear");
        srand(time(0));  
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
        
        print_color("Enter your weight in kilograms on Earth: ");
        std::cin >> earthWeight;
        std::cout << "                          \n";
        print_color("Planet choice:");
        print_color("W == weight");
        std::cout << "                           \n";
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
            system ("clear");
            print_color("Your weight on Mercury would be " + std::to_string(earthWeight * 0.38) + " kilos");
            break;
            case 3 :
            system ("Clear");
            print_color("Your weight on Venus would be " + std::to_string(earthWeight * 0.91) + " kilos");
            break;
            case 4 :
            system("clear");
            print_color("Your weight on Mars would be " + std::to_string(earthWeight * 0.38) + " kilos");
            break;
            case 5 :
            system("clear");
            print_color("Your weight on Jupiter would be " + std::to_string(earthWeight * 2.34) + " kilos");
            break;
            case 6 :
            system("clear");
            print_color("Your weight on Saturn would be " + std::to_string(earthWeight * 1.06) + " kilos");
            break;
            case 7 :
            system("clear");
            print_color("Your weight on Uranus would be " + std::to_string(earthWeight * 0.92) + " kilos");
            break;
            case 8 :
            system("clear");
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
        } else if (menu_option == 4) {
            system("clear");
            calc_age();
        }  else if (menu_option != 1 && menu_option != 2 && menu_option != 4)  {
            system("clear");
            system("curl parrot.live");
        }
    }   
    else if (planet_type == 2) {
        srand(time(0)); 
        system("clear");

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
        

    

         print_color("Enter your weight in kilograms on Earth: ");
         std::cin >> earthWeight;
            std::cout << "                          \n";
            system("clear");

        print_color("Moon choice:");
        print_color("W == weight");
        std::cout << "                                         \n";
        print_color("1 = The Moon (Earth's natural satellite):  W * 0.17");
        print_color("2 = Europa (moon of Jupiter): W * 0.13");
        print_color("3 = Ganymede (moon of Jupiter): W * 0.15");
        print_color("4 = Titan (moon of Saturn): W x 0.14");
        print_color("5 = Enceladus (moon of Saturn): W x 2.34");
        print_color("6 = Triton (moon of Neptune): W x 0.08");
        print_color("7 = Io (moon of Jupiter): W x 0.18");
        print_color("8 = Callisto (moon of Jupiter): W x 1.19");
        print_color("9 = Ceres (dwarf planet in the asteroid belt): W * 0.027");

    
     ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        std::cin >> planetChoice;
        switch (planetChoice) {
            case 1 :
                system("clear");
                print_color("Your weight on the earth's moon would be " + std::to_string(earthWeight * 0.17) + " kilos");
                break;
            case 2 :
                system("clear");
                print_color("Your weight on Europa would be " + std::to_string(earthWeight * 0.13) + " kilos");
                break;
            case 3 :
                system("clear");
                print_color("Your weight on Ganymede would be " + std::to_string(earthWeight * 0.15) + " kilos");
                break;
            case 4 :
                system("clear");
                print_color("Your weight on Titan would be " + std::to_string(earthWeight * 0.14) + " kilos");
                break;
            case 5 :
                system("clear");
                print_color("Your weight on Enceladus would be " + std::to_string(earthWeight * 2.34) + " kilos");
                break;
            case 6 :
                system("clear");
                print_color("Your weight on Triton would be " + std::to_string(earthWeight * 0.08) + " kilos");
                break;
            case 7 :
                system("clear");
                print_color("Your weight on Io would be " + std::to_string(earthWeight * 0.18) + " kilos");
                break;
            case 8 :
                system("clear");
                print_color("Your weight on Callisto would be " + std::to_string(earthWeight * 1.19) + " kilos");
                break;
            case 9 :
                system("clear");
                print_color("Your weight on Ceres would be " + std::to_string(earthWeight * 0.027) + " kilos");
            default :
                print_color("Unknown moon number!");
                break;
        }

        std::cout << "              \n";
        std::cout << "             \n";
        print_color("Do you want to quit? (1), do you want to insert another weight? (2) or do you want to enter a new age value (4)");
        std::cin >> menu_option;
            
        if (menu_option == 1) {
            system("clear");
            exit(0);
        } else if (menu_option == 2) {
            system ("clear");
            calc_weight();
        } else if (menu_option == 4) {
            system("clear");
            calc_age();
        } else if (menu_option != 1 && menu_option != 2 && menu_option != 4)  {
            system("clear");
            system("curl parrot.live");
        }
    
    }




    if (planet_type == 3) {
        system("clear");
        srand(time(0));  
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
        

    

         print_color("Enter your weight in kilograms on Earth: ");
         std::cin >> earthWeight;
        std::cout << "                          \n";

        print_color("Star choice:");
        print_color("W == weight");
        std::cout << "                                         \n";
        print_color("1 = The Sun (our star): W * 27.9");
        print_color("2 = Sirius (the brightest star in the night sky): W * 2.02");
        print_color("3 = Alpha Centauri A (part of the closest star system to our solar system): W * 1.10");
        print_color("4 = Vega (one of the brightest stars in the northern hemisphere): W x 2.28");
        print_color("5 = Betelgeuse (a red supergiant in the constellation Orion): W x 1.14");
        print_color("6 = Proxima Centauri (the closest known star to our solar system): W x 0.15");
        std::cin >> planetChoice;
        
        switch (planetChoice) {
            case 1 :
                system("clear");
                print_color("Your weight on the star of Earth would be " + std::to_string(earthWeight * 27.9) + " kilos");
                break;
            case 2 :
                system("clear");
                print_color("Your weight on Sirius would be " + std::to_string(earthWeight * 2.02) + " kilos");
                break;
            case 3 :
                system("clear");
                print_color("Your weight on Alpha Centauri A would be " + std::to_string(earthWeight * 1.10) + " kilos");
                break;
            case 4 :
                system("clear");
                print_color("Your weight on Vega would be " + std::to_string(earthWeight * 2.28) + " kilos");
                break;
            case 5 :
                system("clear");
                print_color("Your weight on Betelgeuse would be " + std::to_string(earthWeight * 1.14) + " kilos");
                break;
            case 6 :
                system("clear");
                print_color("Your weight on Proxima Centauri would be " + std::to_string(earthWeight * 0.15) + " kilos");
                break;
            default :
                print_color("Unkown star number!");
                break;
        }
        std::cout << "              \n";
                std::cout << "             \n";
                print_color("Do you want to quit? (1), do you want to insert another weight? (2) or do you want to enter a new age value (4)");
                std::cin >> menu_option;
                
                if (menu_option == 1) {
                    system("clear");
                    exit(0);
    } else if (menu_option == 2) {
        system ("clear");
        calc_weight();
    } else if (menu_option == 4) {
        system("clear");
        calc_age();
    }  else if (menu_option != 1 && menu_option != 2 && menu_option != 4)  {
        system("clear");
        system("curl parrot.live");
    }
    }
    else if (planet_type == 4) {
        system("clear");
        srand(time(0)); 
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
        

    

    print_color("Enter your weight in kilograms on Earth: ");
    std::cin >> earthWeight;
        std::cout << "                          \n";

    print_color("planet choice:");
    print_color("W == weight");
    std::cout << "                                         \n";
    print_color("1 = Pluto(dwarf planet located in the Kuiper Belt): W * 0.06");
    if (planetChoice == 1) {
        system("clear");
        print_color("Your weight on Pluto would be " + std::to_string(earthWeight * 0.06) + " kilos");

    }
      std::cout << "              \n";
            std::cout << "             \n";
            print_color("Do you want to quit? (1), do you want to insert another weight? (2) or do you want to enter a new age value (4)");
            std::cin >> menu_option;
            
            if (menu_option == 1) {
                system("clear");
                exit(0);
} else if (menu_option == 2) {
    system ("clear");
    calc_weight();
} else if (menu_option == 4) {
    system("clear");
    calc_age();
}  else if (menu_option != 1 && menu_option != 2 && menu_option != 4)  {
    system("clear");
    system("curl parrot.live");
}
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void calc_age() {
    srand(time(0));  

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
                system("clear");
                exit(0);
} else if (menu_option == 2) {
    system ("clear");
    calc_weight();
} else if (menu_option == 4) {
    system("clear");
    calc_age();
}  else if (menu_option != 1 && menu_option != 2 && menu_option != 4)  {
    system("clear");
    system("curl parrot.live");
    print_color("You now activated the parrot of invalidness!!");
    
}
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


}
int main() {
    srand(time(0));  

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
        } else if (menu_option == 1) {
            system("clear");
            exit(0);
        } else if (menu_option != 1 && menu_option != 2 && menu_option != 4)  {
            system("clear");
             system("curl parrot.live");
        }else if (menu_option == 20) {
            system("clear");
            system("curl ASCII.live/forrest");
        }

    }

}


//Moons:

//The Moon (Earth's natural satellite)
//Europa (moon of Jupiter)
//Ganymede (moon of Jupiter)
//Titan (moon of Saturn)
//Enceladus (moon of Saturn)
//Triton (moon of Neptune)
//Io (moon of Jupiter)
//Callisto (moon of Jupiter)

