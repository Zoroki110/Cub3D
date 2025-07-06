# Webserv

## 📝 Project Overview

**Webserv** is a custom HTTP/1.1 server written in **C++98**, built as part of the 42 School curriculum. It supports non-blocking I/O, full request parsing, static file serving, CGI execution, routing via a flexible configuration file, and more.

---

## 🎯 Features

- ✅ **Non-Blocking I/O** using `poll()` (or `epoll` / `kqueue`)  
- ✅ **HTTP/1.1 Compliance**: persistent connections, chunked transfer, correct status codes  
- ✅ **Config File** (NGINX-like syntax) for vhosts, ports, error pages, limits, routes  
- ✅ **Static Content** (HTML, CSS, JS, images, etc.)  
- ✅ **CGI Support** (PHP, Python, etc.)  
- ✅ **File Uploads** with `multipart/form-data` handling  
- ✅ **Routing**: per-location `root`/`alias`, methods, autoindex, index files, redirects  
- ✅ **Methods**: `GET`, `POST`, `DELETE`  
- ✅ **Error Handling**: default & custom 4xx/5xx pages  
- ✅ **Graceful Shutdown** on `SIGINT` / `SIGQUIT`  
- ✅ **Virtual Hosts** & multi-port support  

---

## 🚀 Getting Started

### Prerequisites

- **C++98** compiler (e.g. `g++`)  
- **make**  
- UNIX-like environment (Linux/macOS)

### Installation

```bash
# Clone
git clone git@github.com:Zoroki110/Webserv.git
cd Webserv

# Build
make
