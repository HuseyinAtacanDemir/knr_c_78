#ifndef GETWORD_H
#define GETWORD_H

#define MAXWORD 20
#define BUFSIZE 100
#define LETTER 'a'
#define DIGIT '0'
#define DEFINE '#'

extern char buf[BUFSIZE];
extern int bufp;
extern int initialized;
extern int type[256];

int str_cmp(char *, char *, int *, int *, int);
int initialize_type_lookup();
int getword(char *, int);
int getword_with_line(char *, int *, int);
char getch();
void ungetch(char);
char * strsave(char *);

#endif
