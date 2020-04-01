.PHONY: clean All

All:
	@echo "----------Building project:[ PEC_3 - Debug ]----------"
	@cd "PEC_3" && "$(MAKE)" -f  "PEC_3.mk"
clean:
	@echo "----------Cleaning project:[ PEC_3 - Debug ]----------"
	@cd "PEC_3" && "$(MAKE)" -f  "PEC_3.mk" clean
