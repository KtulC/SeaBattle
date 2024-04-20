#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DATE_LEN 20
#define NAME_LEN 20

#define SMALL 10 // ������ ����
#define BIG 15


typedef enum answer
{
	No,
	Yes
}answer;
typedef enum intelligence
{
	Human,
	Stupid,
	Medium,
	Smart
}intelligence;
typedef enum player
{
	A,
	B
}player;
typedef enum size_board
{
	Small,
	Big
}size_board;
typedef struct status // ���� ����������, ��� ��������� ���, ��������� ��� ���, ��� �����������, ������
{
	char date[DATE_LEN];
	player LastOne;
	answer am_i_finished;
	char winner_name[NAME_LEN];
	int record;
}status;
typedef struct key // ������ ����, ����� ����, 
{
	size_board Board;
	intelligence player_A;
	intelligence player_B;
}key;
typedef struct counters // ���������� �����
{
	int counter_A;
	int counter_B;
}counters;

typedef struct cell 
{
	int vertical;
	int horizontal;
}cell; 
typedef struct ship
{
	answer am_i_alive;
	size_t length;
	cell first_cell;
	cell last_cell;
	cell wrecked_cells[5];
}ship;
typedef struct fleet //������ ��� ��������, ������ ��������
{
	ship ships[11];
	cell missed_cells[225];
}fleet;

typedef struct game // ������ ���� �������� ����������
{
	status status_of_game;
	key key_of_game;
	counters counters_of_game;
	fleet fleet_A;
	fleet fleet_B;
}game;

void session();
void main_menu(); // ��������� �� ������������ ���� ����������� ���������� ��� ������� ����
void generate_game(); // �������� ���������� ������ ����
void play_game();// ������ ������ ����

int main()
{
	session();
	return EXIT_SUCCESS;
}

void session()
{
	main_menu();
	play_game();
}
void main_menu()
{
	// generate_game()
}
void generate_game()
{

}
void play_game()
{

}