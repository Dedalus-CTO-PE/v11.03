create table legwmabf
(
  dlmadmno    varchar2(8) default ' ' not null,
  lmrefno     varchar2(20) default ' ' not null,
  lmpolic     varchar2(20) default ' ' not null,
  lmacdat     varchar2(8) default ' ' not null,
  lmsname     varchar2(30) default ' ' not null,
  lmstele     varchar2(12) default ' ' not null,
  lmcrego     varchar2(36) default ' ' not null,
  lmacloc     varchar2(40) default ' ' not null,
  lptarole    varchar2(3) default ' ' not null,
  lengaged    varchar2(20) default ' ' not null,
  lpinjure    varchar2(30) default ' ' not null,
  lmdtrans    varchar2(10) default ' ' not null,
  lmechsev    varchar2(30) default ' ' not null,
  lregnsev    varchar2(20) default ' ' not null,
  lothdet1    varchar2(30) default ' ' not null,
  lothdet2    varchar2(30) default ' ' not null,
  lothdet3    varchar2(30) default ' ' not null,
  ltwmtist    varchar2(5) default ' ' not null,
  lmspare     varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legwmab1 primary key( 
dlmadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
