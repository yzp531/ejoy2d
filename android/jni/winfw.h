#ifndef ejoy2d_windows_fw_h
#define ejoy2d_windows_fw_h

#define WIDTH 1024
#define HEIGHT 768

#define TOUCH_BEGIN 0
#define TOUCH_END 1
#define TOUCH_MOVE 2

void ejoy2d_win_init(int width, int height, const char* folder);
void ejoy2d_win_frame();
void ejoy2d_win_update();
void ejoy2d_win_touch(int x, int y,int touch);
void ejoy2d_win_resume();

void set_font(const char *folder, const char* fontname);

#endif
