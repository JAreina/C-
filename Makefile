.PHONY: clean All

All:
	@echo "----------Building project:[ 4-sobrecarga-de-funciones - Debug ]----------"
	@cd "4-sobrecarga-de-funciones" && "$(MAKE)" -f  "4-sobrecarga-de-funciones.mk"
clean:
	@echo "----------Cleaning project:[ 4-sobrecarga-de-funciones - Debug ]----------"
	@cd "4-sobrecarga-de-funciones" && "$(MAKE)" -f  "4-sobrecarga-de-funciones.mk" clean
