.PHONY: clean All

All:
	@echo "----------Building project:[ 31-string-6-operaciones-predefinidas - Release ]----------"
	@cd "31-string-6-operaciones-predefinidas" && "$(MAKE)" -f  "31-string-6-operaciones-predefinidas.mk"
clean:
	@echo "----------Cleaning project:[ 31-string-6-operaciones-predefinidas - Release ]----------"
	@cd "31-string-6-operaciones-predefinidas" && "$(MAKE)" -f  "31-string-6-operaciones-predefinidas.mk" clean
