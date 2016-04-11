#include <Stdio.h>

int main() {
    int i;
char n1[10], n2[10];
fgets(n1,10,stdin);
fgets(n2,10,stdin);

for (i=0;n1[i];i++)
    if (n1[i]!=n2[i]) printf("\nRozne napisy\n");

return 0;

}
