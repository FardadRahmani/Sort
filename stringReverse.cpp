int main()
{

    string txt{};
    
    cout << "Enter a name" << endl;
    getline(cin, txt);
    string txtRev{txt};
    for (const char& c : txt)
    {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(300));
    }
    int a = 0;
    //reverse the string

    for (int i = txt.length() - 1; i >= 0; i--)
    {
        txtRev[a] = txt[i];
        a++;

    }

    cout << endl << txtRev << endl;

    return 0;
}
