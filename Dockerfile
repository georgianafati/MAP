FROM gcc:latest

WORKDIR /usr/src/pbreg

COPY . .

RUN g++ -o pbreg ProblemaMap22.cpp

CMD ["./pbreg"]