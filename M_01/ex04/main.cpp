#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::ofstream;
using std::getline;

void	wrong_args()
{
	cout << "Wrong arguments! It's a pity;( Bye...\n";
	exit(1);
}

int main(int ac, char **ag)
{
	if (ac == 4)
	{
		string fName = ag[1];
		string s1 = ag[2];
		string s2 = ag[3];
		string outfile = fName + ".replace";
		string result;
		size_t start_pos;

		if (fName.empty() || s2.empty() || s1.empty())
			wrong_args();
		ifstream ifile(fName);
		if (ifile.fail())
			wrong_args();
		ofstream ofile(outfile);
		if (ofile.fail())
			wrong_args();
		while (getline(ifile, result))
		{
			while ((start_pos = result.find(s1, s1.length())) != std::string::npos)
			{
				result.erase(start_pos, s1.length());
				result.insert(start_pos, s2);
			}
			ofile << result << endl;
		}
		ofile.close();
		ifile.close();
		return (0);
	}
	wrong_args();
}
