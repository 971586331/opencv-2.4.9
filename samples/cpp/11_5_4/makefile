
CXX ?= g++

CXXFLAGS += -c -Wall $(shell pkg-config --cflags opencv)
LDFLAGS += $(shell pkg-config --libs --static opencv)

$(info "LDFLAGS = " $(LDFLAGS) )

CXXFLAGS += -I/usr/local/opencv-2.4.9/liclude \
			-L/usr/local/opencv-2.4.9/lib

all: 11_5_4

11_5_4: 11_5_4.o; $(CXX) $< -o $@ $(LDFLAGS)

%.o: %.cpp; $(CXX) $< -o $@ $(CXXFLAGS)

clean: ; rm -f 11_5_4.o 11_5_4
