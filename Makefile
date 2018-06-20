.PHONY: clean All

All:
	@echo "----------Building project:[ 25-primos - Release ]----------"
	@cd "25-primos" && "$(MAKE)" -f  "25-primos.mk"
clean:
	@echo "----------Cleaning project:[ 25-primos - Release ]----------"
	@cd "25-primos" && "$(MAKE)" -f  "25-primos.mk" clean
