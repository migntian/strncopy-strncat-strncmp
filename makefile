.PHONY:clean
main:my_strncmp.c
	gcc -o $@ $^
clean:
	rm main
