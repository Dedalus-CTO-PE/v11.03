create table comcodaf
(
  cmcdtcod    varchar2(2) default ' ' not null,
  cmcdacod    varchar2(3) default ' ' not null,
  cmcddesc    varchar2(20) default ' ' not null,
  cmcdhdpe    varchar2(4) default ' ' not null,
  cmcdfmdt    varchar2(8) default ' ' not null,
  cmcdtodt    varchar2(8) default ' ' not null,
  cmcdassc    number(6,0) default 0 not null,
  cmcdnate    varchar2(4) default ' ' not null,
  cmcdsi01    varchar2(1) default ' ' not null,
  cmcdsi02    varchar2(1) default ' ' not null,
  cmcdsi03    varchar2(1) default ' ' not null,
  cmcdsi04    varchar2(1) default ' ' not null,
  cmcdsi05    varchar2(1) default ' ' not null,
  cmcdsi06    varchar2(1) default ' ' not null,
  cmcdsi07    varchar2(1) default ' ' not null,
  cmcdsi08    varchar2(1) default ' ' not null,
  cmcdsi09    varchar2(1) default ' ' not null,
  cmcdsi10    varchar2(1) default ' ' not null,
  cmcdsi11    varchar2(1) default ' ' not null,
  cmcdgrpv    varchar2(3) default ' ' not null,
  cmcddeft    varchar2(1) default ' ' not null,
  cmcdsecl    varchar2(2) default ' ' not null,
  cmcdspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint comcoda1 primary key( 
cmcdtcod,
cmcdacod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index comcoda2 on comcodaf
(
cmcdtcod,
cmcddesc,
cmcdacod
)
  tablespace pas_indx; 
create unique index comcoda3 on comcodaf
(
cmcdacod,
cmcdtcod
)
  tablespace pas_indx; 
create unique index comcoda4 on comcodaf
(
cmcdacod,
cmcddesc,
cmcdtcod
)
  tablespace pas_indx; 
create unique index comcoda5 on comcodaf
(
cmcdtcod,
cmcdhdpe,
cmcdacod
)
  tablespace pas_indx; 
create unique index comcoda6 on comcodaf
(
cmcdtcod,
cmcdacod,
cmcdfmdt
)
  tablespace pas_indx; 
