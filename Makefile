.PHONY: compile
compile: $(object)
	@clear
	@gcc -o main main.c -lm && ./main
	@echo 