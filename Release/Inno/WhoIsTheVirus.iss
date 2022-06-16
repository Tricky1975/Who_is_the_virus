; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "Who is the Virus"
#define MyAppVersion "22.06.16"
#define MyAppPublisher "Phantasar Productions"
#define MyAppURL "https://github.com/PhantasarProductions/Who_is_the_virus"
#define MyAppExeName "WhoIsTheVirus.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{20C6212E-F95A-4937-8804-7A1FDA5A8B9D}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\Phantasar Productions/Who Is The Virus
DisableDirPage=yes
DisableProgramGroupPage=yes
LicenseFile=E:\Projects\Applications\VisualStudio\VC\WhoIsTheVirus\License.txt
OutputBaseFilename=WhoIsTheVirus_Setup
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Files]
Source: "E:\Projects\Applications\VisualStudio\VC\WhoIsTheVirus\Release\Exe\WhoIsTheVirus.exe"; DestDir: "{app}"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{commonprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

