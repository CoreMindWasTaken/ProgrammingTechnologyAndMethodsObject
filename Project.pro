TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    animal_destructor.cpp \
    animal_in.cpp \
    animal_length_name.cpp \
    animal_out.cpp \
    animal_compare.cpp \
    beast_destructor.cpp \
    bird_destructor.cpp \
    bird_in.cpp \
    bird_out.cpp \
    container_clear.cpp \
    container_in.cpp \
    container_init.cpp \
    container_out.cpp \
    container_sort.cpp \
    fish_destructor.cpp \
    fish_in.cpp \
    fish_out.cpp \
    node_in.cpp \
    node_out.cpp \
    animal_out_fish.cpp \
    fish_out_fish.cpp \
    container_out_fish.cpp \
    beast_in.cpp \
    beast_out.cpp


HEADERS += \
    animal_atd.h \
    bird_atd.h \
    container_atd.h \
    fish_atd.h \
    node_atd.h \
    beast_atd.h
