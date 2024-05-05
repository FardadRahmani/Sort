
int main(){
int array1[17]{ 7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8 };
int value{ 0 };
int position{ 0 };
cout << "List= ";
for (int cnt1 = 0; cnt1 < 17; ++cnt1) //for column
{

	cout << array1[cnt1]  ;
	if (cnt1 != 16)
		cout << ", ";
		
}
cout << endl;
cout << "Enter an integer in the list to search for:";
cin >> value;
for (int cnt1 = 0; cnt1 < 17; ++cnt1) //for column
{

		
	if (array1[cnt1] == value)
	{	cout << "Item found at index [" << ++cnt1 << "]";} }

return 0;
}