.PHONY: compile
compile:
	@clear
	@clang main.c -o main && ./main 
	@echo 
	@echo Press no key to continue.