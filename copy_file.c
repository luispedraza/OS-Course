// Tanenbaun (2009, p. 265)

#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define TAM_BUF 4096
#define MODO_SALIDA 0700


int main(int argc, char *argv[]) {
	int entrada, salida, leer_cuenta, escribir_cuenta;
	char buffer[TAM_BUF];

	printf("hola");

	if (argc != 3) exit(1);
	

	// Abrimos el archivo de entrada
	entrada = open(argv[1], O_RDONLY);

}