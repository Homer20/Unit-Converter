unit_converter: unit_converter.c
	gcc -Wall -std=c99 unit_converter.c -o unit_converter

clean:
	rm -f *.o
	rm -f unit_converter
