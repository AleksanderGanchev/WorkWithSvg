#include "stdafx.h"
#include"Vector.h" //!< indludes all headers
#include"Circle.h"
#include"Rectangle.h"
#include"Line.h"
#include"Shape.h"
#include"TextManipulating.h"
#include"ConsoleCommands.h"
#include"ConsoleMenu.h"
#include<stdlib.h> //!<library used for clearing the console data
#include<fstream>
#include<iostream>

int main()
{
	consoleMenu(); //!< shows the supported options and allows the user to choose from the commands

	system("pause");
    return 0;
}

