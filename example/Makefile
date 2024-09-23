cat1:cat1.c
	gcc cat1.c -o build/cat1

cat2:cat2.c
	gcc cat2.c -o cat2

fork1:fork1.c
	gcc fork1.c -o fork1
	./fork1

execvp1:execvp1.c EXEC.c
	gcc EXEC.c -o EXEC
	gcc execvp1.c -o execvp1
	./execvp1

fork_offset:fork_offset.c

.PNONY:clean
clean:
	find . -type f -executable -exec rm '{}' \;
