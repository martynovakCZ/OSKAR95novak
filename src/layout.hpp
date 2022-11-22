// clang-format off

// AUTOGENERATED FILE, DO NOT EDIT
// Generated by https://roboticsbrno.github.io/Esp32-RBGridUI-Designer/
// Layout: {"cols":12,"rows":18,"enableSplitting":true,"widgets":[{"uuid":49903,"type":"Slider","state":{"id":"Slider1","x":1,"y":5.5,"w":10,"h":3,"css":{"vertical":""},"color":"#008000","fontSize":16,"min":-100,"max":100,"value":0,"precision":1,"showValue":true}},{"uuid":45886,"type":"Slider","state":{"id":"Slider2","x":1,"y":9.5,"w":10,"h":3,"css":{},"color":"#008000","fontSize":16,"min":-100,"max":100,"value":0,"precision":1,"showValue":true}},{"uuid":19796,"type":"Slider","state":{"id":"Slider21","x":1,"y":13.5,"w":10,"h":3,"css":{},"color":"#008000","fontSize":16,"min":-100,"max":100,"value":0,"precision":1,"showValue":true}},{"uuid":50903,"type":"Slider","state":{"id":"Slider22","x":1,"y":1.5,"w":10,"h":3,"css":{},"color":"#008000","fontSize":16,"min":-100,"max":100,"value":0,"precision":1,"showValue":true}}]}

// Usage: include this file, where needed, and in *one* .cpp file,
// define also GRIDUI_LAYOUT_DEFINITION just before the layout like this:
//
//    #define GRIDUI_LAYOUT_DEFINITION
//    #include "layout.h"
//    using namespace gridui;
//
// The layout.h should also be the last included header. Then, in your code:
//
//    auto builder = Layout.begin();
//    builder.Button1.onPress([](Button&) { ... })
//    ...
//    builder.commit();

#pragma once

#include <esp_log.h>
#include "gridui.h"

namespace gridui {

#ifndef RB_GRIDUI_VERSION
#define RB_GRIDUI_VERSION 0x040000
#endif

static_assert(RB_GRIDUI_VERSION >= 0x040000,
    "Your RBGridUi library version is too low for this layout, please update to 040000.");

class _Layout;

namespace builder {
class _LayoutBuilder {
    friend class gridui::_Layout;

    _LayoutBuilder() :
        Slider1(
            UI.slider(1, 5.5, 10, 3, 49903)
                .min(2.5)
                .max(-2.5)
        ),
        Slider2(
            UI.slider(1, 9.5, 10, 3, 45886)
                .min(2.5)
                .max(-2.5)
        ),
        Slider3(
            UI.slider(1, 13.5, 10, 3, 19796)
                .min(2.5)
                .max(-2.5)
        ),
        Slider4(
            UI.slider(1, 1.5, 10, 3, 50903)
                .min(2.5)
                .max(-2.5)
        )
    {
    }

public:
    void commit();

    Slider& Slider1;
    Slider& Slider2;
    Slider& Slider3;
    Slider& Slider4;
};

}; // namespace builder

class _Layout {
    friend class builder::_LayoutBuilder;
public:
    _Layout() {}

    builder::_LayoutBuilder begin() {
        static bool called = false;
        if(called) {
            ESP_LOGE("GridUILayout", "Layout.begin() was called more than once, this is an error!");
        }
        called = true;
        return builder::_LayoutBuilder();
    }

    Slider Slider1;
    Slider Slider2;
    Slider Slider3;
    Slider Slider4;
};

extern _Layout Layout;
#ifdef GRIDUI_LAYOUT_DEFINITION
_Layout Layout;
#endif

namespace builder {

void _LayoutBuilder::commit() {
    Layout.Slider1 = Slider1.finish();
    Layout.Slider2 = Slider2.finish();
    Layout.Slider3 = Slider3.finish();
    Layout.Slider4 = Slider4.finish();
    UI.commit();
}

};

};