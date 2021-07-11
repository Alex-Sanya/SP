#ifndef _STONES_AND_DIAMONDS_H
#define _STONES_AND_DIAMONDS_H

#include "declarations.h"
#include "is_something.h"
#include "moving.h"
#include "utilits.h"
#include <stdio.h>
#include <malloc.h>

// �������� �������� ������� ������
s_stone* create_stone(s_stone *info);

// ���������� � �����
int add_stone_in_end(s_q_stone *q_stone, s_stone *stone);

// ���� ���� ������ � �������, ����� ��������� �� ����
s_stone* stone_in_q(s_q_stone *q_stone, int X, int Y);

// ����������� ���������� � �������
int rec_add_in_q(s_q_stone *q_stone, s_map *map, int X, int Y);

// �������� �� ������� ������, ��������� ����, � ������, ���� �� ���������� ��������� ������
void del_from_q_stone(s_q_stone *q_stone, s_map *map);

// ������� ���� �������
void q_stone_clear(s_q_stone *q_stone);

// ���������� �������� ������ � ��������� �� �����
int player_get_diamond(s_player *player, s_map *map);

// ������� ������� �������
void del_1_stone(s_q_stone *q_stone, s_stone *stone);

// ������������ ������, ���� ����� ��������
int move_stone_down(s_q_stone *q_stone, s_map *map, s_player *player, s_stone *cur, short *X, short *Y);

// ������������ ������, ���� �����-����� ��������
int move_stone_down_left(s_q_stone *q_stone, s_map *map, s_player *player, s_stone *cur, short *X, short *Y);

// ������������ ������, ���� �����-������ ��������
int move_stone_down_right(s_q_stone *q_stone, s_map *map, s_player *player, s_stone *cur, short *X, short *Y);

// �������� ���� ������ �� 1 ���
void move_stone(s_q_stone *q_stone, s_map *map, s_player *player);

// ������� ������. �������� ������ ������.
int push_stone(s_map *map, direction dir, s_player *player, s_q_stone *q_stone);

// ��������� ������� ���������� ������ ������ ������
int add_in_q_around_player(s_map *map, s_player *player, s_q_stone *q_stone);

// ������� ������ ������, ����������� ���������� � �������
int copy_q_stone(s_q_stone *q_stone_1, s_q_stone *q_stone_2);

#endif//_STONES_AND_DIAMONDS_H