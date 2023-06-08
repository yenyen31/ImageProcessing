#pragma once
#include "..\IppImage.h"

void IppInverse(IppByteImage& img);//�����Լ�
void IppBrightness(IppByteImage& img, int n);//��� ��ȯ �Լ�
void IppContrast(IppByteImage& img, int n); //��Ϻ� ���� �Լ�


void IppGammaCorrection(IppByteImage& img, float gamma); //���� ���� 
void IppHistogram(IppByteImage& img, float histo[256]);
void IppHistogramStretching(IppByteImage& img);
void IppHistogramEqualizaiton(IppByteImage& img);
