.PHONY: clean All

All:
	@echo "----------Building project:[ 13-IF-ELSE-IF - Debug ]----------"
	@cd "13-IF-ELSE-IF" && "$(MAKE)" -f  "13-IF-ELSE-IF.mk"
clean:
	@echo "----------Cleaning project:[ 13-IF-ELSE-IF - Debug ]----------"
	@cd "13-IF-ELSE-IF" && "$(MAKE)" -f  "13-IF-ELSE-IF.mk" clean
