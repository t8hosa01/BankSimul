#include "dllpincode.h"


/*DLLPinCode::DLLPinCode()
{
}
*/
void DLLPinCode::rajapintafunktioDLLOmaUIKomponentti()
{
olioPinUIMoottoriDialog = new PinUIMoottoriDialog;
olioPinUIMoottoriDialog->show();
olioPinUIMoottoriDialog->exec();
delete olioPinUIMoottoriDialog;
}
