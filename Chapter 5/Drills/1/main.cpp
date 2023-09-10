#include "std_lib_facilities.h"

int main()
try
{
//  cout << "Success!\n";
//  cout << "Success!\n";
//  cout << "Success!\n";
//  cout << "Success!\n";
//  int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//  vector<int> v(10); v[5] = 7; if (v[5]=7) cout << "Success!\n";
//  bool cond{true}; if (cond) cout << "Success!\n"; else cout << "Fail!\n";
//  bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
//  string s = "ape"; bool c = "fool" < s; if (!c) cout << "Success!\n";
//  string s = "ape"; if (s!="fool") cout << "Success!\n";
//  string s = "ape"; if (s!="fool") cout << "Success!\n";
//  string s = "ape"; if (s!="fool") cout << "Success!\n";
//  vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
//  vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
//  string s = "Success!\n"; for (int i=0; i<8; ++i) cout << s[i]; cout << '\n';
//  if (true)  cout << "Success!\n"; else cout << "Fail!\n";
//  int x = 64; char c = x; if (c==64) cout << "Success!\n";
//  string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
//  vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
//  int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
//  int x = 4; double d = 17.0/(x - 2.0); if (d==2*x+0.5) cout << "Success!\n";
//  string s = "Success!\n"; for (int i=0; i < 8; ++i) cout << s[i]; cout << '\n';
//  int i=0; while (i<10) ++i; int j{5}; if (j<i) cout << "Success!\n";
//  int x = 4; double d = 17.0/(x - 2.0); if (d==2*x+0.5) cout << "Success!\n";
  cout << "Success!\n";

    keep_window_open();
    return 0;
}

catch (exception& e)
{
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}