cppFiles = nested.cpp

nested : $(cppFiles)
	g++ -g $(cppFiles) -o nested

$(cppFiles) : queuetp.h

.PHONY : clean
clean : 
	-rm -rf nested