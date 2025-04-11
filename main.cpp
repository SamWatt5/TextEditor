#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int main() {
	Fl_Window* window = new Fl_Window(400, 300, "Hello World");
	Fl_Box* box = new Fl_Box(0, 0, 400, 300, "Hello, World!");
	box->labelsize(36);
	box->labeltype(FL_SHADOW_LABEL);
	window->resizable(box);
	window->end();
	window->show();
	return Fl::run();
}