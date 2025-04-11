#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Box.H>

int main() {
	int width = 400;
	int height = 300;
	Fl_Window* window = new Fl_Window(width, height, "Hello World");
	Fl_Multiline_Input* multilineInput = new Fl_Multiline_Input(0, 0, width, height, "Hello World! :)");
	multilineInput->textfont(FL_COURIER);
	multilineInput->textsize(16);
	multilineInput->textcolor(FL_BLACK);
	window->end();
	window->show();
	return Fl::run();
}