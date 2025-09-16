create table outmspaf
(
  otmssite    varchar2(6) default ' ' not null,
  otmsclin    varchar2(6) default ' ' not null,
  otmsdowk    varchar2(1) default ' ' not null,
  otmsstim    varchar2(8) default ' ' not null,
  otmssusp    varchar2(3) default ' ' not null,
  otmsfdat    varchar2(8) default ' ' not null,
  otmstdat    varchar2(8) default ' ' not null,
  otmsreas    varchar2(3) default ' ' not null,
  otmsedat    varchar2(8) default ' ' not null,
  otmsetim    varchar2(8) default ' ' not null,
  otmseuid    varchar2(10) default ' ' not null,
  otmsrfdt    varchar2(8) default ' ' not null,
  otmsrtdt    varchar2(8) default ' ' not null,
  otmspare    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outmspa1 primary key( 
otmssite,
otmsclin,
otmsdowk,
otmssusp,
otmsfdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outmspa2 on outmspaf
(
otmssite,
otmsfdat,
otmsclin,
otmsdowk,
otmssusp
)
  tablespace pas_indx; 
