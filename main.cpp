
//-- SOKOL ----------------------------
#define SOKOL_GLCORE33 1
#define SOKOL_APP_IMPL 1
#include "deps/sokol_app.h"
//---------------------------- SOKOL --

#include "deps/glad.h"

void onFrame() {
    static unsigned char c = 0;
    glClearColor(c/255.0f, c/255.0f, c/255.0f, 1.0f);
    c++;
    glClear(GL_COLOR_BUFFER_BIT);
}

void onInit() {
    gladLoadGL();
}

sapp_desc sokol_main(int argc, char **argv) {
    sapp_desc app = {};
    app.width = 800;
    app.height = 600;
    app.frame_cb = onFrame;
    app.init_cb = onInit;
    return app;
}
