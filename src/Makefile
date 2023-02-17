
all: hw02
	
hw02: print_menu.o gen_number.o post_process.o print_menu.h gen_number.h post_process.h
	g++ hw02.cpp -o hw02 print_menu.o gen_number.o post_process.o
print_menu.o: print_menu.o print_menu.h
	g++ -c print_menu.cpp -o print_menu.o
gen_number.o: gen_number.o gen_number.h
	g++ -c gen_number.cpp -o gen_number.o
post_process.o: post_process.o post_process.h
	g++ -c post_process.cpp -o post_process.o
clean:
	rm -f *.o all
