primer orden.png : grafica.py grafica.dat
	python grafica.py

grafica.dat: grafica.x
	./grafica.x > grafica.dat

grafica.x : a.cpp
	c++ a.cpp -o grafica.x
	
clean : 
	rm grafica.x grafica.dat primer orden.png