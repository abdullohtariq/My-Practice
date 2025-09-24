#include <stdbool.h> // Needed for bool
#include <stdint.h>  // Needed for uint8_t
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    FILE *raw_file = fopen(argv[1], "r");
    if (raw_file == NULL)
    {
        return 1; // Exiting if the file cannot be opened
    }
    uint8_t buffer[512];
    bool found_JPEC = false;
    int JPEC_counter = 0;
    char file_name[8];
    FILE *img = NULL;
    while (fread(buffer, 1, 512, raw_file))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            found_JPEC = true;
        }
        if (found_JPEC == true)
        {
            if (JPEC_counter != 0)
            {
                fclose(img);
            }
            sprintf(file_name, "%03i.jpg", JPEC_counter);
            img = fopen(file_name, "w");
            fwrite(buffer, 1, 512, img);
            found_JPEC = false;
            JPEC_counter++;
        }
        else if (JPEC_counter != 0)
        {
            fwrite(buffer, 1, 512, img);
        }
    }
    fclose(img);
    fclose(raw_file);
}
