//including libraries.
#include <iostream>
#include <string>

int main() {
//declaring all the variables of the planet number as well as the gravity of each planet.
  std::cout << "  _________                                          .__       .__     __   \n";
  std::cout << " /   _____/__________    ____  ____   __  _  __ ____ |__| ____ |  |___/  |_ \n";
  std::cout << " \_____  \\____ \__  \ _/ ___\/ __ \  \ \/ \/ // __ \|  |/ ___\|  |  \   __\\n";
  std::cout << " /        \  |_> > __ \\  \__\  ___/   \     /\  ___/|  / /_/  >   Y  \  |  \n";
  std::cout << "/_______  /   __(____  /\___  >___  >   \/\_/  \___  >__\___  /|___|  /__|  \n";
  std::cout << "        \/|__|       \/     \/    \/               \/  /_____/      \/      \n";
  std::cout << "                        __               __                                 \n";
  std::cout << "_____________  ____    |__| ____   _____/  |_                               \n";
  std::cout << "\____ \_  __ \/  _ \   |  |/ __ \_/ ___\   __\                              \n";
  std::cout << "|  |_> >  | \(  <_> )  |  \  ___/\  \___|  |                                \n";
  std::cout << "|   __/|__|   \____/\__|  |\___  >\___  >__|                                \n";
  std::cout << "|__|               \______|    \/     \/                                    \n";
  std::cout << "                                                                            \n";
  std::cout << "                                                                            \n";
  int earthgravity;
  earthgravity = 1;

  int earthnumber;
  earthnumber = 1;

  int mercurynumber;
  mercurynumber = 2;

  ;double mercurygravity;
  mercurygravity = 0.38;

  int venusnumber;
  venusnumber = 3;

  ;double venusgravity;
  venusgravity = 0.91;

  int marsnumber;
  marsnumber = 4;

  ;double marsgravity;
  marsgravity = 0.38;

  int jupiternumber;
  jupiternumber = 5;

  ;double jupitergravity;
  jupitergravity = 2.34;

  int saturnnumber;
  saturnnumber = 6;

  ;double saturngravity;
  saturngravity = 1.06;

  int uranusnumber;
  uranusnumber = 7

  ;double uranusgravity;
  uranusgravity = 0.92;

  int neptunenumber;
  neptunenumber = 8

  ;double neptunegravity;
  neptunegravity = 1.19;

  int planetchoice;
  planetchoice = 0;

//Asking for user input.
  std::cout << "what is your earth weight?\n";
  std::cin >> earthgravity;

  std::cout << "planet destination:\n";
//Noting all the planet numbers.
    std::cout << "W == weight\n";


    std::cout << "1 = earth, W x 1\n";
    std::cout << "2 = mercury, W x 0.38\n";
    std::cout << "3 = venus, W x 0.91\n";
    std::cout << "4 = mars, W x 0.38\n";
    std::cout << "5 = jupiter, W x 2.34\n";
    std::cout << "6 = saturn, W x 1.06\n";
    std::cout << "7 = uranus, W x 0.92\n";
    std::cout << "8 = neptune, W x 1.19\n";

//Asking for user input.
  std::cin >> planetchoice;
//Declaring all the cases for the switch statement.
  switch (planetchoice) {
    case 2 :
  std::cout << "Your weight on mercury would be \n" << earthgravity *  0.38 << "kilo's\n";
  break;
    case 3 :
  std::cout << "Your weight on venus would be \n" << earthgravity * 0.91 << " kilo's\n";
  break;
    case 4 :
  std::cout << "Your weight on mars would be \n" << earthgravity * 0.38 << " kilo's\n";
  break;
    case 5 :
  std::cout << "Your weight on jupiter would be \n" << earthgravity * 2.34 << " kilo's\n";
  break;
    case 6 :
  std::cout << "Your weight on saturn would be \n" << earthgravity * 1.06 << " kilo's\n";
  break;
    case 7 :
  std::cout << "Your weight on uranus would be \n" << earthgravity * 0.92 << " kilo's\n";
  break;
    case 8 :
          std::cout << "Your weight on neptune would be \n" << earthgravity * 1.19 << " kilo's\n";
  break;
    default :
  std::cout << "unknown\n";
  break;


  }
//Returning user input to zero.
return 0;


}


