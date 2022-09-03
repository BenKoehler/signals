add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/signals EXCLUDE_FROM_ALL)
ConfigureCompileOptions(signals INTERFACE)

function(link_signals target MOD)
    target_link_libraries(${target} ${MOD} signals)
endfunction()
