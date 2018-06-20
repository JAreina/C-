.PHONY: clean All

All:
	@echo "----------Building project:[ 20-FACTORIAL - Debug ]----------"
	@cd "20-FACTORIAL" && "$(MAKE)" -f  "20-FACTORIAL.mk"
clean:
	@echo "----------Cleaning project:[ 20-FACTORIAL - Debug ]----------"
	@cd "20-FACTORIAL" && "$(MAKE)" -f  "20-FACTORIAL.mk" clean
