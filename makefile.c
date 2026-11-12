
exe: main.o addrecor.o delete.o delete_node.o exit.o modify.o reverse.o save.o sort.o
        cc main.o addrecor.o delete.o delete_node.o exit.o modify.o reverse.o save.o sort.o -o exe
main.o:main.c
        cc -c main.c

addrecor.o:addrecor.c
        cc -c addrecor.c

delete.o:delete.c
        cc -c delete.c

delete_node.o:delete_node.c
        cc -c delete_node.c

exit.o:exit.c
        cc -c exit.c

modify.o:modify.c
        cc -c modify.c

reverse.o:reverse.c
        cc -c reverse.c

save.o:save.c
        cc -c save.c

sort.o:sort.c
        cc -c sort.c

