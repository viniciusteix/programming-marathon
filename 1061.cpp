#include <bits/stdc++.h>

using namespace std;

int main(){
	int dia1, dia2, hora1, hora2, min1, min2, seg1, seg2;
	char temp;
	string dia;

	cin >> dia >> dia1;
	cin >> hora1 >> temp >> min1 >> temp >> seg1;

	cin >> dia >> dia2;
	cin >> hora2 >> temp >> min2 >> temp >> seg2;

	int seg_ = 60-seg1+seg2;
	int min_ = (60-min1-1+min2)*60;
	int hor_ = (24-1-hora1+hora2)*3600;
	int dia_ = (dia2-dia1-1)*86400;
	int total = seg_ + min_ + hor_ + dia_;
	

	printf("%d dia(s)\n", total/86400);

	total = total % 86400;

	printf("%d hora(s)\n", total/3600);

	total = total % 3600;

	printf("%d minuto(s)\n", total/60);

	total = total % 60;

	printf("%d segundo(s)\n", total);

	return 0;
}