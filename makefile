pos.png vel.png phase.png:tray.txt
	python NC_graph.py


tray.txt:
	c++ NC_gravity.cpp
	./a.out>tray.txt
