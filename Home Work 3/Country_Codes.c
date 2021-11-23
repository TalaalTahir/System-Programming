#include <stdio.h>
#include <stdlib.h>

//Initializing an array of structures, that will be used as the database for countries
struct dialing_code{
  //Initializing a pointer to point at countries
  char *country;
  //Initializing a variable to point at the code for each country
  int code;
};

//Helper function to find the name of Country
int Country_Check(int num){
  //Initialize i for a for loop and create a pointer p that points at the input
  int i,*p;
  p=&num;
  //Initializing a structure array holding data of 20 nations
  const struct dialing_code country_codes [] =
  {{"Argentina",54}, {"Bangladesh", 880},
  {"Brazil", 55},{"Burma (Myanmar)", 95},
  {"China", 86}, {"Colombia", 57},
  {"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
  {"Ehiopia", 251}, {"France", 33},
  {"Germany", 49}, {"India", 91},
  {"Indonesia", 62}, {"Iran", 98},
  {"Italy", 39}, {"Japan", 81},
  {"Mexico", 52}, {"Nigeria", 234},
  {"Pakistan", 92}, {"Philippines", 63},
  {"Poland", 48}, {"Russia", 7}};

  //Iterate through the entire strucutre array
  for(i=0;i<20;++i){
    //If the country code corresponds to the input print the country name
    if(country_codes[i].code==*p){
      printf("The corresponding country's name is %s\n",country_codes[i].country);
      //Exit if found
      exit(0);
    }
  }

  //If the code does not exit because of the for loop, country is not in Structure array
  printf("Country code is incorrect or Country is not in system\n");
  return 0;
}

int main(){
  //Initialize variable to hold code input
  int num;
  //Ask for code
  printf("Enter an international dialing code: ");
  scanf("%d",&num);
  //Run Helper function to find if country is in database
  Country_Check(num);
  return 0;
}