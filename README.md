# cpp-systems-ai-journey

![CI](https://github.com/pramodswainn/cpp-systems-ai-journey/actions/workflows/ci.yml/badge.svg)

Senior C++ engineer (9+ years: real-time, telecom, automotive, avionics). This repo is my public learning log: interview prep, plus hands-on work at the intersection of C++, GPU/CUDA, and AI systems.

**Targeting:** Senior C++ / systems software / backend, and AI-infrastructure-adjacent roles.

## Flagship projects (separate repos)
| Project | Status | Link |
|---|---|---|
| TensorRT inference optimization | Planned | _(add link)_ |
| MCP server in C++ | Planned | _(add link)_ |

## Progress tracker
### AI
- [ ] GPU / CUDA: [ai/gpu-cuda](ai/gpu-cuda)
- [ ] GenAI / Agentic AI: [ai/genai-agents](ai/genai-agents)

### Interview prep
- [ ] C++: [interview-prep/cpp](interview-prep/cpp)
- [ ] DSA: [interview-prep/dsa](interview-prep/dsa)
- [ ] LLD: [interview-prep/lld](interview-prep/lld)
- [ ] HLD: [interview-prep/hld](interview-prep/hld)
- [ ] OS: [interview-prep/os](interview-prep/os)
- [ ] Networking: [interview-prep/networking](interview-prep/networking)

Weekly log: [PROGRESS.md](PROGRESS.md)

## Build and test
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel
ctest --test-dir build --output-on-failure
```
Requires CMake 3.16+ and a C++17 compiler. GoogleTest is fetched automatically.

## Repo layout
```
ai/                 GPU/CUDA and GenAI/agents
interview-prep/     cpp, dsa, lld, hld, os, networking
PROGRESS.md         weekly log
```

## Contact
[LinkedIn](https://linkedin.com/in/pramod-swain/)
