/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Snowdon
 */
#include <stdlib.h>
#include <cstring>
#include <stdio.h>


int main()
{
    char operand[255];
    double val1 = 0;
    double val2 = 0;
    double result = 0;

    printf("Please insert your operation and then your values:\n");
    scanf("%s %lf %lf", &operand, &val1, &val2);

    if (strcmp(operand, "+") == 0|| strcmp(operand, "plus") == 0)
    {
        result = val1 + val2;
    }
    if (strcmp(operand, "-") == 0 || strcmp(operand, "minus") == 0)
    {
        result = val1 - val2;
    }
    if (strcmp(operand, "*") == 0 || strcmp(operand, "mul") == 0)
    {
        result = val1 * val2;
    }
    if (strcmp(operand, "/") == 0 || strcmp(operand, "div") == 0)
    {
        result = val1 / val2;
    }

    printf("Your result is %lf", result);
    return 0;
}