#ifndef _logicinternal_register_types_h
#define _logicinternal_register_types_h

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void initialize_runner_module(ModuleInitializationLevel p_level);
void uninitialize_runner_module(ModuleInitializationLevel p_level);
extern "C" GDExtensionBool GDE_EXPORT logic_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization);

#endif
