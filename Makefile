all:
	cd ./Parser; make all; cd ..
	
clean:
	cd ./Parser; make clean; cd ..

cleanall: 
	rm ccode.c 
	cd ./Parser; make clean; cd ..

customExamples:
