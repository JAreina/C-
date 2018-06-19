.PHONY: clean All

All:
	@echo "----------Building project:[ 10-variable-global-local - Debug ]----------"
	@cd "10-variable-global-local" && "$(MAKE)" -f  "10-variable-global-local.mk"
clean:
	@echo "----------Cleaning project:[ 10-variable-global-local - Debug ]----------"
	@cd "10-variable-global-local" && "$(MAKE)" -f  "10-variable-global-local.mk" clean
