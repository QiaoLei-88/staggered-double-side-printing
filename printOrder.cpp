#include<iostream>
#include<sstream>

using namespace std;

int main(int argc, char *argv[])
{
  int page_end(1);
  int page_beg(1);

  if (argc == 2)
    {
      stringstream input_parameter(argv[1]);
      input_parameter >> page_end;
    }

  if (argc > 2)
    {
      stringstream input_parameter(argv[1]);
      input_parameter >> page_beg;

      input_parameter.clear();
      input_parameter.str(argv[2]);
      input_parameter >> page_end;
    }

  // Rule out possible dirty inputs
  if (page_end < 1) page_end = 1;
  if (page_beg < 1) page_beg = 1;
  if (page_beg > page_end)  page_beg = page_end;

  // How many pieces of paper needed
  const int n_paper = (page_end - page_beg)/2 + 1;

  // Page number to be printed on first side of current papar
  int i_page_1 = page_beg;
  // Page number to be printed on second side of current papar
  int i_page_2 = i_page_1 + n_paper;

  // Rolling out
  for (int i_paper = 1; i_paper <= n_paper; ++i_paper)
    {
      if (i_page_1 > page_beg) cout << ',';
      cout << i_page_1;
      if (i_page_2 <= page_end)  cout << ',' << i_page_2;
      ++i_page_1;
      ++i_page_2;
    }
  cout << endl;

  return (0);
}

