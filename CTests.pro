TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

#SOURCES += main.c
#SOURCES += main2.c
#SOURCES +=TestStructSizes.c
#SOURCES +=fileprint.c
#SOURCES +=ceasarExtension.c
#SOURCES +=encodeDecode.c
#SOURCES +=primeNumbers.c
SOURCES +=today.c


LIBS += -L ./ -lSet

OTHER_FILES += \
    sourceToEncode.txt \
    sourceToDecode.txt \
    destination.txt

