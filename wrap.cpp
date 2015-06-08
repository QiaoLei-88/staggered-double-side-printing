// Copy right
// 2015
// Qiao Lei

#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  string filename(" ");
  string options("-d bloc224a -o media=letter -o fitplot ");

  if (argc >= 2)
    {
      string input_parameter(argv[1]);
      filename += input_parameter;
    }

  if (argc > 2)
    {
      options.clear();
      for (int iarg=2; iarg < argc; ++iarg)
        {
          string input_parameter(argv[iarg]);
          options += input_parameter + ' ';
        }
    }

  options = "lp " + options +  "-P ";

  int comma_count = 0;
  string this_line("");
  while (!cin.eof())
    {
      char char_buf;
      cin.get(char_buf);
      if (char_buf == ',')
        {
          ++comma_count;
        }

      if (comma_count == 2 || cin.eof())
        {
          cout << options << this_line << filename << endl;
          this_line.clear();
          comma_count = 0;
        }
      else
        {
          if (isprint(char_buf))
            this_line.push_back(char_buf);
        }
    }
  return (0);
}
