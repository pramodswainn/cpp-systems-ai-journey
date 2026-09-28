# GPU and CUDA

## Learning checklist
- [ ] GPU vs CPU architecture, SIMT, warps/blocks/grids
- [ ] CUDA programming model: kernels, host vs device memory
- [ ] Memory hierarchy: global / shared / registers
- [ ] Memory coalescing, shared-memory tiling
- [ ] Quantization (INT8/FP8), kernel fusion, batching
- [ ] TensorRT: what it does end to end

## Layout
- `notes/`: your notes in your own words
- `kernels/`: vector add, matmul, optimized matmul (with benchmark numbers)
- `projects/`: link to the flagship TensorRT repo

## Flagship project
TensorRT inference optimization: _(link to repo once created)_

## Free GPU options
Google Colab (T4), Kaggle Notebooks (P100/T4), Lightning.ai Studios. Note: `.cu` files need `nvcc`, so the CI in this repo builds only CPU code; keep kernel benchmarks documented in READMEs.
