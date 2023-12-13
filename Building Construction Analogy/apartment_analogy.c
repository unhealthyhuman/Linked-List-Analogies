typedef struct s_tlist {
	int x;
	int y;
} t_list2;

typedef struct s_house {
	int	room;
	struct s_house	*next;
} blueprint;

#include <stdio.h>
#include <stdlib.h>

blueprint	*new_apartment(int num)
{
	blueprint	*new_apart;

	new_apart = malloc(sizeof(blueprint));
	if (new_apart == NULL)
		return (NULL);
	new_apart->room = num;
	new_apart->next = NULL;

	return (new_apart);
}

int	main()
{
	blueprint	*apartment1;
	blueprint	*apartment2;
	blueprint	*apartment3;
	//blueprint	*plumber;

	apartment1 = malloc(sizeof(blueprint));
	apartment2 = malloc (sizeof(blueprint));
	apartment1->room = 7;
	apartment1->next = apartment2;
	apartment2->room = 8;
	apartment2->next = NULL;

	apartment2 = NULL;
	apartment2 = apartment1->next;
	apartment3 = new_apartment(3);
	apartment2->next = apartment3;

	apartment2 = NULL;
	apartment3 = NULL; 

	apartment2 = apartment1->next;
	apartment3 = apartment2;

	//printf("%d\n%p\n", apartment2->room, apartment2->next);
	printf("%d\n", apartment3->room);

	// plumber = apartment1;
	// while (plumber != NULL)
	// {
	// 	printf("Plumber tells me , he as at the building number : %d \n", plumber->room);
	// 	plumber = plumber->next;
	// }
	// plumber = apartment1;
	// while (plumber != NULL)
	// {
	// 	printf("Plumber tells me , he as at the building number : %d \n", plumber->room);
	// 	plumber = plumber->next;
	// }	
	//printf("%d\n%p\n", apartment1->room, apartment1->next);
	//printf("%d\n%p\n", apartment2->room, apartment2->next);

	// blueprint	apartment1;
	// blueprint	apartment2;

	// apartment1.room = 7;
	// apartment1.next = &apartment2;
	// apartment2.room = 5;
	// apartment2.next = NULL;

	// //printf("%d\n%p\n%d\n%p", apartment1.room, apartment1.next, apartment2.room, apartment2.next);
	// printf("%p\n", &apartment1);

	// int a; 
	// t_list2 name;
	// t_list2 filip;
	// t_list2 *ildiko;
	// int	*pc;
	// t_listapartmentcomplexncil;

	// name.x = 10;
	// name.y = 7;
	// filip.x = 181;
	// filip.y = 68;
	// ildiko = malloc(sizeof(t_list2));
	// (*ildiko).x = 2;
	// (*ildiko).y = 3;
	// pc = malloc(sizeof(int));
	// *pc = 7;
	// (*pencil).x = 27;
	// (*pencil).y = 6;
	// pencil->x = 27;
	// pencil->y = 6;


	// printf("%d\n%d\n", (*ildiko).x, (*ildiko).y);
}
