/**
 * _strlen - swaps the values of two integers
 * @s: character
 */
int _strlen(char *s)
{
  int i = 0;
    
  while(*s[i] != '\0')
{
  i++;
}
  return i;
}
