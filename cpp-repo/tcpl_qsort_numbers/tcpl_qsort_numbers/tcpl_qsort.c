void tcpl_qsort(int v[], int left, int right) {
	int i, last;
	void swap(int v[], int i, int j);

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);	// Restore partition elem
	tcpl_qsort(v, left, last - 1);
	tcpl_qsort(v, last + 1, right);
}

void swap(int v[], int i, int j) {
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}