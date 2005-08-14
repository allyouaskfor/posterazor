// generated by Fast Light User Interface Designer (fluid) version 1.0107

#include "PosteRazorDialogUI.h"

void PosteRazorDialogUI::cb_m_nextButton_i(Fl_Button*, void*) {
  next();
}
void PosteRazorDialogUI::cb_m_nextButton(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->user_data()))->cb_m_nextButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_prevButton_i(Fl_Button*, void*) {
  prev();
}
void PosteRazorDialogUI::cb_m_prevButton(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->user_data()))->cb_m_prevButton_i(o,v);
}

void PosteRazorDialogUI::cb__i(Fl_Button*, void*) {
  LoadInputImage();
}
void PosteRazorDialogUI::cb_(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb__i(o,v);
}

void PosteRazorDialogUI::cb_m_paperFormatTypeTabs_i(Fl_Tabs*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperFormatTypeTabs(Fl_Tabs* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_paperFormatTypeTabs_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperOrientationPortraitRadioButton_i(Fl_Round_Button*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperOrientationPortraitRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperOrientationPortraitRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperOrientationLandscapeRadioButton_i(Fl_Round_Button*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperOrientationLandscapeRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperOrientationLandscapeRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperCustomWidthInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperCustomWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperCustomWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperCustomHeightInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperCustomHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperCustomHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperBorderTopInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperBorderTopInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperBorderTopInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperBorderRightInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperBorderRightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperBorderRightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperBorderBottomInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperBorderBottomInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperBorderBottomInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperBorderLeftInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperBorderLeftInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperBorderLeftInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizeAbsoluteRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizeAbsoluteRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizeAbsoluteRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterAbsoluteWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteWidthInput);
}
void PosteRazorDialogUI::cb_m_posterAbsoluteWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterAbsoluteWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterAbsoluteHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteHeightInput);
}
void PosteRazorDialogUI::cb_m_posterAbsoluteHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterAbsoluteHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizeInPagesRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizeInPagesRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizeInPagesRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPagesWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPagesWidthInput);
}
void PosteRazorDialogUI::cb_m_posterPagesWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPagesWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPagesHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPagesHeightInput);
}
void PosteRazorDialogUI::cb_m_posterPagesHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPagesHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizePercentualRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizePercentualRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizePercentualRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPercentualSizeInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPercentualSizeInput);
}
void PosteRazorDialogUI::cb_m_posterPercentualSizeInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPercentualSizeInput_i(o,v);
}
PosteRazorDialogUI::PosteRazorDialogUI(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _PosteRazorDialogUI();
}

PosteRazorDialogUI::PosteRazorDialogUI(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _PosteRazorDialogUI();
}

