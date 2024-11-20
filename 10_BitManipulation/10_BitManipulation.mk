##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=10_BitManipulation
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/User/Documents/Projets/Advanced_C
ProjectPath            :=C:/Users/User/Documents/Projets/Advanced_C/10_BitManipulation
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/10_BitManipulation
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=User
Date                   :=11/10/2024
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir -p
LinkerName             :=C:/cygwin64/bin/gcc.exe
SharedObjectLinkerName :=C:/cygwin64/bin/gcc.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/User/Documents/Projets/Advanced_C/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/cygwin64/bin/ar.exe rcu
CXX      := C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe
CC       := C:/cygwin64/bin/gcc.exe
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/cygwin64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/bitwiseOperation.c$(ObjectSuffix) $(IntermediateDirectory)/bitmasks.c$(ObjectSuffix) $(IntermediateDirectory)/shifting.c$(ObjectSuffix) $(IntermediateDirectory)/convert.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/User/Documents/Projets/Advanced_C/10_BitManipulation/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/bitwiseOperation.c$(ObjectSuffix): bitwiseOperation.c $(IntermediateDirectory)/bitwiseOperation.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/User/Documents/Projets/Advanced_C/10_BitManipulation/bitwiseOperation.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bitwiseOperation.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/bitwiseOperation.c$(DependSuffix): bitwiseOperation.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/bitwiseOperation.c$(ObjectSuffix) -MF$(IntermediateDirectory)/bitwiseOperation.c$(DependSuffix) -MM bitwiseOperation.c

$(IntermediateDirectory)/bitwiseOperation.c$(PreprocessSuffix): bitwiseOperation.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/bitwiseOperation.c$(PreprocessSuffix) bitwiseOperation.c

$(IntermediateDirectory)/bitmasks.c$(ObjectSuffix): bitmasks.c $(IntermediateDirectory)/bitmasks.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/User/Documents/Projets/Advanced_C/10_BitManipulation/bitmasks.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bitmasks.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/bitmasks.c$(DependSuffix): bitmasks.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/bitmasks.c$(ObjectSuffix) -MF$(IntermediateDirectory)/bitmasks.c$(DependSuffix) -MM bitmasks.c

$(IntermediateDirectory)/bitmasks.c$(PreprocessSuffix): bitmasks.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/bitmasks.c$(PreprocessSuffix) bitmasks.c

$(IntermediateDirectory)/shifting.c$(ObjectSuffix): shifting.c $(IntermediateDirectory)/shifting.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/User/Documents/Projets/Advanced_C/10_BitManipulation/shifting.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/shifting.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/shifting.c$(DependSuffix): shifting.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/shifting.c$(ObjectSuffix) -MF$(IntermediateDirectory)/shifting.c$(DependSuffix) -MM shifting.c

$(IntermediateDirectory)/shifting.c$(PreprocessSuffix): shifting.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/shifting.c$(PreprocessSuffix) shifting.c

$(IntermediateDirectory)/convert.c$(ObjectSuffix): convert.c $(IntermediateDirectory)/convert.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/User/Documents/Projets/Advanced_C/10_BitManipulation/convert.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/convert.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/convert.c$(DependSuffix): convert.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/convert.c$(ObjectSuffix) -MF$(IntermediateDirectory)/convert.c$(DependSuffix) -MM convert.c

$(IntermediateDirectory)/convert.c$(PreprocessSuffix): convert.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/convert.c$(PreprocessSuffix) convert.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


