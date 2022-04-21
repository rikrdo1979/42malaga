#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

int main (int argc, char *argv[])
{
    
    int i;

    i = 0;
    // GET ARGS
    /*
    while (i < argc)
    {
        printf("Argumento [%d] : (%s) \n", i, argv[i]);
        i++;
    }

    printf("argc = %d \n", argc);
    printf("argv[argc] = %s \n", argv[argc]);
    */

    // OPEN AND READ FILE
    /*
    int fd;
    char buf[10];
    ssize_t nr_bytes;
    fd = open("numbers", O_RDONLY);
    if (fd == -1)
    {
        printf("Error");
    }
    else
    {
        nr_bytes = read(fd, buf, 10);
        close(fd);

        if (nr_bytes == 0)
            printf("Fcihero vacio\n");
        else
            printf("El numero de caracteres es %d, contenido: %s \n", (int)nr_bytes, buf);
    }
    */
    return (0);
}