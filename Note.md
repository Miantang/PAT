###1. string转int， double：

#####C++11做法：

1. int **stoi**(const string&  str, size_t* idx = 0, int base = 10);
```c++
string str_dec = "2001, A Space Odyssey";
string str_hex = "40c3";
string str_bin = "-10010110001";
string str_auto = "0x7f";

string::size_type sz;   // alias of size_t

int i_dec = stoi(str_dec,&sz);      //2001   (sz)->','
int i_hex = stoi(str_hex,nullptr,16); // 16579
int i_bin = stoi(str_bin,nullptr,2);  // -1201
int i_auto = stoi(str_auto,nullptr,0); // 127
```

2. double **stod**(const string&  str, size_t* idx = 0);
```c++
string orbits("365.24 29.53");
size_t sz;

double earth = stod(orbits,&sz);     // 365.24  sz->' '
double moon = stod(orbits.substr(sz));  // 29.53
```
#####C++0x做法(cstdlib)：

1. double,int **atof**, **atoi**(const char* str);

2. double,long **strtod**, **strtol**(const char* str, char** endptr);

3. **stringstream**

###1. int,double转string：

#####C++11做法：

1. **to_string**(number)

#####C++0x做法(cstdlib)：

1. sprintf
```c++
char buf[10];
sprintf(buf, "%d", 100);
string b = buf;
```
2. sstream

**stringstream可以吞下任何类型，根据实际需要吐出不同的类型**
```c++
strstream ss;
string str;
ss << number;
ss >> str;
cout << str << endl;
```
3. int如果是单字符用char(nubmer+'0')

