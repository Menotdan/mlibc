
#ifndef _UNISTD_H
#define _UNISTD_H

#define _POSIX_VERSION 200809L
#define _POSIX2_VERSION 200809L
#define _XOPEN_VERSION 700

// MISSING: _POSIX and _XOPEN feature macros
// MISSING: _POSIX_TIMESTAMP_RESOLUTION and _POSIX2_SYMLINKS

#define F_OK 1
#define R_OK 2
#define W_OK 4
#define X_OK 8

// MISSING: _CS macros

// MISSING: SEEK macros from stdio.h

#define F_LOCK 1
#define F_TEST 2
#define F_TLOCK 3
#define F_ULOCK 4

// MISSING: _PC macros
// MISSING: _SC macros

#define STDERR_FILENO 2
#define STDIN_FILENO 0
#define STDOUT_FILENO 1

// MISSING: _POSIX_VDISABLE

#include <mlibc/size_t.h>
#include <mlibc/ssize_t.h>
#include <mlibc/uid_t.h>
#include <mlibc/gid_t.h>
#include <mlibc/off_t.h>
#include <mlibc/pid_t.h>

// MISSING: intptr_t

int access(const char *path, int mode);
unsigned int alarm(unsigned int seconds);
int chdir(const char *path);
int chown(const char *path, uid_t uid, gid_t gid);
int close(int fd);
ssize_t confstr(int, char *, size_t);
char *crypt(const char *, const char *);
int dup(int fd);
int dup2(int src_fd, int dest_fd);
void _exit(int status);
void encrypt(char block[64], int flags);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char *const []);
int execve(const char *, char *const [], char *const []);
int execvp(const char *, char *const[]);
int faccessat(int, const char *, int, int);
int fchdir(int fd);
int fchown(int fd, uid_t uid, gid_t gid, int mode);
int fchownat(int fd, const char *path, uid_t uid, gid_t gid, int flags);
int fdatasync(int);
int fexecve(int, char *const [], char *const []);
pid_t fork(void);
long fpathconf(int, int);
int fsync(int);
int ftruncate(int, off_t);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);
int getgroups(int, gid_t []);
long gethostid(void);
int gethostname(char *, size_t);
char *getlogin(void);
int getlogin_r(char *, size_t);
int getopt(int, char *const [], const char *);
pid_t getpgid(pid_t);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
pid_t getsid(pid_t);
uid_t getuid(void);
int isatty(int fd);
int lchown(const char *path, uid_t uid, gid_t gid);
int link(const char *, const char *);
int linkat(int, const char *, int, const char *, int);
int lockf(int, int, off_t);
off_t lseek(int, off_t, int);
int nice(int);
long pathconf(const char *, int);
int pause(void);
int pipe(int [2]);
ssize_t pread(int, void *, size_t, off_t);
ssize_t pwrite(int, const void *, size_t, off_t);
ssize_t read(int, void *, size_t);
ssize_t readlink(const char *__restrict, char *__restrict, size_t);
ssize_t readlinkat(int, const char *__restrict, char *__restrict, size_t);
int rmdir(const char *);
int setegid(gid_t);
int seteuid(uid_t);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setpgrp(void);
int setregid(gid_t, gid_t);
int setreuid(uid_t, uid_t);
pid_t setsid(void);
int setuid(uid_t);
unsigned int sleep(unsigned int);
void swab(const void *__restrict, void *__restrict, ssize_t);
int symlink(const char *, const char *);
int symlinkat(const char *, int, const char *);
void sync(void);
unsigned long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
int truncate(const char *, off_t);
char *ttyname(int);
int ttyname_r(int, char *, size_t);
int unlink(const char *);
int unlinkat(int, const char *, int);
ssize_t write(int, const void *, size_t);

// MISSING: optarg etc.

#endif // _UNISTD_H
