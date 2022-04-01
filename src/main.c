/* main.c */
/*#include <iostream>
#include <string>
#include <regex>
#include <vector>
using namespace std;
void trim_space(string& line) {
line = regex_replace(line, regex(" +"), " ");
line.erase(0, line.find_first_not_of(" "));
line.erase(line.find_last_not_of(" ") + 1);
}
vector<string> words(const string& str, const string& signs) {
const regex re { signs } ;
const sregex_token_iterator iter { str.begin(), str.end(), re, -1 } ;
return { iter, { } } ;
}
int main() {
system("chcp 1251 > nul");
cout << "Строка: ";
string str;
getline(cin, str);
trim_space(str);
const string re(R"([ \t]+)");
auto box = words(str, re);
cout << "penultimate word: " << box.at(box.size() - 2) << '\n';
system("pause > nul");
}
*/

#include <stdio.h>
struct StudentData{
  char *stu_name;
  int stu_id;
  int stu_age;
};
int main (){
  struct StudentData student;
  student.stu_name = "huoxuepeng";
  student.stu_id = 2023011;
  student.stu_age = 22;
  printf("Hello, %s",student.stu_name);
  printf("\nStudent Id is :%d",student.stu_id);
  printf("\nStudent Age is :%d",student.stu_age);
  printf("\nGoodbye");
  return 0;
}