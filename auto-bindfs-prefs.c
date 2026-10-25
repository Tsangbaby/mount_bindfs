#import <unistd.h>
#import <stdio.h>
#import <stdlib.h>
#include <roothide.h>

int main(int argc, char *argv[]) {
    if (setuid(0) != 0) {
        perror("setuid failed");
        return 1;
    }
    if (setgid(0) != 0) {
        perror("setgid failed");
        return 1;
    }

    const char *bin = jbroot("/usr/sbin/mount_bindfs");
    execl(bin, "mount_bindfs", "--auto", NULL);
    perror("execl failed");
    return 1;
}
