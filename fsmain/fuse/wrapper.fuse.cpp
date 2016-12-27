#define FUSE_USE_VERSION 30
extern "C" {
#include <fuse.h>
}

static int wrapp_getattr (const char *, struct stat *, struct fuse_file_info *fi);
static int wrapp_readlink(const char *, char *, size_t);
static int wrapp_mknod(const char *, mode_t, dev_t);
static int wrapp_mkdir(const char *, mode_t);
static int wrapp_unlink(const char *);
static int wrapp_rmdir(const char *);
static int wrapp_symlink(const char *, const char *);
static int wrapp_rename(const char *, const char *, unsigned int);
static int wrapp_link(const char *, const char *);
static int wrapp_chmod(const char *, mode_t, struct fuse_file_info *fi);
static int wrapp_chown(const char *, uid_t, gid_t, struct fuse_file_info *fi);
static int wrapp_truncate(const char *, off_t, struct fuse_file_info *fi);
static int wrapp_open(const char *, struct fuse_file_info *);
static int wrapp_read(const char *, char *, size_t, off_t,struct fuse_file_info *);
static int wrapp_write(const char *, const char *, size_t, off_t,struct fuse_file_info *);
static int wrapp_statfs(const char *, struct statvfs *);
static int wrapp_flush(const char *, struct fuse_file_info *);
static int wrapp_release(const char *, struct fuse_file_info *);
static int wrapp_fsync(const char *, int, struct fuse_file_info *);
static int wrapp_setxattr(const char *, const char *, const char *, size_t, int);
static int wrapp_getxattr(const char *, const char *, char *, size_t);
static int wrapp_listxattr(const char *, char *, size_t);
static int wrapp_removexattr(const char *, const char *);
static int wrapp_opendir(const char *, struct fuse_file_info *);
static int wrapp_readdir(const char *, void *, fuse_fill_dir_t, off_t,struct fuse_file_info *, enum fuse_readdir_flags);
static int wrapp_releasedir(const char *, struct fuse_file_info *);
static int wrapp_fsyncdir(const char *, int, struct fuse_file_info *);
static void* wrapp_init(struct fuse_conn_info *conn,struct fuse_config *cfg);
static void wrapp_destroy(void *);
static int wrapp_access(const char *, int);
static int wrapp_create(const char *, mode_t, struct fuse_file_info *);
static int wrapp_lock(const char *, struct fuse_file_info *, int cmd,struct flock *);
static int wrapp_utimens(const char *, const struct timespec tv[2],struct fuse_file_info *fi);
static int wrapp_bmap(const char *, size_t blocksize, uint64_t *idx);
static int wrapp_ioctl(const char *, int cmd, void *arg,struct fuse_file_info *, unsigned int flags, void *data);
static int wrapp_poll(const char *, struct fuse_file_info *,struct fuse_pollhandle *ph, unsigned *reventsp);
static int wrapp_write_buf(const char *, struct fuse_bufvec *buf, off_t off,struct fuse_file_info *);
static int wrapp_read_buf(const char *, struct fuse_bufvec **bufp,size_t size, off_t off, struct fuse_file_info *);
static int wrapp_flock(const char *, struct fuse_file_info *, int op);
static int wrapp_fallocate(const char *, int, off_t, off_t,struct fuse_file_info *);

static const struct fuse_operations smcfs_opertaions =
{
  &wrapp_getattr,
};


static int wrapp_getattr (const char *, struct stat *, struct fuse_file_info *fi)
{
    return 0;
}
static int wrapp_readlink(const char *, char *, size_t)
{
    return 0;
}
static int wrapp_mknod(const char *, mode_t, dev_t)
{
    return 0;
}
static int wrapp_mkdir(const char *, mode_t)
{
    return 0;
}
static int wrapp_unlink(const char *)
{
    return 0;
}
static int wrapp_rmdir(const char *)
{
    return 0;
}
static int wrapp_symlink(const char *, const char *)
{
    return 0;
}
static int wrapp_rename(const char *, const char *, unsigned int)
{
    return 0;
}
static int wrapp_link(const char *, const char *)
{
    return 0;
}
static int wrapp_chmod(const char *, mode_t, struct fuse_file_info *fi)
{
    return 0;
}
static int wrapp_chown(const char *, uid_t, gid_t, struct fuse_file_info *fi)
{
    return 0;
}
static int wrapp_truncate(const char *, off_t, struct fuse_file_info *fi)
{
    return 0;
}
static int wrapp_open(const char *, struct fuse_file_info *)
{
    return 0;
}
static int wrapp_read(const char *, char *, size_t, off_t,struct fuse_file_info *)
{
    return 0;
}
static int wrapp_write(const char *, const char *, size_t, off_t,struct fuse_file_info *)
{
    return 0;
}
static int wrapp_statfs(const char *, struct statvfs *)
{
    return 0;
}
static int wrapp_flush(const char *, struct fuse_file_info *)
{
    return 0;
}
static int wrapp_release(const char *, struct fuse_file_info *)
{
    return 0;
}
static int wrapp_fsync(const char *, int, struct fuse_file_info *)
{
    return 0;
}
static int wrapp_setxattr(const char *, const char *, const char *, size_t, int)
{
    return 0;
}
static int wrapp_getxattr(const char *, const char *, char *, size_t)
{
    return 0;
}
static int wrapp_listxattr(const char *, char *, size_t)
{
    return 0;
}
static int wrapp_removexattr(const char *, const char *)
{
    return 0;
}
static int wrapp_opendir(const char *, struct fuse_file_info *)
{
    return 0;
}
static int wrapp_readdir(const char *, void *, fuse_fill_dir_t, off_t,struct fuse_file_info *, enum fuse_readdir_flags)
{
    return 0;
}
static int wrapp_releasedir(const char *, struct fuse_file_info *)
{
    return 0;
}
static int wrapp_fsyncdir(const char *, int, struct fuse_file_info *)
{
    return 0;
}
static void* wrapp_init(struct fuse_conn_info *conn,struct fuse_config *cfg)
{
    return 0;
}
static void wrapp_destroy(void *)
{
}
static int wrapp_access(const char *, int)
{
    return 0;
}
static int wrapp_create(const char *, mode_t, struct fuse_file_info *)
{
    return 0;
}
static int wrapp_lock(const char *, struct fuse_file_info *, int cmd,struct flock *)
{
    return 0;
}
static int wrapp_utimens(const char *, const struct timespec tv[2],struct fuse_file_info *fi)
{
    return 0;
}
static int wrapp_bmap(const char *, size_t blocksize, uint64_t *idx)
{
    return 0;
}
static int wrapp_ioctl(const char *, int cmd, void *arg,struct fuse_file_info *, unsigned int flags, void *data)
{
    return 0;
}
static int wrapp_poll(const char *, struct fuse_file_info *,struct fuse_pollhandle *ph, unsigned *reventsp)
{
    return 0;
}
static int wrapp_write_buf(const char *, struct fuse_bufvec *buf, off_t off,struct fuse_file_info *)
{
    return 0;
}
static int wrapp_read_buf(const char *, struct fuse_bufvec **bufp,size_t size, off_t off, struct fuse_file_info *)
{
    return 0;
}
static int wrapp_flock(const char *, struct fuse_file_info *, int op)
{
    return 0;
}
static int wrapp_fallocate(const char *, int, off_t, off_t,struct fuse_file_info *)
{
    return 0;
}

