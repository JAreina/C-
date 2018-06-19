.PHONY: clean All

All:
	@echo "----------Building project:[ 11-IF - Debug ]----------"
	@cd "11-IF" && "$(MAKE)" -f  "11-IF.mk"
clean:
	@echo "----------Cleaning project:[ 11-IF - Debug ]----------"
	@cd "11-IF" && "$(MAKE)" -f  "11-IF.mk" clean
