// �ļ��� ��motor.h
// ����   : �Գɻ� ��ͳ ������
// ����   : 2017�� 2�� 17��

#ifndef _MOTOR_H_
#define _MOTOR_H_

#include "newtype.h"
#include "extern.h"
#include "Globle.h"
#include "STC12C5410AD.H"

/************************************** �������� ********************************************/

void auto_1(void);
//void auto_2(void);
//void auto_3(void);
void kne(void);
void per(void);
void per_kne(void);
void changeWidth(void);
void Init_PWM(void);
void allMotorsStop(void);
void Init_Motor(void);

#endif