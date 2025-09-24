#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int avg_rgb =
                round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = avg_rgb;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    float sepiaRed, sepiaGreen, sepiaBlue;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            sepiaRed = 0.393 * image[i][j].rgbtRed + 0.769 * image[i][j].rgbtGreen +
                       0.189 * image[i][j].rgbtBlue;
            sepiaGreen = 0.349 * image[i][j].rgbtRed + 0.686 * image[i][j].rgbtGreen +
                         0.168 * image[i][j].rgbtBlue;
            sepiaBlue = 0.272 * image[i][j].rgbtRed + 0.534 * image[i][j].rgbtGreen +
                        0.131 * image[i][j].rgbtBlue;
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
            image[i][j].rgbtRed = round(sepiaRed);
            image[i][j].rgbtGreen = round(sepiaGreen);
            image[i][j].rgbtBlue = round(sepiaBlue);
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE Tmp;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            Tmp = image[i][j];
            image[i][j] = image[i][width - j - 1];
            image[i][width - j - 1] = Tmp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE image_copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float sum_red = 0, sum_green = 0, sum_blue = 0, total_pixel = 0;
            for (int new_i = i - 1; new_i < i + 2; new_i++)
            {
                for (int new_j = j - 1; new_j < j + 2; new_j++)
                {
                    if (new_i >= 0 && new_j >= 0 && new_i < height && new_j < width)
                    {
                        sum_red += image[new_i][new_j].rgbtRed;
                        sum_green += image[new_i][new_j].rgbtGreen;
                        sum_blue += image[new_i][new_j].rgbtBlue;
                        total_pixel++;
                    }
                }
                image_copy[i][j].rgbtRed = round(sum_red / total_pixel);
                image_copy[i][j].rgbtGreen = round(sum_green / total_pixel);
                image_copy[i][j].rgbtBlue = round(sum_blue / total_pixel);
            }
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = image_copy[i][j];
        }
    }
    return;
}
