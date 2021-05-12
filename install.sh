apt-get update && apt-get install -y cmake git wget graphviz flex build-essential wget automake libtool autopoint graphviz

wget https://ftp.gnu.org/gnu/bison/bison-3.5.2.tar.gz && tar -zxvf bison-3.5.2.tar.gz
cd bison-3.5.2 && ./configure && make -j9 && make install && cd ..
rm -rf bison
