/* ============================================================================
*  Name     : CFriendApp from FriendApp.cpp
*  Part of  : Friend
*  Created  : 21.07.2006 by 
* 
*  Implementation notes:
*
*     Initial content was generated by Series 60 Application Wizard.
*  Version  :
*  Copyright: 
* ============================================================================
*/

// INCLUDE FILES
#include    "FriendApp.h"
#include    "FriendDocument.h"

// ================= MEMBER FUNCTIONS =======================

// ---------------------------------------------------------
// CFriendApp::AppDllUid()
// Returns application UID
// ---------------------------------------------------------
//
TUid CFriendApp::AppDllUid() const
    {
    return KUidFriend;
    }

   
// ---------------------------------------------------------
// CFriendApp::CreateDocumentL()
// Creates CFriendDocument object
// ---------------------------------------------------------
//
CApaDocument* CFriendApp::CreateDocumentL()
    {
    return CFriendDocument::NewL( *this );
    }

// ================= OTHER EXPORTED FUNCTIONS ==============
//
// ---------------------------------------------------------
// NewApplication() 
// Constructs CFriendApp
// Returns: created application object
// ---------------------------------------------------------
//
EXPORT_C CApaApplication* NewApplication()
    {
    return new CFriendApp;
    }

// ---------------------------------------------------------
// E32Dll(TDllReason) 
// Entry point function for EPOC Apps
// Returns: KErrNone: No error
// ---------------------------------------------------------
//
GLDEF_C TInt E32Dll( TDllReason )
    {
    return KErrNone;
    }

// End of File  
