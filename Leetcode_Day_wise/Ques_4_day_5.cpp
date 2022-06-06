int findPlatform(int arr[], int dep[], int n)
{
	// Sort arrival and departure arrays
	sort(arr, arr + n);
	sort(dep, dep + n);

	int plat_needed = 1;
	int i = 1, j = 0;

	while (i < n) {
		if (arr[i] > dep[j]) {
			i++;
			j++;
		}

		else if (arr[i] <= dep[j]) {
			plat_needed++;
			i++;
		}

	}

	return plat_needed;
}
