# Uporabi osnovni image z g++ in CMake
FROM ubuntu:latest

# Posodobi sistem in namesti potrebna orodja
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    libgtest-dev \
    g++

# Nastavi delovni direktorij v kontejnerju
WORKDIR /app

# Kopiraj projektne datoteke v kontejner
COPY . .

# Zgradi testni program
RUN g++ -std=c++11 tests/test.cpp -o test_exec

# Zgradi glavni program
RUN g++ -std=c++11 Vaja1.cpp -o main_exec

# Privzeti ukaz ob zagonu kontejnerja (npr. glavni program)
CMD ["./main_exec"]
