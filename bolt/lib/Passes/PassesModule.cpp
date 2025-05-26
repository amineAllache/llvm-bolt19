#include "bolt/Passes/BinaryPasses.h"
#include "bolt/Passes/ReachingDefAnalysis.h"
#include "bolt/Passes/SecSwiftReportPass.h"

// Ce fichier est l'endroit où tu peux enregistrer manuellement des passes BOLT si besoin,
// mais normalement, les passes comme ReachingDefAnalysis doivent être intégrées
// via le système BOLT_REGISTER_BINARY_FUNCTION_PASS (dans leur propre fichier .cpp).

// Ici, on ne met que des enregistrements globaux éventuels,
// ou des appels à des passes dans un ordre particulier si ce fichier était utilisé pour ça.

namespace llvm {
namespace bolt {

// Ce fichier peut rester vide si tout est déjà enregistré avec BOLT_REGISTER_BINARY_FUNCTION_PASS.
// Tu n'as pas besoin d'enregistrer explicitement ReachingDefAnalysis ici.

} // namespace bolt
} // namespace llvm
