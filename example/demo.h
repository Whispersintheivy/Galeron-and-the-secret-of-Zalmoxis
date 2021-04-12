#ifndef DEMO_H
#define DEMO_H

#include "stdio.h"
#include "nanovg.h"
#include "nanosvg.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DEBUG_ONLY(x)

struct DemoData {
	int fontNormal, fontBold, fontIcons, fontEmoji;
	int images[12];
	NSVGimage *input_svg;
};
typedef struct DemoData DemoData;

int loadDemoData(NVGcontext* vg, DemoData* data);
void freeDemoData(NVGcontext* vg, DemoData* data);
void renderDemo(NVGcontext* vg, float mx, float my, float width, float height, float t, int blowup, DemoData* data);

void saveScreenShot(int w, int h, int premult, const char* name);

#ifdef __cplusplus
}
#endif

#endif // DEMO_H
