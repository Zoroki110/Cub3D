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

### Usage

```bash
# Run with default config
./webserv
# Or specify a config file
./webserv configs/example_site.conf
```
Open your browser at http://<host>:<port> (default: 127.0.0.1:8080)

## 🛠 Built-in Commands

Minishell implements several built-in commands:

- `echo` - Print text to the terminal
- `cd` - Change the current directory
- `pwd` - Print working directory
- `export` - Set environment variables
- `unset` - Unset environment variables
- `env` - Print the environment variables
- `exit` - Exit the shell

## 🏗️ Project Structure

```
minishell/
│── src/
│   ├── main.c
│   ├── parser.c
│   ├── executor.c
│   ├── builtins.c
│   ├── signals.c
│── includes/
│   ├── minishell.h
│── libft/
│── Makefile
│── README.md
```

## 🔧 Features in Detail

### 🔹 Command Execution

Minishell supports execution of both built-in and external commands, managing child processes using `fork()` and `execve()`.

### 🔹 Redirections & Pipes

Supports input and output redirections (`<`, `>`, `>>`), and command piping (`|`).

### 🔹 Heredoc (`<<`)

Reads input until a specified delimiter is found.

### 🔹 Signal Handling

Handles `SIGINT` (`Ctrl+C`), `SIGQUIT` (`Ctrl+\`), and `EOF` (`Ctrl+D`).


## 🏆 Acknowledgments
This project was completed as part of the **42 School** curriculum.
</br>
Special thanks [Simon](https://github.com/Simonnawara) for this group project.



✨ Happy Shell Scripting! 🚀