.PHONY: clean All

All:
	@echo "----------Building project:[ 18-DO-WHILE - Debug ]----------"
	@cd "18-DO-WHILE" && "$(MAKE)" -f  "18-DO-WHILE.mk"
clean:
	@echo "----------Cleaning project:[ 18-DO-WHILE - Debug ]----------"
	@cd "18-DO-WHILE" && "$(MAKE)" -f  "18-DO-WHILE.mk" clean
