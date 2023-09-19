#pragma once
#include<iostream>

using namespace std;

template <typename T>
T getcorrectnumber(T min, T max) {
	int x;
	while ((cin >> x).fail() || (x < min) || (x > max)) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "¬ведите значение (" << min << "-" << max << "):";
	}
	return x;
}
