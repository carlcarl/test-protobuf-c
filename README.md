protobuf-c example
==================


## Requirement Installation

    sudo apt-get install pkg-config make
	wget https://protobuf.googlecode.com/files/protobuf-2.5.0.tar.gz
	tar -xf protobuf-2.5.0.tar.gz
	cd protobuf-2.5.0
	./configure
	make
	sudo make install

	cd ..
	wget https://github.com/protobuf-c/protobuf-c/releases/download/v1.0.0-rc1/protobuf-c-1.0.0-rc1.tar.gz
	tar -xf protobuf-c-1.0.0-rc1.tar.gz
	cd protobuf-c-1.0.0-rc1
	./configure
	make
	sudo make install
	

## Usage
Edit `example.proto` file to whatever you want and then enter `make`.

`make` will produce new `example.pb-c.h` and `example.pb-c.c` files and then compile the code to `a.out`. 
Execuse `./a.out` will run the program.


