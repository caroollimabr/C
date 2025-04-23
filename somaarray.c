void soma(int numeros[10]) {
    int total = 0;
    for(int i = 0; i < 10; i++) {
        total += numeros[i];
    }
    printf("O total e %d", total);
    
    system("PAUSE");
    return 0;
}