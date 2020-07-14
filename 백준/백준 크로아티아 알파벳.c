#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100] = { 0 };
	int count = 0;

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] == 'c' || str[i] == 's' || str[i] == 'z') && str[i + 1] == '=') { // c=, s=, z=
			count += 1;
			i += 1;
		}
		else if ((str[i] == 'c' || str[i] == 'd') && str[i + 1] == '-') { // c-, d-
			count += 1;
			i += 1;
		}
		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') { // dz=
			count += 1;
			i += 2;
		}
		else if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j') { // lj, nj
			count += 1;
			i += 1;
		}
		else count++;
	}


	printf("%d", count);

	return 0;
}