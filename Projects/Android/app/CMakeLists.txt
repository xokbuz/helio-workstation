# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=21" "-DJUCE_ANDROID_GL_ES_VERSION_3_0=1" "-DJUCER_ANDROIDSTUDIO_6AB8437A=1" "-DJUCE_APP_VERSION=2.5" "-DJUCE_APP_VERSION_HEX=0x20500")

include_directories( AFTER
    "../../../ThirdParty/JUCE/modules/juce_audio_processors/format_types/VST3_SDK"
    "../../Projucer/JuceLibraryCode"
    "../../../ThirdParty/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
    include_directories( AFTER
        "../../Projucer/JuceLibraryCode"
        "../../../ThirdParty/JUCE/modules"
        "../../../ThirdParty/JUCE/modules/juce_audio_processors/format_types/VST3_SDK"
        "../../../ThirdParty/ASIO/common"
        "../../../Source"
        "../../../Source/Core"
        "../../../Source/Core/Audio"
        "../../../Source/Core/Audio/BuiltIn"
        "../../../Source/Core/Audio/Instruments"
        "../../../Source/Core/Audio/Monitoring"
        "../../../Source/Core/Audio/Transport"
        "../../../Source/Core/Configuration"
        "../../../Source/Core/Configuration/Models"
        "../../../Source/Core/Configuration/ResourceManagers"
        "../../../Source/Core/CommandPalette"
        "../../../Source/Core/Midi"
        "../../../Source/Core/Midi/Patterns"
        "../../../Source/Core/Midi/Sequences"
        "../../../Source/Core/Midi/Sequences/Events"
        "../../../Source/Core/Network"
        "../../../Source/Core/Network/Models"
        "../../../Source/Core/Network/Requests"
        "../../../Source/Core/Network/Services"
        "../../../Source/Core/Scripting"
        "../../../Source/Core/Serialization"
        "../../../Source/Core/Tree"
        "../../../Source/Core/Undo"
        "../../../Source/Core/Undo/Actions"
        "../../../Source/Core/VCS"
        "../../../Source/Core/VCS/DiffLogic"
        "../../../Source/Core/Workspace"
        "../../../Source/UI"
        "../../../Source/UI/Common"
        "../../../Source/UI/Common/AudioMonitors"
        "../../../Source/UI/Common/Origami"
        "../../../Source/UI/Dialogs"
        "../../../Source/UI/Headline"
        "../../../Source/UI/Input"
        "../../../Source/UI/Menus"
        "../../../Source/UI/Menus/Base"
        "../../../Source/UI/Menus/SelectionMenus"
        "../../../Source/UI/Pages/Instruments"
        "../../../Source/UI/Pages/Instruments/Editor"
        "../../../Source/UI/Pages/Project"
        "../../../Source/UI/Pages/Settings"
        "../../../Source/UI/Pages/VCS"
        "../../../Source/UI/Pages/Dashboard"
        "../../../Source/UI/Pages/Dashboard/Menu"
        "../../../Source/UI/Popups"
        "../../../Source/UI/Sequencer"
        "../../../Source/UI/Sequencer/Header"
        "../../../Source/UI/Sequencer/Helpers"
        "../../../Source/UI/Sequencer/MiniMaps/AnnotationsMap"
        "../../../Source/UI/Sequencer/MiniMaps/KeySignaturesMap"
        "../../../Source/UI/Sequencer/MiniMaps/LevelsMap"
        "../../../Source/UI/Sequencer/MiniMaps/PianoMap"
        "../../../Source/UI/Sequencer/MiniMaps/TimeSignaturesMap"
        "../../../Source/UI/Sequencer/PatternRoll"
        "../../../Source/UI/Sequencer/PatternRoll/ClipComponents"
        "../../../Source/UI/Sequencer/PatternRoll/ClipComponents/AutomationCurveClip"
        "../../../Source/UI/Sequencer/PatternRoll/ClipComponents/AutomationStepsClip"
        "../../../Source/UI/Sequencer/PatternRoll/ClipComponents/PianoClip"
        "../../../Source/UI/Sequencer/PianoRoll"
        "../../../Source/UI/Sequencer/Sidebars"
        "../../../Source/UI/Themes"
    )

ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
    include_directories( AFTER
        "../../Projucer/JuceLibraryCode"
        "../../../ThirdParty/JUCE/modules"
        "../../../ThirdParty/JUCE/modules/juce_audio_processors/format_types/VST3_SDK"
        "../../../ThirdParty/ASIO/common"
        "../../../Source"
        "../../../Source/Core"
        "../../../Source/Core/Audio"
        "../../../Source/Core/Audio/BuiltIn"
        "../../../Source/Core/Audio/Instruments"
        "../../../Source/Core/Audio/Monitoring"
        "../../../Source/Core/Audio/Transport"
        "../../../Source/Core/Configuration"
        "../../../Source/Core/Configuration/Models"
        "../../../Source/Core/Configuration/ResourceManagers"
        "../../../Source/Core/CommandPalette"
        "../../../Source/Core/Midi"
        "../../../Source/Core/Midi/Patterns"
        "../../../Source/Core/Midi/Sequences"
        "../../../Source/Core/Midi/Sequences/Events"
        "../../../Source/Core/Network"
        "../../../Source/Core/Network/Models"
        "../../../Source/Core/Network/Requests"
        "../../../Source/Core/Network/Services"
        "../../../Source/Core/Scripting"
        "../../../Source/Core/Serialization"
        "../../../Source/Core/Tree"
        "../../../Source/Core/Undo"
        "../../../Source/Core/Undo/Actions"
        "../../../Source/Core/VCS"
        "../../../Source/Core/VCS/DiffLogic"
        "../../../Source/Core/Workspace"
        "../../../Source/UI"
        "../../../Source/UI/Common"
        "../../../Source/UI/Common/AudioMonitors"
        "../../../Source/UI/Common/Origami"
        "../../../Source/UI/Dialogs"
        "../../../Source/UI/Headline"
        "../../../Source/UI/Input"
        "../../../Source/UI/Menus"
        "../../../Source/UI/Menus/Base"
        "../../../Source/UI/Menus/SelectionMenus"
        "../../../Source/UI/Pages/Instruments"
        "../../../Source/UI/Pages/Instruments/Editor"
        "../../../Source/UI/Pages/Project"
        "../../../Source/UI/Pages/Settings"
        "../../../Source/UI/Pages/VCS"
        "../../../Source/UI/Pages/Dashboard"
        "../../../Source/UI/Pages/Dashboard/Menu"
        "../../../Source/UI/Popups"
        "../../../Source/UI/Sequencer"
        "../../../Source/UI/Sequencer/Header"
        "../../../Source/UI/Sequencer/Helpers"
        "../../../Source/UI/Sequencer/MiniMaps/AnnotationsMap"
        "../../../Source/UI/Sequencer/MiniMaps/KeySignaturesMap"
        "../../../Source/UI/Sequencer/MiniMaps/LevelsMap"
        "../../../Source/UI/Sequencer/MiniMaps/PianoMap"
        "../../../Source/UI/Sequencer/MiniMaps/TimeSignaturesMap"
        "../../../Source/UI/Sequencer/PatternRoll"
        "../../../Source/UI/Sequencer/PatternRoll/ClipComponents"
        "../../../Source/UI/Sequencer/PatternRoll/ClipComponents/AutomationCurveClip"
        "../../../Source/UI/Sequencer/PatternRoll/ClipComponents/AutomationStepsClip"
        "../../../Source/UI/Sequencer/PatternRoll/ClipComponents/PianoClip"
        "../../../Source/UI/Sequencer/PianoRoll"
        "../../../Source/UI/Sequencer/Sidebars"
        "../../../Source/UI/Themes"
    )

ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( ${BINARY_NAME}

    SHARED

    "../../Projucer/JuceLibraryCode/AppConfig.h"
    "../../Projucer/JuceLibraryCode/BinaryData.cpp"
    "../../Projucer/JuceLibraryCode/BinaryData.h"
    "../../Projucer/JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_core.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_data_structures.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_events.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_graphics.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../Projucer/JuceLibraryCode/include_juce_opengl.cpp"
    "../../Projucer/JuceLibraryCode/JuceHeader.h"
    "../../Projucer/JuceLibraryCode/UnityBuild.cpp"
)

set_source_files_properties("../../Projucer/JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../Projucer/JuceLibraryCode/BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../Projucer/JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv3 "GLESv3")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv3}
    ${egl}
    "cpufeatures"
)
