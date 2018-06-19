.PHONY: clean All

All:
	@echo "----------Building project:[ 12-IF-MAYOR - Debug ]----------"
	@cd "12-IF-MAYOR" && "$(MAKE)" -f  "12-IF-MAYOR.mk"
clean:
	@echo "----------Cleaning project:[ 12-IF-MAYOR - Debug ]----------"
	@cd "12-IF-MAYOR" && "$(MAKE)" -f  "12-IF-MAYOR.mk" clean
