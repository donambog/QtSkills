# Worker example
add_executable(worker_example 
    worker.cpp
    worker.h
    worker_main.cpp
)
target_link_libraries(worker_example Qt5::Core)
