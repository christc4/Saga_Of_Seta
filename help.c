#include <stdio.h>
#include "help.h"

void displayHelpMenu() {
    printf("Welcome to the Text Adventure Game Help Menu!\n");
    printf("==============================================\n\n");
    printf("COMMANDS:\n");
    printf("1. quit - Quit the game.\n");
    printf("2. look - Look around your current location.\n");
    printf("3. go [direction] - Move to another location.\n");
    printf("4. help - Display this help menu.\n\n");
    printf("GAMEPLAY TIPS:\n");
    printf("- Explore different locations by typing 'look' to observe your surroundings.\n");
    printf("- Move around using 'go' followed by a direction like 'north', 'south', 'east', or 'west'.\n");
    printf("- Pay attention to the descriptions to uncover clues or items.\n");
    printf("- Use the 'quit' command to exit the game at any time.\n");
    printf("- If you're ever unsure what to do next, type 'help' for assistance.\n\n");
    printf("Enjoy your adventure!\n");
}

