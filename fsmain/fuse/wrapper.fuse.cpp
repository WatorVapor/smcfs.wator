#define FUSE_USE_VERSION 30
extern "C" {
#include <fuse.h>
}
static int wrapp_getattr (const char *, struct stat *, struct fuse_file_info *fi);
static const struct fuse_operations smcfs_opertaions = {
  &wrapp_getattr,
};
//smcfs_opertaions.getattr = &wrapp_getattr;
