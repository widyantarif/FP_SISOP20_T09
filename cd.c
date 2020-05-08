#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char*argv[])
{
if(argc < 2)
{
printf(1, "cd need arguments [path destination]\n");
exit();
}

if(chdir(argv[1]) < 0)
{
printf(1, "failed to change directory to *s!\n", argv[1]);
}
exit();
}
