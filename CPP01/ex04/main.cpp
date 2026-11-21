#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

static std::string	replaceAll(const std::string &content,
						const std::string &s1, const std::string &s2)
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;

	found = content.find(s1, pos);
	while (found != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
		found = content.find(s1, pos);
	}
	result += content.substr(pos);
	return (result);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	std::ifstream	infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: cannot open"  << filename << std::endl;
		return (1);
	}

	std::stringstream	buffer;
	buffer << infile.rdbuf();
	infile.close();

	std::string		outname = filename + ".replace";
	std::ofstream	outfile(outname.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: cannot create"  << outname << std::endl;
		return (1);
	}

	outfile << replaceAll(buffer.str(), s1, s2);
	outfile.close();
	return (0);
}
