br: compilar ejecutar

compilar: src/main.cpp
	g++ src/main.cpp -o bin/mascotas -I Include

ejecutar: bin/mascotas
	./bin/mascotas

clean: bin/mascotas
	rm bin/mascotas