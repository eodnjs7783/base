cmake_minimum_required(VERSION 3.16)
project(CFE_UANT_APP C)

# ---------------------------------------------------------------------------
# 1) 외부 라이브러리 위치 - IMPORTED 타깃 정의
# ---------------------------------------------------------------------------
set(GSSB_ROOT  ${CMAKE_SOURCE_DIR}/submodules/libgscsp/lib/libgssb_client)
set(UTIL_ROOT  ${CMAKE_SOURCE_DIR}/submodules/libgscsp/lib/libutil)

add_library(libgssb_client STATIC IMPORTED)
set_target_properties(libgssb_client PROPERTIES
    IMPORTED_LOCATION "${GSSB_ROOT}/libgssb_client.a"
)

add_library(libutil STATIC IMPORTED)
set_target_properties(libutil PROPERTIES
    IMPORTED_LOCATION "${UTIL_ROOT}/libutil.a"
)

# ---------------------------------------------------------------------------
# 2) 애플리케이션 소스 목록
# ---------------------------------------------------------------------------
set(APP_SRC_FILES
    fsw/src/uant_app.c
    fsw/src/uant_app_cmds.c
    fsw/src/uant_app_utils.c
)

if (CFE_EDS_ENABLED_BUILD)
    list(APPEND APP_SRC_FILES fsw/src/uant_app_eds_dispatch.c)
else()
    list(APPEND APP_SRC_FILES fsw/src/uant_app_dispatch.c)
endif()

# ---------------------------------------------------------------------------
# 3) 모듈 생성
# ---------------------------------------------------------------------------
add_cfe_app(uant_app ${APP_SRC_FILES})

target_compile_options(uant_app PRIVATE -Wno-error=pedantic)

# ---------------------------------------------------------------------------
# 4) 공개 인클루드 디렉터리 (절대 경로 직접 지정)
# ---------------------------------------------------------------------------
target_include_directories(uant_app PUBLIC
    fsw/inc
    /home/ydw/fsw_bee-1000/FSW_Baseline_V2/submodules/libgscsp/lib/libgssb_client/include
    /home/ydw/fsw_bee-1000/FSW_Baseline_V2/submodules/libgscsp/lib/libutil/include
)

# ---------------------------------------------------------------------------
# 5) 링커 의존성
# ---------------------------------------------------------------------------
add_cfe_app_dependency(uant_app libgssb_client libutil)

# ---------------------------------------------------------------------------
# 6) 테이블 등록 (필요 시 주석 해제)
# ---------------------------------------------------------------------------
# add_cfe_tables(uant_app fsw/tables/uant_app_tbl.c)

# ---------------------------------------------------------------------------
# 7) 단위 테스트
# ---------------------------------------------------------------------------
if (ENABLE_UNIT_TESTS)
    add_subdirectory(unit-test)
endif()
