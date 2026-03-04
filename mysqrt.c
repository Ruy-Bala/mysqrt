int mysqrt(int X) {
    int a = 0, A = 0;
    A = a * a;
    while (A <= X){
        a++;
        A = a * a;
    }
    a--;
    return a;
}