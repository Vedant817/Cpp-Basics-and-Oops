//Tower of Hanoi by Recursion
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod,char aux_rod)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod
		<< " to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
	/*
	Rules:
			1. Taking only one disk at a time.
			2. Larger disk can't b ekept on a smaller disk.

	Hints:
			First we need to move the n-1 disks to helper column using destination column as a helper column.
			Then we need to move the largest disk to the destination disk.
			After this we nedd to move n-2 disks from n-1 disks to initial column using destination column as helper column.
			Then move the remaining disk to the destination column.
	*/
	
	int N = 3;
	// A, B and C are names of rods
	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}
