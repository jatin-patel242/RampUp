//Steps:

protoc --cpp_out=. projectmanagement.proto 

gcc -shared -o libhello.so -fPIC amit.cpp projectmanagement.pb.cc

g++ -std=c++17 -L/scratch/Protobuf Protobuf_Sample.cpp projectmanagement.pb.cc -o answer2 `pkg-config  --libs protobuf` -lhello

./answer2
