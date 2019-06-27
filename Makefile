all:
	cd ./Parser; make all; cd ..
	
clean:
	cd ./Parser; make clean; cd ..

cleanall: 
	rm ccode.c 
	cd ./Parser; make clean; cd ..

customExamples:
	./compile.sh examples/example1 example1
	./compile.sh examples/example2 example2
	./compile.sh examples/example3 example3

cleanExamples:
	rm example1
	rm example2
	rm example3
