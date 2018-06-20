.PHONY: clean All

All:
	@echo "----------Building project:[ 21-dividir-sin-dividir - Debug ]----------"
	@cd "21-dividir-sin-dividir" && "$(MAKE)" -f  "21-dividir-sin-dividir.mk"
clean:
	@echo "----------Cleaning project:[ 21-dividir-sin-dividir - Debug ]----------"
	@cd "21-dividir-sin-dividir" && "$(MAKE)" -f  "21-dividir-sin-dividir.mk" clean
