#include "pch.h"
#include"simulator.h"
using namespace std;
//uncomment complex_mode for detailed information, must comment simple_mode if want complex_mode
//using namespace complex_mode;
using namespace simple_mode;

int main()
{
	//init anything you like
	int ticks = get_ticks();
	while (true)
	{
		if (get_ticks() == ticks) { continue; }
		if (button_pressed(BUTTON1)&&button_pressed(BUTTON2))
		{
			led_on(LED1);
		}
		else 
		{
			led_off(LED1);
		}
	}
	return 0;
}

