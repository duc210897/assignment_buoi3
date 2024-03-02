#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <float.h>

int string_compare(char str1[], char str2[])
{

    int count = 0;
    while (str1[count] != '\0' && str2[count] != '\0') {
        if (str1[count] != str2[count]) {

            return 0;
        }
    count++;
    }
    return 1;
}

void size_of_data_type(char data_type[])
{
    if(string_compare(data_type, "int"))
    {
        printf("Size of int:: %d byte\n", sizeof(int));
        printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    }
    else if(string_compare(data_type, "float"))
    {
        printf("Size of float:: %d byte\n", sizeof(float));
        printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    }
    else if(string_compare(data_type, "double"))
    {
        printf("Size of double:: %d byte\n", sizeof(double)); 
        printf("Range of double: %e to %e\n", DBL_MIN, DBL_MAX);
    }
    else if(string_compare(data_type, "char"))
    {
        printf("Size of char:: %d byte\n", sizeof(char)); 
        printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);     
    }
    else if(string_compare(data_type, "all"))
    {
        printf("Size of int:: %d byte\n", sizeof(int));
        printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);

        printf("Size of float:: %d byte\n", sizeof(float));
        printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);

        printf("Size of double:: %d byte\n", sizeof(double));
        printf("Range of double: %e to %e\n", DBL_MIN, DBL_MAX);

        printf("Size of char:: %d byte\n", sizeof(char));
        printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);     
    }
}

int main(int argc, char *argv[])
{
    
    printf("Enter the data type name (or \"all\" to display all): ");
    char data_type_input[5];
    scanf("%s", data_type_input);
    size_of_data_type(data_type_input);
    return 0;
}