#include "waveformwidgetabstract.h"
#include "waveform/renderers/waveformwidgetrenderer.h"

#include <QWidget>

#include <QDebug>

const QString WaveformWidgetAbstract::s_openGlFlag = "(GL)";
const QString WaveformWidgetAbstract::s_openGlShaderFlag = "(GLSL)";

//Default constructor is only use by the factory to evaluate dynamically WaveformWidget
WaveformWidgetAbstract::WaveformWidgetAbstract() :
    WaveformWidgetRenderer() {
    m_widget = 0;
}

WaveformWidgetAbstract::WaveformWidgetAbstract( const char* group) :
    WaveformWidgetRenderer(group) {
    m_widget = 0;
}

WaveformWidgetAbstract::~WaveformWidgetAbstract() {
}

void WaveformWidgetAbstract::hold() {
    m_widget->hide();
}

void WaveformWidgetAbstract::release() {
    m_widget->show();
}

void WaveformWidgetAbstract::render() {
    m_widget->repaint();
}

void WaveformWidgetAbstract::resize( int width, int height) {
    m_widget->resize( width, height);
    WaveformWidgetRenderer::resize( width, height);
}
