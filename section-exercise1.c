#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string name = get_string("What is your name? ");
  printf("Your name is %s\n", name);

  int age = get_int("how hold are you? ");
  printf("You are %i years old\n", age);

  long phoneNumber = get_long("Give me your phone number: ");
  printf("Your phone number is %li\n", phoneNumber);
}