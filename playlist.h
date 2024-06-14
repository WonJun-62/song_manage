#pragma once
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void playlistMenu();//플레이리스트 화면에 처음 들어갔을 때

void printPlaylist();//플레이리스트이 리스트를 출력

void addPlaylist();//플레이리스트 추가

void deletePlaylist();//플레이리스트 삭제

void openPlaylist(char* playlistName);//플레이리스트 열기

void addSongInPli(char playlistName[]);//플레이리스트에 노래 추가

void deleteSong(char* playlistName, char* fileName);//플레이리스트의 노래 삭제

//void delName(char index[], const char* fileName);//플레이리스트 리스트에서 플레이리스트 이름을 삭제


char* removeSpace(char* str);
