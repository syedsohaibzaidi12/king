#include <stdio.h>

int
main ()
{
  int marks = 0;

  printf ("Enter your grade:");
  scanf ("%d", &marks);

  switch (marks)

    {
    case 86:
      printf ("for entered marks grade is A and G.P is 4.00");
      break;
    case 82:
      printf ("for entered marks grade is A- and G.P is 3.67");
      break;
    case 78:
      printf ("for entered marks grade is B+ and G.P is 3.33");
      break;
    case 74:
      printf ("for entered marks grade is B and G.P is 3.00");
      break;
    case 70:
      printf ("for entered marks grade is B- and G.P is 2.67");
      break;
    case 66:
      printf ("for entered marks grade is C+ and G.P is 2.33");
      break;
    case 62:
      printf ("for entered marks grade is C and G.P is 2.00");
      break;
    case 58:
      printf ("for entered marks grade is C- and G.P is 1.67");
      break;
    case 54:
      printf ("for entered marks grade is D+ and G.P is 1.33");
      break;
    case 50:
      printf ("for entered marks grade is D and G.P is 1.00");
      break;
      default: printf ("You have failed");

    }


  return 0;
}

