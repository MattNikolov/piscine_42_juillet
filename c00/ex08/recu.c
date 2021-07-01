#include <unistd.h>

void recurse(int n, char *result, int start, int depth)
{
    int counter;
    
    counter = start;
    if (depth == 0) {
        write(1, result, n);
        if (result[0] != '0' + 10 - n) {
            write(1, ", ", 2);
        } else {
            write(1, "\n", 1);
        }
        return;
    }
    while(counter <= 10 - depth)
    {
        result[n - depth] = '0' + counter; // ici tu écris un nombre
        recurse(n, result, counter + 1, depth - 1); // tu passes la balle au voisin de droite
        counter++;
    }

    return;
}

void ft_print_combn(int n)
{
    char result[9];
    recurse(n, result, 0, n); // 9 , 8  , ???? 1, 0(terminaison)
}


int main(){
  ft_print_combn(2);
}
