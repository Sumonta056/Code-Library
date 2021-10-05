std::string s1 = "2548 Tom White";
size_t pos = s1.find_first_of(' ');
std::string s2 = s1.substr(0, pos);
std::string s3 = s1.substr(pos + 1);