#include <iostream>
#include <string>

int main()
{
  
  constexpr bool inClassroom {true};
  constexpr char answer {inClassroom ? 'Y' : 'N'};
  constexpr short classSize {inClassroom ? 30 : 0};

  std::cout << "In Classroom : " << answer << std::endl;

  // std::to_string() akan merubah short ke std::string
  // std::string{"i dont know"} akan merubah C-Style string menjadi std::string
  // agar match satu sama lain untuk melanjutkan proses dari conditional operator
  std::cout << "Class size : " << ((classSize == 30) ? std::to_string(classSize) : std::string{"i dont know"} ) << std::endl;

  return 0;
}
