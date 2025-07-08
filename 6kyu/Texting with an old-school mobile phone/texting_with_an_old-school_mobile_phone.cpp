#include <string>

using namespace std;

string send_message(const string& message)
{
  int messagei = 0;
  
  const int numbers[8] = {3,3,3,3,3,4,3,4};
  int numchar = 0;
  
  string speckeys = ".,?!'-+=";
  
  char latestnum;
  
  string newmessage = "";
  
  char c;
  
  bool iscase = false;
  
  while ((c = message[messagei]) != '\0')
  {        
    if (iscase && (c < '[' && c > '@')) c += 32; // if the char is uppercase [A-Z]
    else if (iscase && (c < '{' && c > '`')) // if the char is lowercase [a-z]
    {
      iscase = false;
      newmessage += '#';
      latestnum = '#';
    }
    
    if (c == '*')
    {
      if (latestnum == '*') newmessage += ' ';
      newmessage += "*-";
      latestnum = '\0';
    }
    else if (c == '#')
    {
      if (latestnum == '#') newmessage += ' ';
      newmessage += "#-";
      latestnum = '\0';
    }
    else if (c < '@' && c > ' ') // if the char is a special key or number
    {
      if (c < ':' && c > '/') // if the char is number [0-9]
      {
        if (latestnum == c) newmessage += ' ';
        newmessage += c + string(1, '-');
        latestnum = '\0';
      }
      else 
      {
        for (int i = 0; i < 8; i++)
        {
          if (c == speckeys[i] && i < 4)
          {        
            if (latestnum == '1') newmessage += ' ';
            newmessage += string((i+1), '1'); 
            latestnum = '1';
            break;
          }
          else if (c == speckeys[i] && i >= 4)
          {
            if (latestnum == '*') newmessage += ' ';
            newmessage += string((i-3), '*');
            latestnum = '*';
            break;
          }
        }
      }
    }
    else if (c == ' ') // if the char is spacebar
    {
      if (latestnum == '0') newmessage += ' ';
      newmessage += '0';
      latestnum = '0';
    }
    else if (c < '{' && c > '`') // if the char is lowercase
    {
      numchar = c - 'a' + 1; // calculating the symbol number
      for (int i = 0; i < 8; i++)
      {
        if (numchar <= numbers[i])
        {
          if (latestnum == (i+2+'0')) newmessage += ' ';
          newmessage += string(numchar, (i+2+'0')); 
          latestnum = (i+2+'0');
          break;
        }
        else 
        {
          numchar -= numbers[i];
        }
      }
    }
    else if (c < '[' && c > '@') // if the char is uppercase
    {
      iscase = true;
      newmessage += '#';
      latestnum = '#';
      continue;
    }
    messagei++;
  }
  return newmessage;
}
