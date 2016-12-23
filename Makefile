BUILD = obj
all:
	mkdir -p $(BUILD)
	cd $(BUILD) && cmake ../
	cd $(BUILD) && make -j4
run:all
	$(BUILD)/fsmain/fs.wator.app fs_mount

