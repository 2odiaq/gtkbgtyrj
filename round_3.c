#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int max_2d(const int size, int array[][size]){
    int max=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(array[i][j]>max){
                max= array[i][j];
            }
        }
    }
    if(array==NULL){
        return -1;
    }
    return max;
}

int is_in_array_2d(const int num, const int size, int array[][size]){
    int cislo=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(array[i][j]==num){
                cislo= 1;
            }
            if(array[i][j]!=num){
                cislo= 0;
            }
        }
    }
    if(array==NULL){
        return -1;
    }
    return cislo;
}

int vowels_count_2d(const int rows, const int cols, char strings[][cols])
{
    if (strings == NULL)
    {
        return -1;
    }

    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols && strings[i][j] != '\0'; j++)
        {
            char c = tolower(strings[i][j]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                count++;
            }
        }
    }

    return count;
}

int largest_line(const int size, int array[][size])
{
    if (array == NULL)
    {
        return -1;
    }

    int maxSum = 0;
    int maxIndex = -1;

    for (int i = 0; i < size; i++)
    {
        int currentSum = 0;

        for (int j = 0; j < size; j++)
        {
            currentSum += array[i][j];
        }

        if (i == 0 || currentSum > maxSum)
        {
            maxSum = currentSum;
            maxIndex = i;
        }
    }

    return maxIndex;
}

void swap_case_2d(const int rows, const int cols, char strings[][cols])
{
    if (strings == NULL)
    {
        return;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols && strings[i][j] != '\0'; j++)
        {
            if (isupper(strings[i][j]))
            {
                strings[i][j] = tolower(strings[i][j]);
            }
            else if (islower(strings[i][j]))
            {
                strings[i][j] = toupper(strings[i][j]);
            }
        }
    }
}

int largest_col(const int size, int array[][size])
{
    if (array == NULL)
    {
        return -1;
    }

    int maxSum = 0;
    int maxIndex = -1;

    for (int j = 0; j < size; j++)
    {
        int currentSum = 0;

        for (int i = 0; i < size; i++)
        {
            currentSum += array[i][j];
        }

        if (j == 0 || currentSum > maxSum)
        {
            maxSum = currentSum;
            maxIndex = j;
        }
    }

    return maxIndex;
}

void swap_sign_2d(const int rows, const int cols, char strings[][cols])
{
    if (strings == NULL)
    {
        return;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            strings[i][j] = -strings[i][j];
        }
    }
}

int count_zeroes_2d(const int size, int array[][size]) {
    if (array == NULL){
        return -1;
    }

    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] == 0) {
                count++;
            }
        }
    }
    return count;
}

