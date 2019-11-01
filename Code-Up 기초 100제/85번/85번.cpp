#include <iostream>
#include <math.h>
#define divideByte 8
#define sizeSection 1024

using namespace std;

int main (void)
{
	int SamplingRate = 0;
	int QuantizationRate = 0;
	int ChannelNum = 0;
	int Second = 0;
	unsigned int fileSize = 0;
	double megaFileSize = 0;
	cin >> SamplingRate >> QuantizationRate >> ChannelNum >> Second;
	
	fileSize = (SamplingRate * QuantizationRate * ChannelNum * Second);
	megaFileSize = fileSize / (double)divideByte / pow((double)sizeSection, 2.0);
	cout << fixed;
	cout.precision(1);

	cout << megaFileSize << " MB" << endl;
	
	return 0;
	
}
