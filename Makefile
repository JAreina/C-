.PHONY: clean All

All:
	@echo "----------Building project:[ 40-asignacion-memoria-dinamicamnt-STRUCT - Release ]----------"
	@cd "40-asignacion-memoria-dinamicamnt-STRUCT" && "$(MAKE)" -f  "40-asignacion-memoria-dinamicamnt-STRUCT.mk"
clean:
	@echo "----------Cleaning project:[ 40-asignacion-memoria-dinamicamnt-STRUCT - Release ]----------"
	@cd "40-asignacion-memoria-dinamicamnt-STRUCT" && "$(MAKE)" -f  "40-asignacion-memoria-dinamicamnt-STRUCT.mk" clean
