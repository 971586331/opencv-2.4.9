
CXX ?= g++

CXXFLAGS += -c -Wall $(shell pkg-config --cflags opencv)
LDFLAGS += $(shell pkg-config --libs --static opencv)

$(info "LDFLAGS = " $(LDFLAGS) )

CXXFLAGS += -I/usr/local/opencv-2.4.9/liclude \
			-L/usr/local/opencv-2.4.9/lib

all: 9_4_7

9_4_7: 9_4_7.o; $(CXX) $< -o $@ $(LDFLAGS)

%.o: %.cpp; $(CXX) $< -o $@ $(CXXFLAGS)

clean: ; rm -f 9_4_7.o 9_4_7
