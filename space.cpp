#include <iostream>
#include <string>

int main() {

  std::cout << "  _________                                          .__       .__     __   \n";
  std::cout << " /   _____/__________    ____  ____   __  _  __ ____ |__| ____ |  |___/  |_ \n";
  std::cout << " \\_____  \\____ \\__  \\ _/ ___\\/ __ \\  \\ \\/ \\/ // __ \\|  |/ ___\\|  |  \\   __\\\n";
  std::cout << " /        \\  |_> > __ \\\\  \\__\\  ___/   \\     /\\  ___/|  / /_/  >   Y  \\  |  \n";
  std::cout << "/_______  /   __(____  /\\___  >___  >   \\/\\_/  \\___  >__\\___  /|___|  /__|  \n";
  std::cout << "        \\/|__|       \\/     \\/    \\/               \\/  /_____/      \\/      \n";
  std::cout << "                        __               __                                 \n";
  std::cout << "_____________  ____    |__| ____   _____/  |_                               \n";
  std::cout << "\\____ \\_  __ \\/  _ \\   |  |/ __ \\_/ ___\\   __\\                              \n";
  std::cout << "|  |_> >  | \\(  <_> )  |  \\  ___/\\  \\___|  |                                \n";
  std::cout << "|   __/|__|   \\____/\\__|  |\\___  >\\___  >__|                                \n";
  std::cout << "|__|               \\______|    \\/     \\/                                    \n";

  double earthWeight;

  int earthnumber = 1;
  double earthgravity = 1;

  int mercurynumber = 2;
  double mercurygravity = 0.38;

  int venusnumber = 3;
  double venusgravity = 0.91;

  int marsnumber = 4;
  double marsgravity = 0.38;

  int jupiternumber = 5;
  double jupitergravity = 2.34;

  int saturnnumber = 6;
  double saturngravity = 1.06;

  int uranusnumber = 7;
  double uranusgravity = 0.92;

  int neptunenumber = 8;
  double neptunegravity = 1.19;

  int planetchoice = 0;

  std::cout << "What is your weight on Earth?\n";
  std::cin >> earthWeight;

  std::cout << "Planet destination:\n";
  std::cout << "W == weight\n";
  std::cout << "1 = Earth, W x 1\n";
  std::cout << "2 = Mercury, W x 0.38\n";
  std::cout << "3 = Venus, W x 0.91\n";
  std::cout << "4 = Mars, W x 0.38\n";
  std::cout << "5 = Jupiter, W x 2.34\n";
  std::cout << "6 = Saturn, W x 1.06\n";
  std::cout << "7 = Uranus, W x 0.92\n";
  std::cout << "8 = Neptune, W x 1.19\n";

  std::cin >> planetchoice;

  switch (planetchoice) {
    case 2:
      std::cout << "Your weight on Mercury would be " << earthWeight * 0.38 << " kilos\n";
      break;
    case 3:
      std::cout << "Your weight on Venus would be " << earthWeight * 0.91 << " kilos\n";
      break;
    case 4:
      std::cout << "Your weight on Mars would be " << earthWeight * 0.38 << " kilos\n";
      break;
    case 5:
      std::cout << "Your weight on Jupiter would be " << earthWeight * 2.34 << " kilos\n";
      break;
    case 6:
      std::cout << "Your weight on Saturn would be " << earthWeight * 1.06 << " kilos\n";
      break;
    case 7:
      std::cout << "Your weight on Uranus would be " << earthWeight * 0.92 << " kilos\n";
      break;
    case 8:
      std::cout << "Your weight on Neptune would be " << earthWeight * 1.19 << " kilos\n";
      break;
    default:
      std::cout << "Unknown\n";
      break;
  }

  return 0;
}
