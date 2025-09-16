create table bokunqaf
(
  bkunvisn    varchar2(8) default ' ' not null,
  bkununiq    varchar2(10) default ' ' not null,
  bkunladm    varchar2(8) default ' ' not null,
  bkunwebl    varchar2(10) default ' ' not null,
  bkundatl    varchar2(8) default ' ' not null,
  bkuntiml    varchar2(8) default ' ' not null,
  bkunspar    varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokunqa1 primary key( 
bkunvisn,
bkununiq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
