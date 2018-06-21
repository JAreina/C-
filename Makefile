.PHONY: clean All

All:
	@echo "----------Building project:[ 35-string-10-reemplazar-substring - Release ]----------"
	@cd "35-string-10-reemplazar-substring" && "$(MAKE)" -f  "35-string-10-reemplazar-substring.mk"
clean:
	@echo "----------Cleaning project:[ 35-string-10-reemplazar-substring - Release ]----------"
	@cd "35-string-10-reemplazar-substring" && "$(MAKE)" -f  "35-string-10-reemplazar-substring.mk" clean
