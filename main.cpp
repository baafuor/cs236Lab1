#include <iostream> 
#include "Token.h"
#include "Scanner.h"
using namespace std;

int main(int argc, char* argv[])
{
	Scanner scanner = Scanner(); //make a new Scanner
	string filename = argv[1];
	string filename2 = argv[2];
	
	scanner.checkfile(filename, filename2);


	try //to see if there is an error
	{
		scanner.print(filename, filename2);
	}
	catch (string line_num) //runs if there is an error
	{
		//keep argument 2 but store in different string
		string file_out = argv[2];
		//strings for 1st argument
		string newfile = "";
		Scanner::check_error = true;
		scanner.print(newfile, file_out);
	}
}
