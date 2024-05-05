

void tausche(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


Int main {


	int array1[10]{0};
	int index{ 0 };
	int temp{ 0 };
	int temp2{ 0 };
	cout << "Enter ten unsorted integers...";

	for (int cnt1 = 0; cnt1 < 10; ++cnt1) //for column
	{


		cout << "[" << cnt1 << "]=";
		cin >> array1[cnt1];

	}
	cout << "Unsorted List=";
	for (int cnt1 = 0; cnt1 < 10; ++cnt1) //for column
	{


		cout << array1[cnt1];
		if (cnt1 != 9)
			cout << ", ";
		else
		{
			cout << endl;
			cout << "Sorting...";

		}

	}

	for (int cnt1 = 0; cnt1 < 9; ) //for column
	{
		index = cnt1;

		
		for (int cnt2 = (cnt1+1); cnt2 < 10; ++cnt2)//find smallest number-index
		{
			if (array1[cnt2] < array1[index])
			{
				
				index = cnt2;
				
			}

		}
		tausche(array1[cnt1], array1[index]);
		
		cnt1++;
	}
	cout << "sorted List=";
	for (int cnt1 = 0; cnt1 < 10; ++cnt1) //for column
	{


		cout << array1[cnt1];
		if (cnt1 != 9)
			cout << ", ";
		

	}

	return 0;}
