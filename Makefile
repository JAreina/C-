.PHONY: clean All

All:
	@echo "----------Building project:[ 16-WHILE-2 - Debug ]----------"
	@cd "16-WHILE-2" && "$(MAKE)" -f  "16-WHILE-2.mk"
clean:
	@echo "----------Cleaning project:[ 16-WHILE-2 - Debug ]----------"
	@cd "16-WHILE-2" && "$(MAKE)" -f  "16-WHILE-2.mk" clean
