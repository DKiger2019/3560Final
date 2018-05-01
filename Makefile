CC = g++

count:
	$(CC) -g main.cc -o count

all: build check doc doczip

build: count

doc: 
	doxygen Doxyfile

check: build
	
	cppcheck main.cc test.txt
	valgrind ./count

doczip: 
	tar -czvf doczip.tar.gz html

clean:
	rm -f *.o *.gch myexe *.tar.gz a.out
	rm -r html
