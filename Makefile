all:
	cd ./Parser; make all; cd ..

clean:
	cd ./Parser; make clean; cd ..

cleanall:
	make cleanExamples
	cd ./Parser; make clean; cd ..

customExamples:
	./compile.sh examples/example1 example1
	./compile.sh examples/example2 example2
	./compile.sh examples/example3 example3
	./compile.sh examples/example4 example4
	./compile.sh examples/example5 example5

cleanExamples:
	rm ccode.c
	rm example1
	rm example2
	rm example3
	rm example4
	rm example5
