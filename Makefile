LIB_SRCS = 	FastSERN.c connected.c edgeprobfuncs.c nodegen.c\
		binomial.c edgelist.c metrics.c uniform.c

LIB_OBJS = $(LIB_SRCS:.c=.o)
LIB_A = libsern.a

all:$(LIB_A)

# Build static library
$(LIB_A): $(LIB_OBJS)
	rm -f $(LIB_A)
	ar -crs $(LIB_A) $(LIB_OBJS)

clean:
	rm -f $(LIB_OBJS) $(LIB_A)

.SUFFIXES: .c .o .lo

# Standard object building
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@