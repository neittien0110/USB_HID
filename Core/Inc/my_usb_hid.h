/** Cấu trúc dữ liệu cho mouse, để đóng gói thành gói tin HID*/
typedef struct {
	uint8_t button;
	int8_t mouse_x;
	int8_t mouse_y;
	int8_t wheel;
} mouseHID;
