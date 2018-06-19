.PHONY: clean All

All:
	@echo "----------Building project:[ 14-SWITCH - Debug ]----------"
	@cd "14-SWITCH" && "$(MAKE)" -f  "14-SWITCH.mk"
clean:
	@echo "----------Cleaning project:[ 14-SWITCH - Debug ]----------"
	@cd "14-SWITCH" && "$(MAKE)" -f  "14-SWITCH.mk" clean
