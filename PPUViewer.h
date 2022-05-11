//
// copyright 2018 Palestine Polytechnic Univeristy
//
// This software can be used and/or modified for academich use as long as 
// this commented part is listed
//
// Last modified by: Zein Salah, on 26.02.2019
//


#pragma once

#include <QWidget>
#include <QPushButton>

class RenderWidget;

class PPUViewer : public QWidget
{
  Q_OBJECT

public:
  PPUViewer();

private:
  RenderWidget *m_RenderWidget;
  QPushButton* m_ZoomInButton;
  QPushButton* m_ZoomOutButton;
  QPushButton* m_RotateButton;
  QPushButton* m_RotateZButton;
};

