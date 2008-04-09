#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "FWCore/Framework/interface/InputSourceMacros.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "GeneratorInterface/PomwigInterface/interface/PomwigSource.h"
#include "GeneratorInterface/PomwigInterface/interface/PomwigProducer.h"
#include "GeneratorInterface/PomwigInterface/interface/PomwigFilter.h"

using edm::PomwigSource;
using edm::PomwigProducer;

DEFINE_SEAL_MODULE();
DEFINE_ANOTHER_FWK_INPUT_SOURCE(PomwigSource);
DEFINE_ANOTHER_FWK_MODULE(PomwigFilter);
DEFINE_ANOTHER_FWK_MODULE(PomwigProducer);
