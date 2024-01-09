FROM gcc:latest

WORKDIR /usr/src/ProblemaMap22

COPY . .

RUN g++ -o ProblemaMap22 ProblemaMap22.cpp

CMD ["./ProblemaMap22"]