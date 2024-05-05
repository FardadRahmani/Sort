

char toUpperCase(char &input) {

  if (input > 96 && input < 123) {
    input -= 32;

  } else if (input > 64 && input < 91) {

  } else {
    input = NULL;
  }
  return input;
}

char toLowerCase(char &input) {

  if (input > 64 && input < 91) {
    input += 32;

  } else if (input > 96 && input < 123) {

  } else {
    input = NULL;
  }
  return input;
}

int main() {
  cout << "Enter a lower Case character to change into Upper Case: " << endl;
  char lowerCase{' '};
  cin >> lowerCase;
  toUpperCase(lowerCase);
  cout << lowerCase << endl;

  cout << "Enter an Upper Case character to change into lower Case: " << endl;
  char upperCase{' '};
  cin >> upperCase;
  toLowerCase(upperCase);
  cout << upperCase << endl;

  char iterate = 65;
  for (int cnt = 0; cnt < 26; ++cnt) {
    toLowerCase(iterate);
    cout << iterate << " ";
    ++iterate;
  }
  cout << endl;
  iterate = 97;
  for (int cnt = 0; cnt < 26; ++cnt) {
    toUpperCase(iterate);
    cout << iterate << " ";
    ++iterate;
  }

  return 0;
}
