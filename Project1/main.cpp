#include <iostream>
#include "CalculaArea.h"
#include "CalculaVolume.h"

using namespace std;

int main()
{
	float x,y,z,VOLUME;
	cout << "Valor x: " << endl;
	cin >> x;
	cout << "Valor x: " << endl;
	cin >> y;
	cout << "Valor x: " << endl;
	cin >> z;

	VOLUME = VolumeParalelepipedo(x, y, z);
	cout << "VOLUME: " << VOLUME;
	return 0;
}