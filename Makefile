all:
	g++ Main/main.cpp Catalogo/catalogo.cpp CD/cd.cpp DVD/dvd.cpp Jogo/jogo.cpp Midia/midia.cpp

clean:
	rm -rf a.out Catalogo/catalogo.h.gch CD/cd.h.gch DVD/dvd.h.gch Jogo/jogo.h.gch Midia/midia.h.gch

