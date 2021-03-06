/** @file
  * @copyright Copyright (c) 2013 PROFACTOR GmbH. All rights reserved. 
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted provided that the following conditions are
  * met:
  *
  *     * Redistributions of source code must retain the above copyright
  * notice, this list of conditions and the following disclaimer.
  *     * Redistributions in binary form must reproduce the above
  * copyright notice, this list of conditions and the following disclaimer
  * in the documentation and/or other materials provided with the
  * distribution.
  *     * Neither the name of Profactor GmbH nor the names of its
  * contributors may be used to endorse or promote products derived from
  * this software without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  * @authors christoph.kopf@profactor.at
  */

#include "unlicensed_dialog.h"
#include "ui_unlicensed_dialog.h"

#include <QRect>

#include <iostream>

namespace ReconstructMeGUI {
  unlicensed_dialog::unlicensed_dialog(QWidget *parent, Qt::WindowFlags flags) : 
    QDialog(parent, flags),  
    _ui(new Ui::unlicensedDialog)
  {
    _ui->setupUi(this);
  }

  unlicensed_dialog::~unlicensed_dialog() 
  {
    delete _ui;
  }

  //void unlicensed_dialog::showEvent(QShowEvent* event)
  //{
  //  QWidget* root = this;
  //  while (root->parent() != 0) {
  //    root = root->parentWidget();
  //  }
  //
  //  int x = root->x() + (root->width()  - width() ) / 2;
  //  int y = root->y() + (root->height() - height()) / 2;
  //  
  //  move(x, y);
  //  this->setEnabled(true);
  //}
}