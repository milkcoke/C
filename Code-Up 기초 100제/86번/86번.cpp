#include <iostream>
#include <math.h>
#define divideByte 8
#define sizeSection 1024

using namespace std;

int main (void)
{
	int width = 0;
	int height = 0;
	int bit = 0;
	unsigned int fileSize = 0;
	double megaFileSize = 0;
	cin >> width >> height >> bit;
		
	fileSize = (width * height * bit);
	megaFileSize = fileSize / (double)divideByte / pow((double)sizeSection, 2.0);
	cout << fixed;
	cout.precision(2);

	cout << megaFileSize << " MB" << endl;
	
	return 0;
	
}
