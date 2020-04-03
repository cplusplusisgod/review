# review
To be reviewed on reddit

The Problem:

Title: Number Class
  Design a class Numbers that can be used to translate whole dollar amounts into the range of 0 through 9999 into an English description of the number. For example, the number 713 would be translated into the string seven hundred thirteen, and 8203 would be translated into eight thousand two hundred three.The clas should hae a single integer member variable:
  int number:
  and a static array of string objects that specify how to translate key dollar amoounts into the deisred format.For example, you might use static strings such as 
  string lessThan20[20] = {"zero","one",....."eighteen","nineteen"}
  string hundred = "hundred";
  string thousand = "thousand";
    The class should have a constructor that accepts a nonenegative integer and uses it to initalize the Numbers object.It should have a member function print() that prints the english description of the Numbers object. Demonstrate the class by writing a main program that asks the user to enter a number in the proper range then prints out its english description.
    
    
    Note:
    I think it seems a bit silly to have static strings for the word "hundred" and "thousand" but i went with it.
    Also i added the word "and" for numbers such as 1802 so it would be one thousand eight hundred AND two, though the insturcitons dont say to.Also i realize instead of multible peices being cout'ed, i could just append them to a string and cout once.
  
