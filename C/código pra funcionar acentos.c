#ifdef _WIN32
  #include <windows.h>
#endif 

void enable_utf8()
{
  #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
  #endif
}

int main()
{
  enable_utf8();
  //Resto do código
}