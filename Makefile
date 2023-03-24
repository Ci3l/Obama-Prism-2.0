all:
	g++ -I src/include -L src/lib -o main main.cpp TextureManager.cpp Game.cpp Map.cpp GameObject.cpp Vector2D.cpp Collision.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image