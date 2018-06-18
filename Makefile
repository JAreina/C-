.PHONY: clean All

All:
	@echo "----------Building project:[ 1-hola-mundo - Debug ]----------"
	@cd "1-hola-mundo" && "$(MAKE)" -f  "1-hola-mundo.mk"
clean:
	@echo "----------Cleaning project:[ 1-hola-mundo - Debug ]----------"
	@cd "1-hola-mundo" && "$(MAKE)" -f  "1-hola-mundo.mk" clean
