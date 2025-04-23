void potencia(int a, int b) {
    int resultado = 1;
    for(int i = 0; i < b; i++) {
        resultado = resultado * a;
    }

    printf("O resultado e %d", resultado);

    system("PAUSE");
    return 0;
}