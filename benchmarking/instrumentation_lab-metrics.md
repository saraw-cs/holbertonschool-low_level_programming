# Instrumentation Lab Results

TOTAL seconds: 0.000763
BUILD_DATA seconds: 0.000295
PROCESS seconds: 0.000328
REDUCE seconds: 0.000135

## Measurement Boundaries

- TOTAL: Measured from before build_dataset() until after reduce_checksum().
- BUILD_DATA: Measures only the build_dataset() function.
- PROCESS: Measures only the process_dataset() function.
- REDUCE: Measures only the reduce_checksum() function.

The total time includes all three phases and the small overhead between measurements.
