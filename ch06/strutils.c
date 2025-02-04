#include "strutils.h"
#include "alloc.h"

char *str_save(char *s)
{
  int strlen = str_len(s);
  char *p = (char *) alloc_custom(strlen+1);
  str_cpy(p, s);
  return p;
}

void str_cpy(char *s, char *t)
{
  while ((*s++ = *t++))
    ;
}

int str_len(char *s)
{
  char *p = s;
  
  while (*s)
    s++;
  return (s-p);
}

int str_cmp(char *s, char *t)
{
  while (*s != '\0' && *s++ == *t++)
    ;
  return *s-*t;
}
