.PHONY: clean All

All:
	@echo "----------Building project:[ 38-union - Release ]----------"
	@cd "38-union" && "$(MAKE)" -f  "38-union.mk"
clean:
	@echo "----------Cleaning project:[ 38-union - Release ]----------"
	@cd "38-union" && "$(MAKE)" -f  "38-union.mk" clean
