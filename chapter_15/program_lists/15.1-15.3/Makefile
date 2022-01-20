cppFiles = use_tv.cpp tv.cpp

use_tv : $(cppFiles)
	g++ -g $(cppFiles) -o use_tv

$(cppFiles) : tv.h

.PHONY : clean
clean : 
	-rm -rf use_tv