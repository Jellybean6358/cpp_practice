int num, sumOdd=0, sumEven=0;
char choice;
do {
    cout << "Enter number: "; cin >> num;
    if(num % 2 == 0) sumEven += num;
    else sumOdd += num;
    cout << "Continue? (y/n): "; cin >> choice;
} while(choice == 'y');