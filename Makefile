.PHONY: clean All

All:
	@echo "----------Building project:[ 9-control-de-estado-flujo-cin - Debug ]----------"
	@cd "9-control-de-estado-flujo-cin" && "$(MAKE)" -f  "9-control-de-estado-flujo-cin.mk"
clean:
	@echo "----------Cleaning project:[ 9-control-de-estado-flujo-cin - Debug ]----------"
	@cd "9-control-de-estado-flujo-cin" && "$(MAKE)" -f  "9-control-de-estado-flujo-cin.mk" clean
