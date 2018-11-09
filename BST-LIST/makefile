hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/AgacDugum.o -c ./src/AgacDugum.cpp
	g++ -I ./include/ -o ./lib/listeDugum.o -c ./src/listeDugum.cpp
	g++ -I ./include/ -o ./lib/Islem.o -c ./src/Islem.cpp
	g++ -I ./include/ -o ./lib/YeniListe.o -c ./src/YeniListe.cpp
	g++ -I ./include/ -o ./lib/Agac.o -c ./src/Agac.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/agacDugum.o ./lib/listeDugum.o ./lib/Islem.o ./lib/Agac.o ./lib/YeniListe.o ./src/Test.cpp
	
calistir:
	./bin/Test