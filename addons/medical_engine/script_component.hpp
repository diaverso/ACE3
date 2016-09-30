#define COMPONENT medical_engine
#define COMPONENT_BEAUTIFIED Medical (Engine)
#include "\z\ace\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
#define CBA_DEBUG_SYNCHRONOUS
//#define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_MEDICAL_ENGINE
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MEDICAL_ENGINE
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MEDICAL_ENGINE
#endif

#include "\z\ace\addons\main\script_macros.hpp"

#include "script_macros_medical.hpp"

#define EMPTY_SOUND {"A3\Sounds_F\dummysound.wss",1,1}
#define NAMESPACE_NULL locationNull

#define PRELOAD_CLASS(class) \
    diag_log format["Starting preload for ""%1""",class];\
    [{\
        1 preloadObject _this;\
    }, {\
        diag_log format ["Preload done for ""%1""",_this];\
    }, class] call CBA_fnc_waitUntilAndExecute

#define DISABLE_VANILLA_SCREAMS
#define DISABLE_VANILLA_MOANS
#define DISABLE_VANILLA_HEARTBEAT
#define DISABLE_VANILLA_BLOOD_TEXTURES
#define DISABLE_VANILLA_DAMAGE_EFFECTS

#define PRIORITY_HEAD       3
#define PRIORITY_BODY       4
#define PRIORITY_LEFT_ARM   (1 + random 1)
#define PRIORITY_RIGHT_ARM  (1 + random 1)
#define PRIORITY_LEFT_LEG   (1 + random 1)
#define PRIORITY_RIGHT_LEG  (1 + random 1)

// don't change, these reflect hard coded engine behaviour
#define DAMAGED_MIN_THRESHOLD 0.495
#define PAIN_MAX_DAMAGE 0.345
#define LIMPING_MIN_DAMAGE 0.5
