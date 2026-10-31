.PHONY: all run clean

BUILD_DIR = build

all: $(BUILD_DIR)/Makefile
	$(MAKE) -C $(BUILD_DIR)

$(BUILD_DIR)/Makefile: Trem.pro
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && qmake ../Trem.pro

run: all
	./$(BUILD_DIR)/Trem

clean:
	if [ -f $(BUILD_DIR)/Makefile ]; then $(MAKE) -C $(BUILD_DIR) clean; fi
