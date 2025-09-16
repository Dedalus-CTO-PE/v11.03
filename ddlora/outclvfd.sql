create table outclvaf
(
  otcvclin    varchar2(6) default ' ' not null,
  otcvfdte    varchar2(8) default ' ' not null,
  otcvtdte    varchar2(8) default ' ' not null,
  otcvreas    varchar2(3) default ' ' not null,
  otcvlast    varchar2(8) default ' ' not null,
  otcvsite    varchar2(6) default ' ' not null,
  otcvspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outclva1 primary key( 
otcvsite,
otcvclin,
otcvfdte)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
