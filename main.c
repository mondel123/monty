#include "main.c"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter
 * @argic: number of arguements
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argic, char *argv[])
{
char *content;
FILE *file;
size_t size = 0,
size_t read_line = 1;
stack_t *stack = NULL;
unsigned int counter = 0

if (argic != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
bus.file = file;
if (!file)
{
fprintf(stderr, "Error: can't open file %\n", argv[1]);
exit(EXIT_FAILURE);
}
while (read_line > 0)
{
content = NULL;
read_line = getline(&content, &size, file)
bus.content = content;
content++;
if (read_line > 0)
{
execute(content, &stack, counter, file);
}
free(content);
}
free_stack(stack);
fclose(file);
return (0);
}
