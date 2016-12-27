#include<cstdio>

int main() {

        int grid[1][2] = {{0, 1}};
        int count = 0;

        for(int i = 0; i < 1; i++) {
            for(int j = 0; j < 2; j++) {
                if(grid[i][j] == 1) {
                    printf("sdsd\n");
                    if(i-1 >= 0) {
                      printf("1\n");
                        if(grid[i-1][j] == 0)
                            count++;
                    }
                    else
                        count++;
                    if(j-1 >= 0) {
                      printf("2\n");
                        if(grid[i][j-1] == 0)
                            count++;
                    }
                    else
                        count++;
                    if(i+1 < 1) {
                      printf("3\n");
                        if(grid[i+1][j] == 0)
                            count++;
                    }
                    else
                        count++;
                   if(j+1 < 2) {
                     printf("4\n");
                        if(grid[i][j+1] == 0)
                            count++;
                    }
                    else
                        count++;
                }
            }
        }
        //printf("%d ", count);
        return 0;

}
