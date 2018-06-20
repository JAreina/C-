.PHONY: clean All

All:
	@echo "----------Building project:[ 23-PROTOTIPOS - Debug ]----------"
	@cd "23-PROTOTIPOS" && "$(MAKE)" -f  "23-PROTOTIPOS.mk"
clean:
	@echo "----------Cleaning project:[ 23-PROTOTIPOS - Debug ]----------"
	@cd "23-PROTOTIPOS" && "$(MAKE)" -f  "23-PROTOTIPOS.mk" clean
