/* Note: We may run into some issues as some installations may not work on Debian-based systems. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("sh .brew-install.sh"); /* Install brew */
    system("sh .git-install-linux.sh"); /* Install git */
    /* TODO: Add scripts for installing Jupyter notebook and Python */
}
