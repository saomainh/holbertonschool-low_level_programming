/**
 * rev_string - Short description, single line
 * @str: Description of parameter x
 * Description: Longer description of the function
 * Return: Description of the returned value
 */

void rev_string(char *str)
{
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
