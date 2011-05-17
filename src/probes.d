provider redis {
    probe command__entry(char *cmd);
    probe command__return(char *cmd);
};
#pragma D attributes Evolving/Evolving/Common provider redis provider
#pragma D attributes Private/Private/Unknown provider redis module
#pragma D attributes Private/Private/Unknown provider redis function
#pragma D attributes Evolving/Evolving/Unknown provider redis name
#pragma D attributes Evolving/Evolving/Unknown provider redis args