void PosteRazorDialogUI::_PosteRazorDialogUI() {
  PosteRazorDialogUI *w = this;
  PosteRazorDialogUI *o = this;
o->box(FL_FLAT_BOX);
o->color(FL_BACKGROUND_COLOR);
o->selection_color(FL_BACKGROUND_COLOR);
o->labeltype(FL_NORMAL_LABEL);
o->labelfont(0);
o->labelsize(14);
o->labelcolor(FL_BLACK);
o->user_data((void*)(this));
o->align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE);
o->when(FL_WHEN_RELEASE);
{ Fl_Group* o = new Fl_Group(10, 420, 600, 25);
  { Fl_Button* o = m_nextButton = new Fl_Button(525, 420, 85, 25, "Next @-2->");
    o->callback((Fl_Callback*)cb_m_nextButton);
  }
  { Fl_Button* o = m_prevButton = new Fl_Button(430, 420, 85, 25, "@-2<- Back");
    o->callback((Fl_Callback*)cb_m_prevButton);
  }
  { Fl_Box* o = new Fl_Box(225, 420, 15, 25);
    Fl_Group::current()->resizable(o);
  }
  o->end();
}
{ Fl_Wizard* o = m_wizard = new Fl_Wizard(360, 45, 250, 365);
  o->box(FL_THIN_DOWN_BOX);
  o->user_data((void*)(this));
  { Fl_Group* o = m_loadInputImageStep = new Fl_Group(360, 45, 250, 365);
    o->color(FL_LIGHT1);
    o->hide();
    { Fl_Group* o = new Fl_Group(370, 70, 230, 25, "Input Image");
      { Fl_Button* o = new Fl_Button(575, 70, 25, 25, "...");
        o->callback((Fl_Callback*)cb_);
      }
      { Fl_Box* o = m_inputFileNameLabel = new Fl_Box(370, 70, 205, 25);
        o->box(FL_THIN_DOWN_BOX);
        o->color((Fl_Color)55);
        o->align(68|FL_ALIGN_INSIDE);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Group* o = m_imageInfoGroup = new Fl_Group(370, 120, 230, 85, "Image information");
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      { Fl_Box* o = m_imageInfoValuesLabel = new Fl_Box(480, 130, 115, 65);
        o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_imageInfoKeysLabel = new Fl_Box(375, 130, 105, 65);
        o->align(FL_ALIGN_TOP_RIGHT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(360, 410, 250, 0);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = m_paperSizeStep = new Fl_Group(360, 45, 250, 365);
    { Fl_Tabs* o = m_paperFormatTypeTabs = new Fl_Tabs(370, 70, 230, 140, "Paper format:");
      o->callback((Fl_Callback*)cb_m_paperFormatTypeTabs);
      { Fl_Group* o = m_paperFormatStandardGroup = new Fl_Group(370, 95, 230, 115, "Standard");
        o->color(FL_DARK2);
        o->selection_color(FL_LIGHT3);
        o->align(FL_ALIGN_CENTER);
        { Fl_Choice* o = m_paperFormatChoice = new Fl_Choice(455, 105, 135, 25, "Format:");
          o->down_box(FL_BORDER_BOX);
        }
        { Fl_Group* o = new Fl_Group(455, 140, 135, 60, "Orientation:");
          o->box(FL_THIN_DOWN_BOX);
          o->color((Fl_Color)43);
          o->align(FL_ALIGN_LEFT);
          { Fl_Round_Button* o = m_paperOrientationPortraitRadioButton = new Fl_Round_Button(460, 145, 125, 25, "Portrait");
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)cb_m_paperOrientationPortraitRadioButton);
          }
          { Fl_Round_Button* o = m_paperOrientationLandscapeRadioButton = new Fl_Round_Button(460, 170, 125, 25, "Landscape");
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)cb_m_paperOrientationLandscapeRadioButton);
          }
          o->end();
        }
        o->end();
      }
      { Fl_Group* o = m_paperFormatCustomGroup = new Fl_Group(370, 110, 230, 75, "Custom");
        o->color(FL_DARK2);
        o->selection_color(FL_LIGHT3);
        o->hide();
        { Fl_Value_Input* o = m_paperCustomWidthInput = new Fl_Value_Input(455, 120, 85, 25, "Width:");
          o->callback((Fl_Callback*)cb_m_paperCustomWidthInput);
          o->step(0.1);
          o->range(0, 999);
          o->precision(2);
        }
        { Fl_Value_Input* o = m_paperCustomHeightInput = new Fl_Value_Input(455, 150, 85, 25, "Height:");
          o->callback((Fl_Callback*)cb_m_paperCustomHeightInput);
          Fl_Group::current()->resizable(o);
          o->step(0.1);
          o->range(0, 999);
          o->precision(2);
        }
        { Fl_Box* o = m_paperCustomWidthLabel = new Fl_Box(540, 120, 50, 25, "cm");
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Box* o = m_paperCustomHeightLabel = new Fl_Box(540, 150, 50, 25, "cm");
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        o->end();
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(370, 235, 230, 125, "Borders:");
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)43);
      { Fl_Value_Input* o = m_paperBorderTopInput = new Fl_Value_Input(460, 245, 50, 25);
        o->callback((Fl_Callback*)cb_m_paperBorderTopInput);
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        o->step(0.1);
        o->range(0, 999);
        o->precision(2);
      }
      { Fl_Value_Input* o = m_paperBorderRightInput = new Fl_Value_Input(520, 285, 50, 25);
        o->callback((Fl_Callback*)cb_m_paperBorderRightInput);
        o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
        o->step(0.1);
        o->range(0, 999);
        o->precision(2);
      }
      { Fl_Value_Input* o = m_paperBorderBottomInput = new Fl_Value_Input(460, 325, 50, 25);
        o->callback((Fl_Callback*)cb_m_paperBorderBottomInput);
        o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
        o->step(0.1);
        o->range(0, 999);
        o->precision(2);
      }
      { Fl_Value_Input* o = m_paperBorderLeftInput = new Fl_Value_Input(400, 285, 50, 25);
        o->callback((Fl_Callback*)cb_m_paperBorderLeftInput);
        o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
        o->step(0.1);
        o->range(0, 999);
        o->precision(2);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(360, 400, 250, 10);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = m_posterSizeStep = new Fl_Group(360, 45, 250, 365);
    o->hide();
    { Fl_Round_Button* o = m_posterSizeAbsoluteRadioButton = new Fl_Round_Button(370, 52, 230, 20, "Absolute image size");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizeAbsoluteRadioButton);
    }
    { Fl_Group* o = m_posterSizeAbsoluteGroup = new Fl_Group(370, 70, 230, 75);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      o->align(FL_ALIGN_CENTER);
      { Fl_Value_Input* o = m_posterAbsoluteWidthInput = new Fl_Value_Input(450, 80, 90, 25, "Width:");
        o->callback((Fl_Callback*)cb_m_posterAbsoluteWidthInput);
        o->step(1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Value_Input* o = m_posterAbsoluteHeightInput = new Fl_Value_Input(450, 110, 90, 25, "Height:");
        o->callback((Fl_Callback*)cb_m_posterAbsoluteHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterAbsoluteWidthLabel = new Fl_Box(540, 80, 50, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_posterAbsoluteHeightLabel = new Fl_Box(540, 110, 50, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Round_Button* o = m_posterSizeInPagesRadioButton = new Fl_Round_Button(370, 152, 230, 20, "Size in pages");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizeInPagesRadioButton);
    }
    { Fl_Group* o = m_posterSizeInPagesGroup = new Fl_Group(370, 170, 230, 75);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterPagesWidthInput = new Fl_Value_Input(450, 180, 90, 25, "Width:");
        o->callback((Fl_Callback*)cb_m_posterPagesWidthInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Value_Input* o = m_posterPagesHeightInput = new Fl_Value_Input(450, 210, 90, 25, "Height:");
        o->callback((Fl_Callback*)cb_m_posterPagesHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterPagesWidthLabel = new Fl_Box(540, 180, 50, 25, "pages");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_posterPagesHeightLabel = new Fl_Box(540, 210, 50, 25, "pages");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Round_Button* o = m_posterSizePercentualRadioButton = new Fl_Round_Button(370, 252, 230, 20, "Image size in percent");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizePercentualRadioButton);
    }
    { Fl_Group* o = m_posterSizePercentualGroup = new Fl_Group(370, 270, 230, 45);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterPercentualSizeInput = new Fl_Value_Input(450, 280, 90, 25, "Size:");
        o->callback((Fl_Callback*)cb_m_posterPercentualSizeInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterPercentualWidthLabel = new Fl_Box(540, 281, 50, 25, "%");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(360, 410, 250, 0);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = new Fl_Group(360, 45, 250, 365);
    o->hide();
    o->end();
  }
  { Fl_Group* o = m_savePosterStep = new Fl_Group(360, 45, 250, 365);
    o->hide();
    o->end();
  }
  o->end();
}
{ Fl_Group* o = m_previewImageGroup = new Fl_Group(10, 45, 345, 365);
  o->box(FL_THIN_DOWN_BOX);
  o->color((Fl_Color)34);
  o->selection_color(FL_LIGHT2);
  o->labelfont(1);
  o->labelsize(26);
  o->labelcolor((Fl_Color)61);
  o->align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE);
  o->end();
  Fl_Group::current()->resizable(o);
}
{ Fl_Box* o = m_stepInfoBox = new Fl_Box(10, 10, 600, 25, "Step 1 of 8: Load an image");
  o->box(FL_THIN_UP_BOX);
  o->color((Fl_Color)10);
  o->labelfont(1);
  o->labelsize(15);
  o->labelcolor(FL_GRAY0);
}
// ****** Load input image step:
// ****** Paper size step:
// ****** Poster size step:
size_range(this->w(), this->h());
end();
}
