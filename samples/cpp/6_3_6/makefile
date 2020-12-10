
CXX ?= g++

CXXFLAGS += -c -Wall $(shell pkg-config --cflags opencv)
LDFLAGS += $(shell pkg-config --libs --static opencv)

$(info "LDFLAGS = " $(LDFLAGS) )

CXXFLAGS += -I/usr/local/opencv-2.4.9/liclude \
			-L/usr/local/opencv-2.4.9/lib

all: 6_3_6

6_3_6: 6_3_6.o; $(CXX) $< -o $@ $(LDFLAGS)

%.o: %.cpp; $(CXX) $< -o $@ $(CXXFLAGS)

clean: ; rm -f 6_3_6.o 6_3_6
